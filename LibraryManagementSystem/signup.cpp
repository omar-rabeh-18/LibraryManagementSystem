#include "signup.h"
#include "login.h"
#include "ui_signup.h"

signup::signup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}

void signup::on_signupPushButton_clicked()
{
    hide();
    login userLogin;
    userLogin.setModal(true);
    userLogin.exec();
}

