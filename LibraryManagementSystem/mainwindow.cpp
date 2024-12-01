#include "mainwindow.h"
#include "adminloginwindow.h"
#include "login.h"
#include "ui_mainwindow.h"
#include "librarianlogin.h"
#include "filemanipulator.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    filemanipulator File;



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




void MainWindow::on_librarianPushButton_clicked()
{
    this->close();
    LibrarianLogin* lLogin = new LibrarianLogin();
    lLogin->show();
}

