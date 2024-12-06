/********************************************************************************
** Form generated from reading UI file 'adminloginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGINWINDOW_H
#define UI_ADMINLOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminLoginWindow
{
public:
    QLabel *usernameLabel;
    QLabel *passwordLabel;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QPushButton *loginPushButton;
    QLabel *titleLabel;
    QPushButton *loginPushButton_2;

    void setupUi(QDialog *adminLoginWindow)
    {
        if (adminLoginWindow->objectName().isEmpty())
            adminLoginWindow->setObjectName("adminLoginWindow");
        adminLoginWindow->resize(589, 318);
        usernameLabel = new QLabel(adminLoginWindow);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setGeometry(QRect(170, 90, 81, 16));
        passwordLabel = new QLabel(adminLoginWindow);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setGeometry(QRect(170, 130, 71, 16));
        usernameLineEdit = new QLineEdit(adminLoginWindow);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(250, 90, 161, 21));
        passwordLineEdit = new QLineEdit(adminLoginWindow);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(250, 130, 161, 21));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        loginPushButton = new QPushButton(adminLoginWindow);
        loginPushButton->setObjectName("loginPushButton");
        loginPushButton->setGeometry(QRect(200, 180, 100, 32));
        titleLabel = new QLabel(adminLoginWindow);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(210, 20, 181, 31));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        titleLabel->setFont(font);
        loginPushButton_2 = new QPushButton(adminLoginWindow);
        loginPushButton_2->setObjectName("loginPushButton_2");
        loginPushButton_2->setGeometry(QRect(330, 180, 100, 32));

        retranslateUi(adminLoginWindow);

        QMetaObject::connectSlotsByName(adminLoginWindow);
    } // setupUi

    void retranslateUi(QDialog *adminLoginWindow)
    {
        adminLoginWindow->setWindowTitle(QCoreApplication::translate("adminLoginWindow", "Dialog", nullptr));
        usernameLabel->setText(QCoreApplication::translate("adminLoginWindow", "Username:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("adminLoginWindow", "Password:", nullptr));
        loginPushButton->setText(QCoreApplication::translate("adminLoginWindow", "Login", nullptr));
        titleLabel->setText(QCoreApplication::translate("adminLoginWindow", "Admin Login", nullptr));
        loginPushButton_2->setText(QCoreApplication::translate("adminLoginWindow", "Signup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminLoginWindow: public Ui_adminLoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGINWINDOW_H
