#include "mainwindow.h"
#include "adminloginwindow.h"
#include "login.h"
#include "ui_mainwindow.h"
#include "librarianlogin.h"
#include "filemanipulator.h"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    filemanipulator File;
    this->setFixedSize(800, 600);


    // Scale the pixmap to the button's size
    ui->pushButton->setText(""); // Removes the text
    QPixmap pixmap(":/resources/selectbutton.png");
    QPixmap scaledPixmap = pixmap.scaled(ui->pushButton->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    ui->pushButton->setIcon(QIcon(scaledPixmap));
    ui->pushButton->setIconSize(ui->pushButton->size());




    this->setStyleSheet(
        "background-image: url(:/resources/softermainmenubackground.png);"
        "background-repeat: no-repeat;"
        "background-position: center;"
        "background-size: cover;"
        );




}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    if(ui->comboBox->currentText() == "Reader")
    {
        this->close();
        login* userLogin = new login();
        userLogin->show();
    }

    else if(ui->comboBox->currentText() == "Librarian")
    {
        this->close();
        LibrarianLogin* lLogin = new LibrarianLogin();
        lLogin->show();
    }

    else if(ui->comboBox->currentText() == "Admin")
    {
        this->close();
        adminLoginWindow* aLogin = new adminLoginWindow();
        aLogin->show();
    }
}

