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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QLabel *userLabel;
    QLabel *booksLabel;
    QScrollArea *booksArea;
    QWidget *scrollAreaWidgetContents;
    QListWidget *borrowList;
    QScrollArea *wishlistArea;
    QWidget *scrollAreaWidgetContents_2;
    QListWidget *wishList;
    QLabel *wishlistLabel;
    QPushButton *searchPushButton;
    QLabel *label_6;
    QScrollArea *deleteArea;
    QWidget *scrollAreaWidgetContents_6;
    QListWidget *searchList;
    QPushButton *pushButton_2;
    QTextEdit *titleSearchTextedit;
    QPushButton *signOutPushButton;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(1118, 619);
        userLabel = new QLabel(user);
        userLabel->setObjectName("userLabel");
        userLabel->setGeometry(QRect(50, 40, 331, 61));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        userLabel->setFont(font);
        booksLabel = new QLabel(user);
        booksLabel->setObjectName("booksLabel");
        booksLabel->setGeometry(QRect(770, 160, 71, 16));
        booksArea = new QScrollArea(user);
        booksArea->setObjectName("booksArea");
        booksArea->setGeometry(QRect(860, 130, 161, 141));
        booksArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 159, 139));
        borrowList = new QListWidget(scrollAreaWidgetContents);
        borrowList->setObjectName("borrowList");
        borrowList->setGeometry(QRect(10, 0, 141, 131));
        booksArea->setWidget(scrollAreaWidgetContents);
        wishlistArea = new QScrollArea(user);
        wishlistArea->setObjectName("wishlistArea");
        wishlistArea->setGeometry(QRect(860, 370, 161, 141));
        wishlistArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 159, 139));
        wishList = new QListWidget(scrollAreaWidgetContents_2);
        wishList->setObjectName("wishList");
        wishList->setGeometry(QRect(10, 0, 141, 131));
        wishlistArea->setWidget(scrollAreaWidgetContents_2);
        wishlistLabel = new QLabel(user);
        wishlistLabel->setObjectName("wishlistLabel");
        wishlistLabel->setGeometry(QRect(770, 370, 71, 16));
        searchPushButton = new QPushButton(user);
        searchPushButton->setObjectName("searchPushButton");
        searchPushButton->setGeometry(QRect(610, 520, 111, 61));
        label_6 = new QLabel(user);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 260, 49, 16));
        deleteArea = new QScrollArea(user);
        deleteArea->setObjectName("deleteArea");
        deleteArea->setGeometry(QRect(430, 20, 221, 441));
        deleteArea->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName("scrollAreaWidgetContents_6");
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 219, 439));
        searchList = new QListWidget(scrollAreaWidgetContents_6);
        searchList->setObjectName("searchList");
        searchList->setGeometry(QRect(20, 0, 171, 441));
        deleteArea->setWidget(scrollAreaWidgetContents_6);
        pushButton_2 = new QPushButton(user);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(170, 310, 91, 51));
        titleSearchTextedit = new QTextEdit(user);
        titleSearchTextedit->setObjectName("titleSearchTextedit");
        titleSearchTextedit->setGeometry(QRect(120, 260, 201, 31));
        signOutPushButton = new QPushButton(user);
        signOutPushButton->setObjectName("signOutPushButton");
        signOutPushButton->setGeometry(QRect(90, 520, 91, 51));
        pushButton = new QPushButton(user);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(670, 80, 75, 24));
        pushButton_3 = new QPushButton(user);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(670, 110, 121, 24));
        pushButton_4 = new QPushButton(user);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(890, 290, 93, 29));
        pushButton_5 = new QPushButton(user);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(860, 530, 161, 29));

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QDialog *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "Dialog", nullptr));
        userLabel->setText(QCoreApplication::translate("user", "User Dashboard", nullptr));
        booksLabel->setText(QCoreApplication::translate("user", "My Books:", nullptr));
        wishlistLabel->setText(QCoreApplication::translate("user", "Wishlist:", nullptr));
        searchPushButton->setText(QCoreApplication::translate("user", "DO NOT USE NOW", nullptr));
        label_6->setText(QCoreApplication::translate("user", "Search:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("user", "Search", nullptr));
        signOutPushButton->setText(QCoreApplication::translate("user", "Sign Out", nullptr));
        pushButton->setText(QCoreApplication::translate("user", "Borrow", nullptr));
        pushButton_3->setText(QCoreApplication::translate("user", "Add to wishlist", nullptr));
        pushButton_4->setText(QCoreApplication::translate("user", "Unborrow", nullptr));
        pushButton_5->setText(QCoreApplication::translate("user", "Remove from wishlist", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
