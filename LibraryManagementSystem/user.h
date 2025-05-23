#ifndef USER_H
#define USER_H

#include <QDialog>
#include <Vector.h>
#include "book.h"
#include <QListWidgetItem>
#include <iostream>
using namespace std;


namespace Ui {
class user;
}

class user : public QDialog
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();
    void set_user_name(QString name);
    QString get_user_name();
    void set_password(QString given_password);
    QString get_password();
    void set_wishlisted_books(QString wishlisted_book);
    Vector<QString> get_whishlisted_books();
    void set_borrowed_books(QString borrowed_book);
    Vector<QString> get_borrowed_books();
    void print_info();


    Vector<book*> wishlisted_books_objects;
    Vector<book*> borrowed_books_objects;

    void refresh();

private slots:
    void on_searchPushButton_clicked();
    void populate_searchList();
    void populate_wishList();
    void populate_borrowedList();
    void on_pushButton_2_clicked();

    void on_searchList_itemClicked(QListWidgetItem *item);

    void on_signOutPushButton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::user *ui;
    QString user_name;
    QString password;
    Vector<QString> wishlisted_books;
    Vector<QString> borrowed_books;
    Vector<book*> results;
};

#endif // USER_H
