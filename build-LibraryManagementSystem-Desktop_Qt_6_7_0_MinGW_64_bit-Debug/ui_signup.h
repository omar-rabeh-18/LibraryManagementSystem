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
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *confirmPasswordLabel;
    QLineEdit *confirmPasswordLineEdit;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(519, 349);
        signupPushButton = new QPushButton(signup);
        signupPushButton->setObjectName("signupPushButton");
        signupPushButton->setGeometry(QRect(190, 210, 100, 32));
        widget = new QWidget(signup);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(80, 80, 232, 28));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        usernameLabel = new QLabel(widget);
        usernameLabel->setObjectName("usernameLabel");

        horizontalLayout->addWidget(usernameLabel);

        usernameLineEdit = new QLineEdit(widget);
        usernameLineEdit->setObjectName("usernameLineEdit");

        horizontalLayout->addWidget(usernameLineEdit);

        widget1 = new QWidget(signup);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(80, 120, 227, 28));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        passwordLabel = new QLabel(widget1);
        passwordLabel->setObjectName("passwordLabel");

        horizontalLayout_2->addWidget(passwordLabel);

        passwordLineEdit = new QLineEdit(widget1);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordLineEdit);

        widget2 = new QWidget(signup);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(80, 160, 284, 28));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        confirmPasswordLabel = new QLabel(widget2);
        confirmPasswordLabel->setObjectName("confirmPasswordLabel");

        horizontalLayout_3->addWidget(confirmPasswordLabel);

        confirmPasswordLineEdit = new QLineEdit(widget2);
        confirmPasswordLineEdit->setObjectName("confirmPasswordLineEdit");
        confirmPasswordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(confirmPasswordLineEdit);


        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Dialog", nullptr));
        signupPushButton->setText(QCoreApplication::translate("signup", "Signup", nullptr));
        usernameLabel->setText(QCoreApplication::translate("signup", "Username:", nullptr));
        passwordLabel->setText(QCoreApplication::translate("signup", "Password:", nullptr));
        confirmPasswordLabel->setText(QCoreApplication::translate("signup", "Confirm Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
