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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QPushButton *signupPushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *confirmPasswordLabel;
    QLineEdit *confirmPasswordLineEdit;
    QLabel *backpic;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(519, 349);
        signupPushButton = new QPushButton(signup);
        signupPushButton->setObjectName("signupPushButton");
        signupPushButton->setGeometry(QRect(190, 210, 100, 32));
        layoutWidget = new QWidget(signup);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 80, 232, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        usernameLabel = new QLabel(layoutWidget);
        usernameLabel->setObjectName("usernameLabel");
        usernameLabel->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));

        horizontalLayout->addWidget(usernameLabel);

        usernameLineEdit = new QLineEdit(layoutWidget);
        usernameLineEdit->setObjectName("usernameLineEdit");

        horizontalLayout->addWidget(usernameLineEdit);

        layoutWidget1 = new QWidget(signup);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(80, 120, 227, 28));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        passwordLabel = new QLabel(layoutWidget1);
        passwordLabel->setObjectName("passwordLabel");
        passwordLabel->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));

        horizontalLayout_2->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(layoutWidget1);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordLineEdit);

        layoutWidget2 = new QWidget(signup);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(80, 160, 284, 28));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        confirmPasswordLabel = new QLabel(layoutWidget2);
        confirmPasswordLabel->setObjectName("confirmPasswordLabel");
        confirmPasswordLabel->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));

        horizontalLayout_3->addWidget(confirmPasswordLabel);

        confirmPasswordLineEdit = new QLineEdit(layoutWidget2);
        confirmPasswordLineEdit->setObjectName("confirmPasswordLineEdit");
        confirmPasswordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(confirmPasswordLineEdit);

        backpic = new QLabel(signup);
        backpic->setObjectName("backpic");
        backpic->setGeometry(QRect(-10, -10, 541, 361));

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Dialog", nullptr));
        signupPushButton->setText(QCoreApplication::translate("signup", "Signup", nullptr));
        usernameLabel->setText(QCoreApplication::translate("signup", "Username:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("signup", "Password:", nullptr));
        passwordLineEdit->setInputMask(QString());
        confirmPasswordLabel->setText(QCoreApplication::translate("signup", "Confirm Password:", nullptr));
        backpic->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
