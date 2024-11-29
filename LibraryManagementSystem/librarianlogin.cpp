#include "librarianlogin.h"
#include "ui_librarianlogin.h"
#include "librarian.h"

LibrarianLogin::LibrarianLogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LibrarianLogin)
{
    ui->setupUi(this);
}

LibrarianLogin::~LibrarianLogin()
{
    delete ui;
}

//TODO: Write the librarian Login Function properly

void LibrarianLogin::on_loginPushButton_clicked()
{
    this->close();
    Librarian *librarianDashboard = new Librarian();
    librarianDashboard->show();
}

