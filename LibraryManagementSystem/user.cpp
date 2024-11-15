#include "user.h"
#include "searchwindow.h"
#include "ui_user.h"

user::user(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::user)
{
    ui->setupUi(this);
}

user::~user()
{
    delete ui;
}

void user::set_user_name(QString name)
{
    user_name = name;
}

QString user::get_user_name()
{
    return user_name;
}

void user::set_password(QString given_password)
{
    password = given_password;
}

QString user::get_password()
{
    return password;
}

void user::set_wishlisted_books(QString wishlisted_book)
{
    wishlisted_books.push_back(wishlisted_book);
}

vector<QString> user::get_whishlisted_books()
{
    return wishlisted_books;
}

void user::set_borrowed_books(QString borrowed_book)
{
    borrowed_books.push_back(borrowed_book);
}

vector<QString> user::get_borrowed_books()
{
    return borrowed_books;
}



void user::on_searchPushButton_clicked()
{
    hide();
    searchWindow s;
    s.setModal(true);
    s.exec();
}

