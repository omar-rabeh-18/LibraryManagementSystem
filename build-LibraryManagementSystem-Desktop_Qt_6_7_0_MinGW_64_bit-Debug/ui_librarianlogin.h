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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LibrarianLogin
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QPushButton *loginPushButton;

    void setupUi(QDialog *LibrarianLogin)
    {
        if (LibrarianLogin->objectName().isEmpty())
            LibrarianLogin->setObjectName("LibrarianLogin");
        LibrarianLogin->resize(599, 468);
        widget = new QWidget(LibrarianLogin);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(150, 140, 306, 165));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleLabel = new QLabel(widget);
        titleLabel->setObjectName("titleLabel");
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        titleLabel->setFont(font);

        verticalLayout->addWidget(titleLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        usernameLabel = new QLabel(widget);
        usernameLabel->setObjectName("usernameLabel");

        horizontalLayout->addWidget(usernameLabel);

        usernameLineEdit = new QLineEdit(widget);
        usernameLineEdit->setObjectName("usernameLineEdit");

        horizontalLayout->addWidget(usernameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        passwordLabel = new QLabel(widget);
        passwordLabel->setObjectName("passwordLabel");

        horizontalLayout_2->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(widget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEchoMode(QLineEdit::Normal);

        horizontalLayout_2->addWidget(passwordLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        loginPushButton = new QPushButton(widget);
        loginPushButton->setObjectName("loginPushButton");

        verticalLayout->addWidget(loginPushButton);


        retranslateUi(LibrarianLogin);

        QMetaObject::connectSlotsByName(LibrarianLogin);
    } // setupUi

    void retranslateUi(QDialog *LibrarianLogin)
    {
        LibrarianLogin->setWindowTitle(QCoreApplication::translate("LibrarianLogin", "Dialog", nullptr));
        titleLabel->setText(QCoreApplication::translate("LibrarianLogin", "Librarian Login", nullptr));
        usernameLabel->setText(QCoreApplication::translate("LibrarianLogin", "Username:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("LibrarianLogin", "Password:", nullptr));
        loginPushButton->setText(QCoreApplication::translate("LibrarianLogin", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LibrarianLogin: public Ui_LibrarianLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIANLOGIN_H
