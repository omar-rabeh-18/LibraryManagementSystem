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
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QPushButton *loginPushButton;
    QLabel *backpic;

    void setupUi(QDialog *LibrarianLogin)
    {
        if (LibrarianLogin->objectName().isEmpty())
            LibrarianLogin->setObjectName("LibrarianLogin");
        LibrarianLogin->resize(599, 468);
        layoutWidget = new QWidget(LibrarianLogin);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(150, 140, 306, 165));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        titleLabel = new QLabel(layoutWidget);
        titleLabel->setObjectName("titleLabel");
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        titleLabel->setFont(font);

        verticalLayout->addWidget(titleLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        usernameLabel = new QLabel(layoutWidget);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));

        horizontalLayout->addWidget(usernameLabel);

        usernameLineEdit = new QLineEdit(layoutWidget);
        usernameLineEdit->setObjectName("usernameLineEdit");

        horizontalLayout->addWidget(usernameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        passwordLabel = new QLabel(layoutWidget);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));

        horizontalLayout_2->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(layoutWidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEchoMode(QLineEdit::Normal);

        horizontalLayout_2->addWidget(passwordLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        loginPushButton = new QPushButton(layoutWidget);
        loginPushButton->setObjectName("loginPushButton");

        verticalLayout->addWidget(loginPushButton);

        backpic = new QLabel(LibrarianLogin);
        backpic->setObjectName("backpic");
        backpic->setGeometry(QRect(-10, -10, 611, 481));

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
        backpic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LibrarianLogin: public Ui_LibrarianLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIANLOGIN_H
