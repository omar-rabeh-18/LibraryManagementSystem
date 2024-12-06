#include "adminsignupwindow.h"
#include "ui_adminsignupwindow.h"
#include "filemanipulator.h"
#include <QMessageBox>
#include "adminloginwindow.h"

adminsignupwindow::adminsignupwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminsignupwindow)
{
    ui->setupUi(this);
}

adminsignupwindow::~adminsignupwindow()
{
    delete ui;
}

void adminsignupwindow::on_signupPushButton_clicked()
{
    filemanipulator file;

    user* a_user = new user();
    if(ui->confirmPasswordLineEdit_2->text() == SPC)
    {
    a_user->set_user_name(ui->usernameLineEdit->text());
    if(ui->passwordLineEdit->text() == ui->confirmPasswordLineEdit->text())
    {
        a_user->set_password(ui->passwordLineEdit->text());

        bool user_name_already_exists = false;
        bool user_password_already_exits = false;

        for(user* some_user : file.the_admin_data_vector)
        {
            if(some_user->get_user_name() == a_user->get_user_name())
            {
                user_name_already_exists = true;
                break;
            }

            if(some_user->get_password() == a_user->get_password())
            {
                user_password_already_exits = true;
                break;
            }
        }

        if(user_name_already_exists)
        {

            QMessageBox::critical(this, "Error", "The username already exists. Please choose a different username.");

            qDebug() << "username already exists";


        }

        else if(user_password_already_exits)
        {

            QMessageBox::critical(this, "Error", "The Password already exists. Please choose a different Password.");

            qDebug() << "password already exists";

        }

        else
        {
            file.the_admin_data_vector.push_back(a_user);
            for(user* some_user : file.the_admin_data_vector)
            {
                some_user->print_info();

            }
            file.admin_files_writer();
            this->close();
            adminLoginWindow* adminLogin = new adminLoginWindow();
            adminLogin->show();
        }

    }

    else
    {
        QMessageBox::critical(this, "Error", "Passwords DONOT match.");
        qDebug() << "the passwords donot match";
    }



    }

    else
    {
        QMessageBox::critical(this, "Error", "THE SPC IS INCORRECT");
    }




}

