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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminLoginWindow
{
public:
    QLabel *titleLabel;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *loginPushButton;
    QPushButton *loginPushButton_2;
    QLabel *backpic;

    void setupUi(QDialog *adminLoginWindow)
    {
        if (adminLoginWindow->objectName().isEmpty())
            adminLoginWindow->setObjectName("adminLoginWindow");
        adminLoginWindow->resize(589, 318);
        titleLabel = new QLabel(adminLoginWindow);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(160, 20, 291, 61));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        titleLabel->setFont(font);
        layoutWidget = new QWidget(adminLoginWindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(170, 90, 234, 103));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        loginPushButton = new QPushButton(layoutWidget);
        loginPushButton->setObjectName("loginPushButton");

        horizontalLayout_3->addWidget(loginPushButton);

        loginPushButton_2 = new QPushButton(layoutWidget);
        loginPushButton_2->setObjectName("loginPushButton_2");

        horizontalLayout_3->addWidget(loginPushButton_2);


        verticalLayout->addLayout(horizontalLayout_3);

        backpic = new QLabel(adminLoginWindow);
        backpic->setObjectName("backpic");
        backpic->setGeometry(QRect(-10, -10, 601, 331));
        backpic->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(adminLoginWindow);

        QMetaObject::connectSlotsByName(adminLoginWindow);
    } // setupUi

    void retranslateUi(QDialog *adminLoginWindow)
    {
        adminLoginWindow->setWindowTitle(QCoreApplication::translate("adminLoginWindow", "Dialog", nullptr));
        titleLabel->setText(QCoreApplication::translate("adminLoginWindow", "Admin Login", nullptr));
        usernameLabel->setText(QCoreApplication::translate("adminLoginWindow", "Username:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("adminLoginWindow", "Password:", nullptr));
        loginPushButton->setText(QCoreApplication::translate("adminLoginWindow", "Login", nullptr));
        loginPushButton_2->setText(QCoreApplication::translate("adminLoginWindow", "Signup", nullptr));
        backpic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adminLoginWindow: public Ui_adminLoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGINWINDOW_H
