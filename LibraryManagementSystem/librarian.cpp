#include "librarian.h"
#include "ui_librarian.h"
#include "mainwindow.h"
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
    //The reader functions till we make sure where are they called
    requests = filemanipulator::book_requests_vector;
    vector<user*> listOfCompleteUsers = filemanipulator::the_users_data_vector;

    qDebug() << requests.size() << "\n";
    for(int i = 0; i < requests.size(); i++){
        Request* request = requests[i];

        if(request->getDecision() != "Pending") continue;
        activeRequests.push_back(request);
        qDebug() << request->getUsername() << " " << QString::number(request->getISBN()) << "\n";
        for(int i = 0; i < listOfCompleteUsers.size(); i++){
            if(request->getUsername() == listOfCompleteUsers[i]->get_user_name()){
                users.push_back(listOfCompleteUsers[i]);
                break;
            }
        }
        books.push_back(myTrie->search(QString::number(request->getISBN()))[0]);
        qDebug() << "After Processing " << i << " Request" << "\n";
    }
    qDebug() << "Before Populating requests" << "\n";
    populate_requests();
    qDebug() << "After Populating requests" << "\n";
}

Librarian::~Librarian()
{
    delete ui;
}

void Librarian::populate_requests(){
    ui->ActiveRequests->clear();
    int index = 0;
    qDebug() << "Before for loop inside Populate" << "\n";
    for(const auto& request: activeRequests){
        QString requestDetails = QString("%1 requested %2[%3] on %4")
            .arg(request->getUsername())
            .arg(books[index]->getTitle())
            .arg(books[index]->getAvailableBooks())
            .arg(request->getDateOfRequest());
        qDebug() << "Inside for loop inside Populate, after creating details" << "\n";
        QListWidgetItem* item = new QListWidgetItem(requestDetails, ui->ActiveRequests);
        item->setData(Qt::UserRole, QVariant::fromValue(static_cast<void*>(request)));
        ui->ActiveRequests->addItem(item);
        index++;
        qDebug() << "In for loop inside Populate, after incrementing index" << "\n";
    }
    qDebug() << "After for loop inside Populate" << "\n";
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
            activeRequests[index]->decide(true);
            rBook->setAvailableBooks(rBook->getAvailableBooks()-1);
            rUser->set_borrowed_books(rBook->getTitle());
            rUser->borrowed_books_objects.push_back(rBook);
            books.erase(books.begin() + index);
            users.erase(users.begin() + index);
            activeRequests.erase(activeRequests.begin() + index);
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


void Librarian::on_signOutPushButton_clicked()
{
    filemanipulator File;
    File.book_request_writer();
    File.users_files_writer();
    File.books_files_writer();
    this->close();
    MainWindow *m = new MainWindow();
    m->show();
}

