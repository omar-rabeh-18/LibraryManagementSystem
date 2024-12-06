/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QPushButton *searchPushButton;
    QPushButton *signOutPushButton;
    QPushButton *pushButton_5;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextEdit *titleSearchTextedit;
    QPushButton *pushButton_2;
    QScrollArea *deleteArea;
    QWidget *scrollAreaWidgetContents_6;
    QListWidget *searchList;
    QLabel *userLabel_2;
    QWidget *tab_2;
    QLabel *userLabel;
    QPushButton *pushButton;
    QLabel *booksLabel;
    QPushButton *pushButton_3;
    QScrollArea *booksArea;
    QWidget *scrollAreaWidgetContents;
    QListWidget *borrowList;
    QPushButton *pushButton_4;
    QScrollArea *wishlistArea;
    QWidget *scrollAreaWidgetContents_2;
    QListWidget *wishList;
    QLabel *wishlistLabel;

    void setupUi(QDialog *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(1118, 619);
        searchPushButton = new QPushButton(user);
        searchPushButton->setObjectName("searchPushButton");
        searchPushButton->setGeometry(QRect(610, 520, 111, 61));
        signOutPushButton = new QPushButton(user);
        signOutPushButton->setObjectName("signOutPushButton");
        signOutPushButton->setGeometry(QRect(90, 520, 91, 51));
        pushButton_5 = new QPushButton(user);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(860, 530, 161, 29));
        tabWidget = new QTabWidget(user);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 1121, 561));
        tab = new QWidget();
        tab->setObjectName("tab");
        titleSearchTextedit = new QTextEdit(tab);
        titleSearchTextedit->setObjectName("titleSearchTextedit");
        titleSearchTextedit->setGeometry(QRect(280, 90, 471, 31));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(750, 90, 91, 31));
        deleteArea = new QScrollArea(tab);
        deleteArea->setObjectName("deleteArea");
        deleteArea->setGeometry(QRect(280, 120, 471, 261));
        deleteArea->setFrameShape(QFrame::NoFrame);
        deleteArea->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName("scrollAreaWidgetContents_6");
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 471, 261));
        searchList = new QListWidget(scrollAreaWidgetContents_6);
        searchList->setObjectName("searchList");
        searchList->setGeometry(QRect(0, 0, 471, 261));
        searchList->setFrameShape(QFrame::NoFrame);
        deleteArea->setWidget(scrollAreaWidgetContents_6);
        userLabel_2 = new QLabel(tab);
        userLabel_2->setObjectName("userLabel_2");
        userLabel_2->setGeometry(QRect(20, 10, 331, 61));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        userLabel_2->setFont(font);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        userLabel = new QLabel(tab_2);
        userLabel->setObjectName("userLabel");
        userLabel->setGeometry(QRect(130, 50, 331, 61));
        userLabel->setFont(font);
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(100, 130, 75, 24));
        booksLabel = new QLabel(tab_2);
        booksLabel->setObjectName("booksLabel");
        booksLabel->setGeometry(QRect(290, 130, 71, 16));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(60, 180, 121, 24));
        booksArea = new QScrollArea(tab_2);
        booksArea->setObjectName("booksArea");
        booksArea->setGeometry(QRect(260, 150, 161, 141));
        booksArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 159, 139));
        borrowList = new QListWidget(scrollAreaWidgetContents);
        borrowList->setObjectName("borrowList");
        borrowList->setGeometry(QRect(10, 0, 141, 131));
        booksArea->setWidget(scrollAreaWidgetContents);
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(70, 230, 93, 29));
        wishlistArea = new QScrollArea(tab_2);
        wishlistArea->setObjectName("wishlistArea");
        wishlistArea->setGeometry(QRect(280, 290, 161, 141));
        wishlistArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 159, 139));
        wishList = new QListWidget(scrollAreaWidgetContents_2);
        wishList->setObjectName("wishList");
        wishList->setGeometry(QRect(10, 0, 141, 131));
        wishlistArea->setWidget(scrollAreaWidgetContents_2);
        wishlistLabel = new QLabel(tab_2);
        wishlistLabel->setObjectName("wishlistLabel");
        wishlistLabel->setGeometry(QRect(180, 300, 71, 16));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(user);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QDialog *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "Dialog", nullptr));
        searchPushButton->setText(QCoreApplication::translate("user", "DO NOT USE NOW", nullptr));
        signOutPushButton->setText(QCoreApplication::translate("user", "Sign Out", nullptr));
        pushButton_5->setText(QCoreApplication::translate("user", "Remove from wishlist", nullptr));
        pushButton_2->setText(QCoreApplication::translate("user", "Search", nullptr));
        userLabel_2->setText(QCoreApplication::translate("user", "User Dashboard", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("user", "Tab 1", nullptr));
        userLabel->setText(QCoreApplication::translate("user", "User Dashboard", nullptr));
        pushButton->setText(QCoreApplication::translate("user", "Borrow", nullptr));
        booksLabel->setText(QCoreApplication::translate("user", "My Books:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("user", "Add to wishlist", nullptr));
        pushButton_4->setText(QCoreApplication::translate("user", "Unborrow", nullptr));
        wishlistLabel->setText(QCoreApplication::translate("user", "Wishlist:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("user", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
