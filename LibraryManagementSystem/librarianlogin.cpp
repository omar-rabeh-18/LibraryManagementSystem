#include "librarianlogin.h"
#include "ui_librarianlogin.h"
#include "librarian.h"
#include "filemanipulator.h"

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
    for(user* some_user : filemanipulator::the_librarian_data_vector)
    {
        qDebug() << "in loop statment";
        if(some_user->get_user_name() == ui->usernameLineEdit->text() && some_user->get_password() == ui->passwordLineEdit->text())
        {
            this->close();
            Librarian *librarianDashboard = new Librarian();
            librarianDashboard->show();
            break;
        }
    }


}

