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
    QWidget *widget;
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

    void setupUi(QDialog *adminsignupwindow)
    {
        if (adminsignupwindow->objectName().isEmpty())
            adminsignupwindow->setObjectName("adminsignupwindow");
        adminsignupwindow->resize(449, 362);
        widget = new QWidget(adminsignupwindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(70, 80, 286, 171));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        confirmPasswordLabel = new QLabel(widget);
        confirmPasswordLabel->setObjectName("confirmPasswordLabel");

        horizontalLayout_3->addWidget(confirmPasswordLabel);

        confirmPasswordLineEdit = new QLineEdit(widget);
        confirmPasswordLineEdit->setObjectName("confirmPasswordLineEdit");
        confirmPasswordLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(confirmPasswordLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        confirmPasswordLabel_2 = new QLabel(widget);
        confirmPasswordLabel_2->setObjectName("confirmPasswordLabel_2");

        horizontalLayout_4->addWidget(confirmPasswordLabel_2);

        confirmPasswordLineEdit_2 = new QLineEdit(widget);
        confirmPasswordLineEdit_2->setObjectName("confirmPasswordLineEdit_2");
        confirmPasswordLineEdit_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(confirmPasswordLineEdit_2);


        verticalLayout->addLayout(horizontalLayout_4);

        signupPushButton = new QPushButton(widget);
        signupPushButton->setObjectName("signupPushButton");

        verticalLayout->addWidget(signupPushButton);


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
    } // retranslateUi

};

namespace Ui {
    class adminsignupwindow: public Ui_adminsignupwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSIGNUPWINDOW_H
