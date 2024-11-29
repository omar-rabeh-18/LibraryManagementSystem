#ifndef LIBRARIANLOGIN_H
#define LIBRARIANLOGIN_H

#include <QDialog>

namespace Ui {
class LibrarianLogin;
}

class LibrarianLogin : public QDialog
{
    Q_OBJECT

public:
    explicit LibrarianLogin(QWidget *parent = nullptr);
    ~LibrarianLogin();

private slots:
    void on_loginPushButton_clicked();

private:
    Ui::LibrarianLogin *ui;
};

#endif // LIBRARIANLOGIN_H
