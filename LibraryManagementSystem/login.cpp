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
    this->close();
    user* u = new user();
    u->show();
}


void login::on_signupPushButton_clicked()
{
    this->close();
    signup* s = new signup();
    s->show();
}

