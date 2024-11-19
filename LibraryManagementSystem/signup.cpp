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

    filemanipulator file;

    user* a_user = new user();

    a_user->set_user_name(ui->usernameLineEdit->text());
    if(ui->passwordLineEdit->text() == ui->confirmPasswordLineEdit->text())
    {
        a_user->set_password(ui->passwordLineEdit->text());

        bool user_name_already_exists = false;
        bool user_password_already_exits = false;

        for(user* some_user : file.the_users_data_vector)
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
            qDebug() << "username already exists";


        }

        else if(user_password_already_exits)
        {

            qDebug() << "password already exists";

        }

        else
        {
            file.the_users_data_vector.push_back(a_user);
            for(user* some_user : file.the_users_data_vector)
            {
                some_user->print_info();

            }
        }

    }

    else
    {
        qDebug() << "the passwords donot match";
    }



    file.users_files_writer();


    this->close();
    login* userLogin = new login();
    userLogin->show();
}

