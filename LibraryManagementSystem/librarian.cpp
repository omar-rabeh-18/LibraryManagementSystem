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

    qDebug() << requests.size() << "\n";
    for(int i = 0; i < requests.size(); i++){
        Request* request = requests[i];

        if(request->getDecision() != "Pending") continue;
        activeRequests.push_back(request);
        qDebug() << request->getUsername() << " " << request->getISBN() << "\n";
    }
    qDebug() << "Before Populating requests" << "\n";
    populate_requests();
    qDebug() << "After Populating requests" << "\n";

    this->resize(696, 550);

    QPixmap bg("C:/Users/HP/Desktop/applied project pictures/librarianlogin.png");

    ui->backpic->setPixmap(bg.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    ui->backpic->resize(this->size());
    ui->backpic->lower();

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
        QString requestDetails = QString("%1 requested %2[Remaining:%3] on %4")
        .arg(request->getUsername())
            .arg(request->getTitle())
            .arg(request->bookToBeRequested->getAvailableBooks())
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

    if (selectedItem) {
        Request* currentRequest = static_cast<Request*>(selectedItem->data(Qt::UserRole).value<void*>());
        if(currentRequest->bookToBeRequested->getAvailableBooks() > 0){
            currentRequest->decide(true);
            currentRequest->bookToBeRequested->setAvailableBooks(currentRequest->bookToBeRequested->getAvailableBooks()-1);
            currentRequest->userRequestingBook->set_borrowed_books(currentRequest->bookToBeRequested->get_isbn());
            currentRequest->userRequestingBook->borrowed_books_objects.push_back(currentRequest->bookToBeRequested);
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
        Request* currentRequest = static_cast<Request*>(selectedItem->data(Qt::UserRole).value<void*>());
        currentRequest->decide(false);
        activeRequests.erase(activeRequests.begin() + index);
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

