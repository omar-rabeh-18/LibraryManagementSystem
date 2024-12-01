#include "login.h"
#include "mainwindow.h"
#include "signup.h"
#include "ui_login.h"
#include "user.h"

login::login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}




void login::on_loginPushButton_clicked()
{
    filemanipulator file;
    for(user* some_user : file.the_users_data_vector)
    {
        if(some_user->get_user_name() == ui->usernameLineEdit->text() && some_user->get_password() == ui->passwordLineEdit->text())
        {

            this->close();

            some_user->show();
            //TODO: Fix the not showing up of borrowed books/wishlisted books in User class
            //TODO: By extension, think of the unborrow function
            some_user->refresh();
        }
    }


}


void login::on_signupPushButton_clicked()
{
    this->close();
    signup* s = new signup();
    s->show();
}

