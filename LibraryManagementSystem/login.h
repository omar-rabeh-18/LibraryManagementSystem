#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "filemanipulator.h"

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_loginPushButton_clicked();

    void on_signupPushButton_clicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H
