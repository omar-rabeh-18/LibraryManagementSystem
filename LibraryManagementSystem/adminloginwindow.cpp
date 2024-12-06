#include "adminloginwindow.h"
#include "admin.h"
#include "ui_adminloginwindow.h"
#include "filemanipulator.h"
#include "adminsignupwindow.h"

adminLoginWindow::adminLoginWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminLoginWindow)
{
    ui->setupUi(this);
}

adminLoginWindow::~adminLoginWindow()
{
    delete ui;
}

void adminLoginWindow::on_loginPushButton_clicked()
{

    filemanipulator file;
    for(user* some_user : file.the_admin_data_vector)
    {
      qDebug() << "in loop statment";
        if(some_user->get_user_name() == ui->usernameLineEdit->text() && some_user->get_password() == ui->passwordLineEdit->text())
        {
            qDebug() << "in if statment";
            this->close();

            admin *adminDashboard = new admin();
            adminDashboard->show();
        }
    }

}


void adminLoginWindow::on_loginPushButton_2_clicked()
{
    adminsignupwindow * signupdashboard = new adminsignupwindow();
    this->close();
    signupdashboard->show();

}

