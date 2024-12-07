#include "librarianlogin.h"
#include "ui_librarianlogin.h"
#include "librarian.h"
#include "filemanipulator.h"
#include <QMessageBox>

LibrarianLogin::LibrarianLogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LibrarianLogin)
{
    ui->setupUi(this);

    this->resize(599, 468);

    QPixmap bg(":/resources/librarianlogin.png");

    ui->backpic->setPixmap(bg.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    ui->backpic->resize(this->size());
    ui->backpic->lower();

}

LibrarianLogin::~LibrarianLogin()
{
    delete ui;
}

//TODO: Write the librarian Login Function properly

void LibrarianLogin::on_loginPushButton_clicked()
{
    bool error = true;

    for(user* some_user : filemanipulator::the_librarian_data_vector)
    {
        qDebug() << "in loop statment";
        if(some_user->get_user_name() == ui->usernameLineEdit->text() && some_user->get_password() == ui->passwordLineEdit->text())
        {
            this->close();
            Librarian *librarianDashboard = new Librarian();
            librarianDashboard->show();
            error = false;
            break;
        }

    }

    if(error)
    {
        QMessageBox::critical(this, "Error", "These Credentials Donot exit, ASK AN ADMIN FOR HELP");
    }


}

