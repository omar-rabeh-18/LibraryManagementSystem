/********************************************************************************
** Form generated from reading UI file 'librarianlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARIANLOGIN_H
#define UI_LIBRARIANLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LibrarianLogin
{
public:
    QLabel *titleLabel;
    QLabel *passwordLabel;
    QLineEdit *usernameLineEdit;
    QPushButton *loginPushButton;
    QLineEdit *passwordLineEdit;
    QLabel *usernameLabel;

    void setupUi(QDialog *LibrarianLogin)
    {
        if (LibrarianLogin->objectName().isEmpty())
            LibrarianLogin->setObjectName("LibrarianLogin");
        LibrarianLogin->resize(599, 468);
        titleLabel = new QLabel(LibrarianLogin);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(190, 80, 271, 51));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        titleLabel->setFont(font);
        passwordLabel = new QLabel(LibrarianLogin);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setGeometry(QRect(150, 190, 71, 16));
        usernameLineEdit = new QLineEdit(LibrarianLogin);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(230, 150, 161, 21));
        loginPushButton = new QPushButton(LibrarianLogin);
        loginPushButton->setObjectName("loginPushButton");
        loginPushButton->setGeometry(QRect(220, 240, 100, 32));
        passwordLineEdit = new QLineEdit(LibrarianLogin);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(230, 190, 161, 21));
        passwordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);
        usernameLabel = new QLabel(LibrarianLogin);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setGeometry(QRect(150, 150, 81, 16));

        retranslateUi(LibrarianLogin);

        QMetaObject::connectSlotsByName(LibrarianLogin);
    } // setupUi

    void retranslateUi(QDialog *LibrarianLogin)
    {
        LibrarianLogin->setWindowTitle(QCoreApplication::translate("LibrarianLogin", "Dialog", nullptr));
        titleLabel->setText(QCoreApplication::translate("LibrarianLogin", "Librarian Login", nullptr));
        passwordLabel->setText(QCoreApplication::translate("LibrarianLogin", "Password:", nullptr));
        loginPushButton->setText(QCoreApplication::translate("LibrarianLogin", "Login", nullptr));
        usernameLabel->setText(QCoreApplication::translate("LibrarianLogin", "Username:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LibrarianLogin: public Ui_LibrarianLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIANLOGIN_H
