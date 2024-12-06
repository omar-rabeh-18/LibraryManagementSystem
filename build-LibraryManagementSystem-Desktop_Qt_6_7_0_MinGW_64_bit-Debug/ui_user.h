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
#include <QtWidgets/QHBoxLayout>
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
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextEdit *titleSearchTextedit;
    QScrollArea *deleteArea;
    QWidget *scrollAreaWidgetContents_6;
    QListWidget *searchList;
    QLabel *userLabel_2;
    QPushButton *signOutPushButton;
    QPushButton *pushButton_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLabel *backpic;
    QWidget *tab_2;
    QLabel *booksLabel;
    QScrollArea *booksArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_4;
    QScrollArea *wishlistArea;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_4;
    QListWidget *wishList;
    QLabel *wishlistLabel;
    QLabel *userLabel_5;
    QPushButton *pushButton_5;
    QListWidget *borrowList;
    QLabel *backpic_2;

    void setupUi(QDialog *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(1118, 619);
        tabWidget = new QTabWidget(user);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 1121, 621));
        tab = new QWidget();
        tab->setObjectName("tab");
        titleSearchTextedit = new QTextEdit(tab);
        titleSearchTextedit->setObjectName("titleSearchTextedit");
        titleSearchTextedit->setGeometry(QRect(280, 90, 471, 31));
        titleSearchTextedit->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
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
        searchList->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
        searchList->setFrameShape(QFrame::NoFrame);
        deleteArea->setWidget(scrollAreaWidgetContents_6);
        userLabel_2 = new QLabel(tab);
        userLabel_2->setObjectName("userLabel_2");
        userLabel_2->setGeometry(QRect(20, 10, 331, 61));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        userLabel_2->setFont(font);
        signOutPushButton = new QPushButton(tab);
        signOutPushButton->setObjectName("signOutPushButton");
        signOutPushButton->setGeometry(QRect(40, 460, 91, 51));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(950, 90, 121, 31));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(750, 90, 195, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        backpic = new QLabel(tab);
        backpic->setObjectName("backpic");
        backpic->setGeometry(QRect(-10, -30, 1131, 631));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        booksLabel = new QLabel(tab_2);
        booksLabel->setObjectName("booksLabel");
        booksLabel->setGeometry(QRect(370, 59, 251, 31));
        QFont font1;
        font1.setPointSize(15);
        booksLabel->setFont(font1);
        booksLabel->setAlignment(Qt::AlignCenter);
        booksArea = new QScrollArea(tab_2);
        booksArea->setObjectName("booksArea");
        booksArea->setGeometry(QRect(510, 110, 280, 451));
        booksArea->setFrameShape(QFrame::NoFrame);
        booksArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 280, 451));
        horizontalLayout_3 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        booksArea->setWidget(scrollAreaWidgetContents);
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(252, 100, 111, 51));
        wishlistArea = new QScrollArea(tab_2);
        wishlistArea->setObjectName("wishlistArea");
        wishlistArea->setGeometry(QRect(650, 90, 280, 451));
        wishlistArea->setFrameShape(QFrame::NoFrame);
        wishlistArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 280, 451));
        horizontalLayout_4 = new QHBoxLayout(scrollAreaWidgetContents_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        wishList = new QListWidget(scrollAreaWidgetContents_2);
        wishList->setObjectName("wishList");
        wishList->setFont(font1);
        wishList->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));

        horizontalLayout_4->addWidget(wishList);

        wishlistArea->setWidget(scrollAreaWidgetContents_2);
        wishlistLabel = new QLabel(tab_2);
        wishlistLabel->setObjectName("wishlistLabel");
        wishlistLabel->setGeometry(QRect(660, 70, 251, 31));
        wishlistLabel->setFont(font1);
        wishlistLabel->setAlignment(Qt::AlignCenter);
        userLabel_5 = new QLabel(tab_2);
        userLabel_5->setObjectName("userLabel_5");
        userLabel_5->setGeometry(QRect(20, 10, 331, 61));
        userLabel_5->setFont(font);
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(930, 100, 161, 51));
        borrowList = new QListWidget(tab_2);
        borrowList->setObjectName("borrowList");
        borrowList->setGeometry(QRect(370, 100, 258, 429));
        borrowList->setFont(font1);
        borrowList->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
        backpic_2 = new QLabel(tab_2);
        backpic_2->setObjectName("backpic_2");
        backpic_2->setGeometry(QRect(-10, -20, 1131, 621));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(user);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QDialog *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "Dialog", nullptr));
        userLabel_2->setText(QCoreApplication::translate("user", "User Dashboard", nullptr));
        signOutPushButton->setText(QCoreApplication::translate("user", "Sign Out", nullptr));
        pushButton_3->setText(QCoreApplication::translate("user", "Add to wishlist", nullptr));
        pushButton_2->setText(QCoreApplication::translate("user", "Search", nullptr));
        pushButton->setText(QCoreApplication::translate("user", "Borrow", nullptr));
        backpic->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("user", "Search", nullptr));
        booksLabel->setText(QCoreApplication::translate("user", "My Books", nullptr));
        pushButton_4->setText(QCoreApplication::translate("user", "Unborrow", nullptr));
        wishlistLabel->setText(QCoreApplication::translate("user", "Wishlist", nullptr));
        userLabel_5->setText(QCoreApplication::translate("user", "User Dashboard", nullptr));
        pushButton_5->setText(QCoreApplication::translate("user", "Remove from wishlist", nullptr));
        backpic_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("user", "My Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
