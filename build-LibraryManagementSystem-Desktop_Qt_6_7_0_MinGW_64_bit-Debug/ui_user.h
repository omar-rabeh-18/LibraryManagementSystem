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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
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
    QLabel *amountLabel;
    QScrollArea *amountArea;
    QWidget *scrollAreaWidgetContents_3;
    QScrollArea *creditArea;
    QWidget *scrollAreaWidgetContents_4;
    QLabel *creditLabel;
    QPushButton *searchPushButton;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *actionCheck_3;
    QRadioButton *comedyCheck_3;
    QRadioButton *HorrorCheck_3;
    QRadioButton *romanticCheck_3;
    QTextEdit *authorSearchTextedit;
    QScrollArea *deleteArea;
    QWidget *scrollAreaWidgetContents_6;
    QListWidget *searchList;
    QPushButton *pushButton_2;
    QTextEdit *titleSearchTextedit;
    QPushButton *signOutPushButton;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QDialog *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(1118, 619);
        userLabel = new QLabel(user);
        userLabel->setObjectName("userLabel");
        userLabel->setGeometry(QRect(50, 40, 301, 31));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        userLabel->setFont(font);
        booksLabel = new QLabel(user);
        booksLabel->setObjectName("booksLabel");
        booksLabel->setGeometry(QRect(770, 130, 71, 16));
        booksArea = new QScrollArea(user);
        booksArea->setObjectName("booksArea");
        booksArea->setGeometry(QRect(860, 130, 161, 141));
        booksArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 159, 139));
        borrowList = new QListWidget(scrollAreaWidgetContents);
        borrowList->setObjectName("borrowList");
        borrowList->setGeometry(QRect(0, 0, 151, 131));
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
        wishList->setGeometry(QRect(0, 0, 151, 131));
        wishlistArea->setWidget(scrollAreaWidgetContents_2);
        wishlistLabel = new QLabel(user);
        wishlistLabel->setObjectName("wishlistLabel");
        wishlistLabel->setGeometry(QRect(770, 370, 71, 16));
        amountLabel = new QLabel(user);
        amountLabel->setObjectName("amountLabel");
        amountLabel->setGeometry(QRect(770, 310, 91, 16));
        amountArea = new QScrollArea(user);
        amountArea->setObjectName("amountArea");
        amountArea->setGeometry(QRect(860, 300, 161, 41));
        amountArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 159, 39));
        amountArea->setWidget(scrollAreaWidgetContents_3);
        creditArea = new QScrollArea(user);
        creditArea->setObjectName("creditArea");
        creditArea->setGeometry(QRect(860, 540, 161, 41));
        creditArea->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 159, 39));
        creditArea->setWidget(scrollAreaWidgetContents_4);
        creditLabel = new QLabel(user);
        creditLabel->setObjectName("creditLabel");
        creditLabel->setGeometry(QRect(770, 550, 91, 16));
        searchPushButton = new QPushButton(user);
        searchPushButton->setObjectName("searchPushButton");
        searchPushButton->setGeometry(QRect(610, 520, 111, 61));
        label_5 = new QLabel(user);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 310, 49, 16));
        label_6 = new QLabel(user);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 220, 49, 16));
        label_4 = new QLabel(user);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 260, 49, 16));
        verticalLayoutWidget_2 = new QWidget(user);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(90, 360, 160, 100));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        actionCheck_3 = new QRadioButton(verticalLayoutWidget_2);
        actionCheck_3->setObjectName("actionCheck_3");

        verticalLayout_3->addWidget(actionCheck_3);

        comedyCheck_3 = new QRadioButton(verticalLayoutWidget_2);
        comedyCheck_3->setObjectName("comedyCheck_3");

        verticalLayout_3->addWidget(comedyCheck_3);

        HorrorCheck_3 = new QRadioButton(verticalLayoutWidget_2);
        HorrorCheck_3->setObjectName("HorrorCheck_3");

        verticalLayout_3->addWidget(HorrorCheck_3);

        romanticCheck_3 = new QRadioButton(verticalLayoutWidget_2);
        romanticCheck_3->setObjectName("romanticCheck_3");

        verticalLayout_3->addWidget(romanticCheck_3);

        authorSearchTextedit = new QTextEdit(user);
        authorSearchTextedit->setObjectName("authorSearchTextedit");
        authorSearchTextedit->setGeometry(QRect(120, 300, 201, 31));
        deleteArea = new QScrollArea(user);
        deleteArea->setObjectName("deleteArea");
        deleteArea->setGeometry(QRect(430, 20, 221, 441));
        deleteArea->setWidgetResizable(true);
        scrollAreaWidgetContents_6 = new QWidget();
        scrollAreaWidgetContents_6->setObjectName("scrollAreaWidgetContents_6");
        scrollAreaWidgetContents_6->setGeometry(QRect(0, 0, 219, 439));
        searchList = new QListWidget(scrollAreaWidgetContents_6);
        searchList->setObjectName("searchList");
        searchList->setGeometry(QRect(0, 0, 221, 441));
        deleteArea->setWidget(scrollAreaWidgetContents_6);
        pushButton_2 = new QPushButton(user);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(290, 390, 91, 51));
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
        pushButton_3->setGeometry(QRect(670, 110, 101, 24));

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QDialog *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "Dialog", nullptr));
        userLabel->setText(QCoreApplication::translate("user", "User Dashboard", nullptr));
        booksLabel->setText(QCoreApplication::translate("user", "My Books:", nullptr));
        wishlistLabel->setText(QCoreApplication::translate("user", "Wishlist:", nullptr));
        amountLabel->setText(QCoreApplication::translate("user", "Amount due: ", nullptr));
        creditLabel->setText(QCoreApplication::translate("user", "Borrow Credit:", nullptr));
        searchPushButton->setText(QCoreApplication::translate("user", "DO NOT USE NOW", nullptr));
        label_5->setText(QCoreApplication::translate("user", "Author", nullptr));
        label_6->setText(QCoreApplication::translate("user", "Search:", nullptr));
        label_4->setText(QCoreApplication::translate("user", "Title", nullptr));
        actionCheck_3->setText(QCoreApplication::translate("user", "Action", nullptr));
        comedyCheck_3->setText(QCoreApplication::translate("user", "Comedy", nullptr));
        HorrorCheck_3->setText(QCoreApplication::translate("user", "Horror", nullptr));
        romanticCheck_3->setText(QCoreApplication::translate("user", "Romantic", nullptr));
        pushButton_2->setText(QCoreApplication::translate("user", "Search", nullptr));
        signOutPushButton->setText(QCoreApplication::translate("user", "Sign Out", nullptr));
        pushButton->setText(QCoreApplication::translate("user", "Borrow", nullptr));
        pushButton_3->setText(QCoreApplication::translate("user", "Add to wishlist", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
