/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_5;
    QTextEdit *lnumTextBox;
    QLabel *label_7;
    QLabel *label_4;
    QTextEdit *titleTextBox;
    QTextEdit *genreTextBox;
    QTextEdit *ISPNTextBox;
    QLabel *label;
    QTextEdit *authorTextBox;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *copiesNumber;
    QPushButton *signOutPushButton;
    QLabel *adminLabel;
    QLabel *insertLabel;
    QLabel *label_8;
    QLabel *backpic;
    QWidget *tab_2;
    QTextEdit *titleSearchTextedit;
    QPushButton *pushButton_2;
    QSpinBox *removingNumber;
    QPushButton *pushButton_3;
    QScrollArea *deleteArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QLabel *adminLabel_2;
    QLabel *backpic_2;
    QWidget *tab_7;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *librarianusername;
    QLineEdit *librarianpassword;
    QLineEdit *librarianpasswordconfrim;
    QPushButton *pushButton_4;
    QLabel *adminLabel_3;
    QLabel *backpic_3;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(778, 618);
        tabWidget = new QTabWidget(admin);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 781, 621));
        tab = new QWidget();
        tab->setObjectName("tab");
        label_5 = new QLabel(tab);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(-30, 160, 49, 16));
        label_5->setStyleSheet(QString::fromUtf8(""));
        lnumTextBox = new QTextEdit(tab);
        lnumTextBox->setObjectName("lnumTextBox");
        lnumTextBox->setGeometry(QRect(290, 310, 171, 31));
        lnumTextBox->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(240, 240, 49, 16));
        label_7->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(240, 320, 49, 16));
        label_4->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
        titleTextBox = new QTextEdit(tab);
        titleTextBox->setObjectName("titleTextBox");
        titleTextBox->setGeometry(QRect(290, 190, 171, 31));
        titleTextBox->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
        genreTextBox = new QTextEdit(tab);
        genreTextBox->setObjectName("genreTextBox");
        genreTextBox->setGeometry(QRect(290, 230, 171, 31));
        ISPNTextBox = new QTextEdit(tab);
        ISPNTextBox->setObjectName("ISPNTextBox");
        ISPNTextBox->setGeometry(QRect(290, 350, 171, 31));
        ISPNTextBox->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 200, 49, 16));
        label->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
        authorTextBox = new QTextEdit(tab);
        authorTextBox->setObjectName("authorTextBox");
        authorTextBox->setGeometry(QRect(290, 270, 171, 31));
        authorTextBox->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 400, 101, 51));
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(240, 280, 49, 16));
        label_2->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(550, 270, 49, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
        copiesNumber = new QSpinBox(tab);
        copiesNumber->setObjectName("copiesNumber");
        copiesNumber->setGeometry(QRect(500, 270, 42, 22));
        signOutPushButton = new QPushButton(tab);
        signOutPushButton->setObjectName("signOutPushButton");
        signOutPushButton->setGeometry(QRect(610, 480, 100, 32));
        adminLabel = new QLabel(tab);
        adminLabel->setObjectName("adminLabel");
        adminLabel->setGeometry(QRect(10, 20, 371, 51));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        adminLabel->setFont(font);
        insertLabel = new QLabel(tab);
        insertLabel->setObjectName("insertLabel");
        insertLabel->setGeometry(QRect(290, 160, 161, 20));
        QFont font1;
        font1.setPointSize(12);
        insertLabel->setFont(font1);
        insertLabel->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
        insertLabel->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(tab);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(240, 360, 49, 16));
        label_8->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
        backpic = new QLabel(tab);
        backpic->setObjectName("backpic");
        backpic->setGeometry(QRect(-10, 0, 791, 601));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        titleSearchTextedit = new QTextEdit(tab_2);
        titleSearchTextedit->setObjectName("titleSearchTextedit");
        titleSearchTextedit->setGeometry(QRect(170, 100, 351, 31));
        titleSearchTextedit->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(520, 100, 91, 31));
        removingNumber = new QSpinBox(tab_2);
        removingNumber->setObjectName("removingNumber");
        removingNumber->setGeometry(QRect(530, 140, 42, 22));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(570, 140, 75, 24));
        deleteArea = new QScrollArea(tab_2);
        deleteArea->setObjectName("deleteArea");
        deleteArea->setGeometry(QRect(160, 120, 371, 461));
        deleteArea->setFrameShape(QFrame::NoFrame);
        deleteArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 371, 461));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName("verticalLayout");
        listWidget = new QListWidget(scrollAreaWidgetContents_2);
        listWidget->setObjectName("listWidget");
        listWidget->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
        listWidget->setFrameShape(QFrame::NoFrame);

        verticalLayout->addWidget(listWidget);

        deleteArea->setWidget(scrollAreaWidgetContents_2);
        adminLabel_2 = new QLabel(tab_2);
        adminLabel_2->setObjectName("adminLabel_2");
        adminLabel_2->setGeometry(QRect(10, 20, 371, 51));
        adminLabel_2->setFont(font);
        backpic_2 = new QLabel(tab_2);
        backpic_2->setObjectName("backpic_2");
        backpic_2->setGeometry(QRect(0, 0, 791, 601));
        tabWidget->addTab(tab_2, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName("tab_7");
        label_6 = new QLabel(tab_7);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(210, 150, 101, 31));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
        label_6->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(tab_7);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(210, 200, 101, 31));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(tab_7);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(140, 240, 171, 31));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: rgba(255, 255, 255, 180); \n"
" border: 1px solid gray;"));
        label_10->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(tab_7);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(310, 140, 211, 191));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        librarianusername = new QLineEdit(layoutWidget);
        librarianusername->setObjectName("librarianusername");

        verticalLayout_2->addWidget(librarianusername);

        librarianpassword = new QLineEdit(layoutWidget);
        librarianpassword->setObjectName("librarianpassword");

        verticalLayout_2->addWidget(librarianpassword);

        librarianpasswordconfrim = new QLineEdit(layoutWidget);
        librarianpasswordconfrim->setObjectName("librarianpasswordconfrim");

        verticalLayout_2->addWidget(librarianpasswordconfrim);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_2->addWidget(pushButton_4);

        adminLabel_3 = new QLabel(tab_7);
        adminLabel_3->setObjectName("adminLabel_3");
        adminLabel_3->setGeometry(QRect(10, 20, 371, 51));
        adminLabel_3->setFont(font);
        backpic_3 = new QLabel(tab_7);
        backpic_3->setObjectName("backpic_3");
        backpic_3->setGeometry(QRect(-10, 0, 791, 601));
        tabWidget->addTab(tab_7, QString());
        QWidget::setTabOrder(pushButton_2, deleteArea);
        QWidget::setTabOrder(deleteArea, titleSearchTextedit);
        QWidget::setTabOrder(titleSearchTextedit, titleTextBox);
        QWidget::setTabOrder(titleTextBox, pushButton);
        QWidget::setTabOrder(pushButton, copiesNumber);
        QWidget::setTabOrder(copiesNumber, listWidget);
        QWidget::setTabOrder(listWidget, tabWidget);
        QWidget::setTabOrder(tabWidget, authorTextBox);
        QWidget::setTabOrder(authorTextBox, removingNumber);
        QWidget::setTabOrder(removingNumber, signOutPushButton);
        QWidget::setTabOrder(signOutPushButton, pushButton_3);
        QWidget::setTabOrder(pushButton_3, genreTextBox);
        QWidget::setTabOrder(genreTextBox, lnumTextBox);
        QWidget::setTabOrder(lnumTextBox, ISPNTextBox);
        QWidget::setTabOrder(ISPNTextBox, librarianusername);
        QWidget::setTabOrder(librarianusername, librarianpassword);

        retranslateUi(admin);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("admin", "ISPN", nullptr));
        lnumTextBox->setHtml(QCoreApplication::translate("admin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("admin", "Genre", nullptr));
        label_4->setText(QCoreApplication::translate("admin", "L-num", nullptr));
        titleTextBox->setHtml(QCoreApplication::translate("admin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        genreTextBox->setHtml(QCoreApplication::translate("admin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        ISPNTextBox->setHtml(QCoreApplication::translate("admin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("admin", "Title", nullptr));
        authorTextBox->setHtml(QCoreApplication::translate("admin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("admin", "Insert", nullptr));
        label_2->setText(QCoreApplication::translate("admin", "Author", nullptr));
        label_3->setText(QCoreApplication::translate("admin", "copies", nullptr));
        signOutPushButton->setText(QCoreApplication::translate("admin", "Sign Out", nullptr));
        adminLabel->setText(QCoreApplication::translate("admin", "Admin Dashboard", nullptr));
        insertLabel->setText(QCoreApplication::translate("admin", "Insert Books", nullptr));
        label_8->setText(QCoreApplication::translate("admin", "ISBN", nullptr));
        backpic->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("admin", "Book Insertion", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admin", "Search", nullptr));
        pushButton_3->setText(QCoreApplication::translate("admin", "remove", nullptr));
        adminLabel_2->setText(QCoreApplication::translate("admin", "Admin Dashboard", nullptr));
        backpic_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("admin", "Book Search and Deletion", nullptr));
        label_6->setText(QCoreApplication::translate("admin", "Username", nullptr));
        label_9->setText(QCoreApplication::translate("admin", "Password", nullptr));
        label_10->setText(QCoreApplication::translate("admin", "Confirm Password", nullptr));
        pushButton_4->setText(QCoreApplication::translate("admin", "Add Librarian", nullptr));
        adminLabel_3->setText(QCoreApplication::translate("admin", "Admin Dashboard", nullptr));
        backpic_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QCoreApplication::translate("admin", "Add Librarian", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
