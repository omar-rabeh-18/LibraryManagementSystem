#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include "filemanipulator.h"
#include "user.h";

namespace Ui {
class signup;
}

class signup : public QDialog
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();

private slots:
    void on_signupPushButton_clicked();

private:
    Ui::signup *ui;
};

#endif // SIGNUP_H
