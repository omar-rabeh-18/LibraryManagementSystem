#include "mainwindow.h"
#include "adminloginwindow.h"
#include "login.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_userPushButton_clicked()
{
    this->close();
    login* userLogin = new login();
    userLogin->show();
}


void MainWindow::on_adminPushButton_clicked()
{
    this->close();
    adminLoginWindow* aLogin = new adminLoginWindow();
    aLogin->show();
}



