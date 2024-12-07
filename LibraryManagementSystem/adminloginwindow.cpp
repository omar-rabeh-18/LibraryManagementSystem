#include "adminloginwindow.h"
#include "admin.h"
#include "ui_adminloginwindow.h"
#include "filemanipulator.h"
#include "adminsignupwindow.h"
#include <QMessageBox>

adminLoginWindow::adminLoginWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminLoginWindow)
{
    ui->setupUi(this);
    this->resize(589, 318);

    QPixmap bg(":/resources/librarianlogin.png");

    ui->backpic->setPixmap(bg.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
   ui->backpic->resize(this->size());
    ui->backpic->lower();
}

adminLoginWindow::~adminLoginWindow()
{
    delete ui;
}

void adminLoginWindow::on_loginPushButton_clicked()
{

    filemanipulator file;
    bool error = true;
    for(user* some_user : file.the_admin_data_vector)
    {
      qDebug() << "in loop statment";
        if(some_user->get_user_name() == ui->usernameLineEdit->text() && some_user->get_password() == ui->passwordLineEdit->text())
        {
            qDebug() << "in if statment";
            error = false;
            this->close();

            admin *adminDashboard = new admin();
            adminDashboard->show();
        }


    }

    if(error)
    {
        QMessageBox::critical(this, "Error", "These Credentials Donot exit, Try SIGNING UP");
    }

}


void adminLoginWindow::on_loginPushButton_2_clicked()
{
    adminsignupwindow * signupdashboard = new adminsignupwindow();
    this->close();
    signupdashboard->show();

}

