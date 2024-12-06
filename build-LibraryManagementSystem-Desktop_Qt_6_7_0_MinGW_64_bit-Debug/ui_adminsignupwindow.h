/********************************************************************************
** Form generated from reading UI file 'adminsignupwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSIGNUPWINDOW_H
#define UI_ADMINSIGNUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminsignupwindow
{
public:
    QLabel *confirmPasswordLabel;
    QLabel *usernameLabel;
    QLineEdit *passwordLineEdit;
    QLabel *passwordLabel;
    QPushButton *signupPushButton;
    QLineEdit *usernameLineEdit;
    QLineEdit *confirmPasswordLineEdit;
    QLabel *confirmPasswordLabel_2;
    QLineEdit *confirmPasswordLineEdit_2;

    void setupUi(QDialog *adminsignupwindow)
    {
        if (adminsignupwindow->objectName().isEmpty())
            adminsignupwindow->setObjectName("adminsignupwindow");
        adminsignupwindow->resize(449, 362);
        confirmPasswordLabel = new QLabel(adminsignupwindow);
        confirmPasswordLabel->setObjectName("confirmPasswordLabel");
        confirmPasswordLabel->setGeometry(QRect(70, 160, 121, 16));
        usernameLabel = new QLabel(adminsignupwindow);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setGeometry(QRect(70, 80, 71, 16));
        passwordLineEdit = new QLineEdit(adminsignupwindow);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(150, 120, 201, 21));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        passwordLabel = new QLabel(adminsignupwindow);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setGeometry(QRect(70, 120, 71, 16));
        signupPushButton = new QPushButton(adminsignupwindow);
        signupPushButton->setObjectName("signupPushButton");
        signupPushButton->setGeometry(QRect(170, 260, 100, 32));
        usernameLineEdit = new QLineEdit(adminsignupwindow);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(150, 80, 201, 21));
        confirmPasswordLineEdit = new QLineEdit(adminsignupwindow);
        confirmPasswordLineEdit->setObjectName("confirmPasswordLineEdit");
        confirmPasswordLineEdit->setGeometry(QRect(190, 160, 161, 21));
        confirmPasswordLineEdit->setEchoMode(QLineEdit::Password);
        confirmPasswordLabel_2 = new QLabel(adminsignupwindow);
        confirmPasswordLabel_2->setObjectName("confirmPasswordLabel_2");
        confirmPasswordLabel_2->setGeometry(QRect(70, 190, 31, 16));
        confirmPasswordLineEdit_2 = new QLineEdit(adminsignupwindow);
        confirmPasswordLineEdit_2->setObjectName("confirmPasswordLineEdit_2");
        confirmPasswordLineEdit_2->setGeometry(QRect(120, 190, 81, 21));
        confirmPasswordLineEdit_2->setEchoMode(QLineEdit::Password);

        retranslateUi(adminsignupwindow);

        QMetaObject::connectSlotsByName(adminsignupwindow);
    } // setupUi

    void retranslateUi(QDialog *adminsignupwindow)
    {
        adminsignupwindow->setWindowTitle(QCoreApplication::translate("adminsignupwindow", "Dialog", nullptr));
        confirmPasswordLabel->setText(QCoreApplication::translate("adminsignupwindow", "Confirm Password:", nullptr));
        usernameLabel->setText(QCoreApplication::translate("adminsignupwindow", "Username:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("adminsignupwindow", "Password:", nullptr));
        signupPushButton->setText(QCoreApplication::translate("adminsignupwindow", "Signup", nullptr));
        confirmPasswordLabel_2->setText(QCoreApplication::translate("adminsignupwindow", "SPC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminsignupwindow: public Ui_adminsignupwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSIGNUPWINDOW_H
