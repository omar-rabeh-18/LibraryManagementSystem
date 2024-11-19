/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *usernameLabel;
    QLabel *passwordLabel;
    QPushButton *loginPushButton;
    QPushButton *signupPushButton;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *titleLabel;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(564, 313);
        usernameLabel = new QLabel(login);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setGeometry(QRect(150, 100, 71, 16));
        passwordLabel = new QLabel(login);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setGeometry(QRect(150, 140, 71, 16));
        loginPushButton = new QPushButton(login);
        loginPushButton->setObjectName("loginPushButton");
        loginPushButton->setGeometry(QRect(150, 190, 100, 32));
        signupPushButton = new QPushButton(login);
        signupPushButton->setObjectName("signupPushButton");
        signupPushButton->setGeometry(QRect(290, 190, 100, 32));
        usernameLineEdit = new QLineEdit(login);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(230, 100, 161, 21));
        passwordLineEdit = new QLineEdit(login);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(230, 140, 161, 21));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        titleLabel = new QLabel(login);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(200, 30, 141, 41));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        titleLabel->setFont(font);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Dialog", nullptr));
        usernameLabel->setText(QCoreApplication::translate("login", "Username:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("login", "Password:", nullptr));
        loginPushButton->setText(QCoreApplication::translate("login", "Login", nullptr));
        signupPushButton->setText(QCoreApplication::translate("login", "Signup", nullptr));
        titleLabel->setText(QCoreApplication::translate("login", "User Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
