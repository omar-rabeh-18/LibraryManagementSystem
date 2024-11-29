#include "librarian.h"
#include "ui_librarian.h"
#include "filemanipulator.h"
#include <vector>
#include "trie.h"
#include <QDebug>
using namespace std;
extern Trie* myTrie;
Librarian::Librarian(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Librarian)
{
    ui->setupUi(this);
    ui->warningLabel->setHidden(true);
    filemanipulator File;
    //The reader functions till we make sure where are they called
    File.book_request_reader();
    File.users_files_reader();
    File.books_files_reader();
    vector<Request*> requests = File.book_requests_vector;
    vector<user*> listOfCompleteUsers = File.the_users_data_vector;


    for(Request* request : requests){
        qDebug() << request->getUsername() << " " << QString::number(request->getISBN()) << "\n";
        for(int i = 0; i < listOfCompleteUsers.size(); i++){
            if(request->getUsername() == listOfCompleteUsers[i]->get_user_name()){
                users.push_back(listOfCompleteUsers[i]);
                break;
            }
        }
        books.push_back(myTrie->search(QString::number(request->getISBN()))[0]);
    }
}

Librarian::~Librarian()
{
    delete ui;
}

void Librarian::populate_requests(){
    ui->ActiveRequests->clear();
    int index = 0;
    for(const auto& request: requests){
        if(request->getDecision().toLower() != "pending"){
            continue;
        }
        QString requestDetails = QString("%1 requested %2[%3] on %4")
            .arg(request->getUsername())
            .arg(books[index]->getTitle())
            .arg(books[index]->get_book_num_lib())
            .arg(request->getDateOfRequest());

        QListWidgetItem* item = new QListWidgetItem(requestDetails, ui->ActiveRequests);
        item->setData(Qt::UserRole, QVariant::fromValue(static_cast<void*>(request)));
        ui->ActiveRequests->addItem(item);
    }
}

void Librarian::on_acceptButton_clicked()
{
    ui->warningLabel->setHidden(true);
    auto selectedItem = ui->ActiveRequests->currentItem();
    int index = ui->ActiveRequests->currentIndex().row();
    book* rBook = books[index];
    user* rUser = users[index];

    if (selectedItem) {
        if(rBook->getAvailableBooks() > 0){
            requests[index]->decide(true);
            rBook->setAvailableBooks(rBook->getAvailableBooks()-1);
            rUser->set_borrowed_books(rBook->getTitle());
            books.erase(books.begin() + index);
            users.erase(users.begin() + index);
            requests.erase(requests.begin() + index);
            populate_requests();
        }else{
            ui->warningLabel->setText("*You cannot Allow this request due to limited number of Books");
            ui->warningLabel->setHidden(false);
        }
    }else{
        ui->warningLabel->setText("*Please Highlight a request before making a decision");
        ui->warningLabel->setHidden(false);
    }
}


void Librarian::on_refuseButton_clicked()
{
    ui->warningLabel->setHidden(true);
    auto selectedItem = ui->ActiveRequests->currentItem();
    int index = ui->ActiveRequests->currentIndex().row();

    if (selectedItem) {
        requests[index]->decide(false);
        books.erase(books.begin() + index);
        users.erase(users.begin() + index);
        requests.erase(requests.begin() + index);
        populate_requests();
    }else{
        ui->warningLabel->setText("*Please Highlight a request before making a decision");
        ui->warningLabel->setHidden(false);
    }
}

