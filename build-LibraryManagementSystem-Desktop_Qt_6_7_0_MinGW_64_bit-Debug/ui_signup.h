/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QLabel *usernameLabel;
    QLabel *passwordLabel;
    QLabel *confirmPasswordLabel;
    QPushButton *signupPushButton;
    QLineEdit *usernameLineEdit;
    QLineEdit *confirmPasswordLineEdit;
    QLineEdit *passwordLineEdit;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(519, 349);
        usernameLabel = new QLabel(signup);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setGeometry(QRect(80, 80, 71, 16));
        passwordLabel = new QLabel(signup);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setGeometry(QRect(80, 120, 71, 16));
        confirmPasswordLabel = new QLabel(signup);
        confirmPasswordLabel->setObjectName("confirmPasswordLabel");
        confirmPasswordLabel->setGeometry(QRect(80, 160, 121, 16));
        signupPushButton = new QPushButton(signup);
        signupPushButton->setObjectName("signupPushButton");
        signupPushButton->setGeometry(QRect(190, 210, 100, 32));
        usernameLineEdit = new QLineEdit(signup);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(160, 80, 201, 21));
        confirmPasswordLineEdit = new QLineEdit(signup);
        confirmPasswordLineEdit->setObjectName("confirmPasswordLineEdit");
        confirmPasswordLineEdit->setGeometry(QRect(200, 160, 161, 21));
        confirmPasswordLineEdit->setEchoMode(QLineEdit::Password);
        passwordLineEdit = new QLineEdit(signup);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(160, 120, 201, 21));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Dialog", nullptr));
        usernameLabel->setText(QCoreApplication::translate("signup", "Username:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("signup", "Password:", nullptr));
        confirmPasswordLabel->setText(QCoreApplication::translate("signup", "Confirm Password:", nullptr));
        signupPushButton->setText(QCoreApplication::translate("signup", "Signup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
