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
    hide();
    user u;
    u.setModal(true);
    u.exec();
}


void login::on_signupPushButton_clicked()
{
    hide();
    signup s;
    s.setModal(true);
    s.exec();
}

