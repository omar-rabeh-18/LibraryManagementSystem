#include "adminloginwindow.h"
#include "admin.h"
#include "ui_adminloginwindow.h"

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
    hide();
    admin adminDashboard;
    adminDashboard.setModal(true);
    adminDashboard.exec();
}
