/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *roleLabel;
    QPushButton *adminPushButton;
    QPushButton *userPushButton;
    QPushButton *librarianPushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(737, 389);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        roleLabel = new QLabel(centralwidget);
        roleLabel->setObjectName("roleLabel");
        roleLabel->setGeometry(QRect(220, 80, 301, 41));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        roleLabel->setFont(font);
        adminPushButton = new QPushButton(centralwidget);
        adminPushButton->setObjectName("adminPushButton");
        adminPushButton->setGeometry(QRect(160, 170, 100, 32));
        userPushButton = new QPushButton(centralwidget);
        userPushButton->setObjectName("userPushButton");
        userPushButton->setGeometry(QRect(450, 170, 100, 32));
        librarianPushButton = new QPushButton(centralwidget);
        librarianPushButton->setObjectName("librarianPushButton");
        librarianPushButton->setGeometry(QRect(300, 170, 101, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 737, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        roleLabel->setText(QCoreApplication::translate("MainWindow", "Please select your role:", nullptr));
        adminPushButton->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        userPushButton->setText(QCoreApplication::translate("MainWindow", "User", nullptr));
        librarianPushButton->setText(QCoreApplication::translate("MainWindow", "Librarian", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
