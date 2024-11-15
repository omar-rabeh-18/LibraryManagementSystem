#ifndef USER_H
#define USER_H

#include <QDialog>
#include <vector>
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

private:
    Ui::user *ui;
    QString user_name;
    QString password;
    vector<QString> wishlisted_books;
    vector<QString> borrowed_books;
};

#endif // USER_H
