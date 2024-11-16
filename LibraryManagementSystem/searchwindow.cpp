#include "searchwindow.h"
#include "ui_searchwindow.h"
#include "user.h"

searchWindow::searchWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::searchWindow)
{
    ui->setupUi(this);
}

searchWindow::~searchWindow()
{
    delete ui;
}

void searchWindow::on_pushButton_clicked()
{
    this->close();
    user* userDashboard = new user();
    userDashboard->show();
}

