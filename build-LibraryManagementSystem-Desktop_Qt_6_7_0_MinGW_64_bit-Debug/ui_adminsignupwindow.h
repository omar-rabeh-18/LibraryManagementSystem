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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminsignupwindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *confirmPasswordLabel;
    QLineEdit *confirmPasswordLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *confirmPasswordLabel_2;
    QLineEdit *confirmPasswordLineEdit_2;
    QPushButton *signupPushButton;
    QLabel *backpic;

    void setupUi(QDialog *adminsignupwindow)
    {
        if (adminsignupwindow->objectName().isEmpty())
            adminsignupwindow->setObjectName("adminsignupwindow");
        adminsignupwindow->resize(449, 362);
        layoutWidget = new QWidget(adminsignupwindow);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 80, 286, 171));
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
        confirmPasswordLabel = new QLabel(layoutWidget);
        confirmPasswordLabel->setObjectName("confirmPasswordLabel");
        confirmPasswordLabel->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));

        horizontalLayout_3->addWidget(confirmPasswordLabel);

        confirmPasswordLineEdit = new QLineEdit(layoutWidget);
        confirmPasswordLineEdit->setObjectName("confirmPasswordLineEdit");
        confirmPasswordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(confirmPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        confirmPasswordLabel_2 = new QLabel(layoutWidget);
        confirmPasswordLabel_2->setObjectName("confirmPasswordLabel_2");
        confirmPasswordLabel_2->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));

        horizontalLayout_4->addWidget(confirmPasswordLabel_2);

        confirmPasswordLineEdit_2 = new QLineEdit(layoutWidget);
        confirmPasswordLineEdit_2->setObjectName("confirmPasswordLineEdit_2");
        confirmPasswordLineEdit_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(confirmPasswordLineEdit_2);


        verticalLayout->addLayout(horizontalLayout_4);

        signupPushButton = new QPushButton(layoutWidget);
        signupPushButton->setObjectName("signupPushButton");

        verticalLayout->addWidget(signupPushButton);

        backpic = new QLabel(adminsignupwindow);
        backpic->setObjectName("backpic");
        backpic->setGeometry(QRect(-10, -10, 461, 381));

        retranslateUi(adminsignupwindow);

        QMetaObject::connectSlotsByName(adminsignupwindow);
    } // setupUi

    void retranslateUi(QDialog *adminsignupwindow)
    {
        adminsignupwindow->setWindowTitle(QCoreApplication::translate("adminsignupwindow", "Dialog", nullptr));
        usernameLabel->setText(QCoreApplication::translate("adminsignupwindow", "Username:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("adminsignupwindow", "Password:", nullptr));
        confirmPasswordLabel->setText(QCoreApplication::translate("adminsignupwindow", "Confirm Password:", nullptr));
        confirmPasswordLabel_2->setText(QCoreApplication::translate("adminsignupwindow", "SPC", nullptr));
        signupPushButton->setText(QCoreApplication::translate("adminsignupwindow", "Signup", nullptr));
        backpic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class adminsignupwindow: public Ui_adminsignupwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSIGNUPWINDOW_H
