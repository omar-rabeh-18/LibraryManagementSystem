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
    hide();
    login userLogin;
    userLogin.setModal(true);
    userLogin.exec();
}


void MainWindow::on_adminPushButton_clicked()
{
    hide();
    adminLoginWindow aLogin;
    aLogin.setModal(true);
    aLogin.exec();
}

