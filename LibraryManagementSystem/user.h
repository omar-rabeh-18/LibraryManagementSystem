#ifndef USER_H
#define USER_H

#include <QDialog>
#include <vector>
#include "book.h"
#include <QListWidgetItem>
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
    vector<QString> get_whishlisted_books();
    void set_borrowed_books(QString borrowed_book);
    vector<QString> get_borrowed_books();


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

private:
    Ui::user *ui;
    QString user_name;
    QString password;
    vector<book*> wishlisted_books;
    vector<book*> borrowed_books;
    vector<book*> results;
};

#endif // USER_H
