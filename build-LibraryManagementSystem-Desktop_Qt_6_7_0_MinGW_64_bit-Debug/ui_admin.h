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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QLabel *adminLabel;
    QLabel *insertLabel;
    QScrollArea *deleteArea;
    QWidget *scrollAreaWidgetContents_2;
    QListWidget *listWidget;
    QLabel *deleteLabel;
    QTextEdit *titleTextBox;
    QLabel *label;
    QTextEdit *authorTextBox;
    QLabel *label_2;
    QPushButton *pushButton;
    QSpinBox *copiesNumber;
    QLabel *label_3;
    QTextEdit *titleSearchTextedit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpinBox *removingNumber;
    QLabel *label_6;
    QPushButton *signOutPushButton;
    QTextEdit *genreTextBox;
    QLabel *label_7;
    QLabel *label_4;
    QTextEdit *lnumTextBox;
    QTextEdit *ISPNTextBox;
    QLabel *label_5;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(778, 618);
        adminLabel = new QLabel(admin);
        adminLabel->setObjectName("adminLabel");
        adminLabel->setGeometry(QRect(190, 0, 371, 51));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        adminLabel->setFont(font);
        insertLabel = new QLabel(admin);
        insertLabel->setObjectName("insertLabel");
        insertLabel->setGeometry(QRect(20, 30, 58, 16));
        deleteArea = new QScrollArea(admin);
        deleteArea->setObjectName("deleteArea");
        deleteArea->setGeometry(QRect(390, 120, 221, 441));
        deleteArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 219, 439));
        listWidget = new QListWidget(scrollAreaWidgetContents_2);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 0, 191, 441));
        deleteArea->setWidget(scrollAreaWidgetContents_2);
        deleteLabel = new QLabel(admin);
        deleteLabel->setObjectName("deleteLabel");
        deleteLabel->setGeometry(QRect(570, 10, 58, 16));
        titleTextBox = new QTextEdit(admin);
        titleTextBox->setObjectName("titleTextBox");
        titleTextBox->setGeometry(QRect(60, 60, 171, 31));
        label = new QLabel(admin);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 70, 49, 16));
        authorTextBox = new QTextEdit(admin);
        authorTextBox->setObjectName("authorTextBox");
        authorTextBox->setGeometry(QRect(60, 140, 171, 31));
        label_2 = new QLabel(admin);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 150, 49, 16));
        pushButton = new QPushButton(admin);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(90, 270, 101, 51));
        copiesNumber = new QSpinBox(admin);
        copiesNumber->setObjectName("copiesNumber");
        copiesNumber->setGeometry(QRect(260, 80, 42, 22));
        label_3 = new QLabel(admin);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(260, 110, 49, 16));
        titleSearchTextedit = new QTextEdit(admin);
        titleSearchTextedit->setObjectName("titleSearchTextedit");
        titleSearchTextedit->setGeometry(QRect(80, 360, 201, 31));
        pushButton_2 = new QPushButton(admin);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(130, 430, 91, 51));
        pushButton_3 = new QPushButton(admin);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(660, 150, 75, 24));
        removingNumber = new QSpinBox(admin);
        removingNumber->setObjectName("removingNumber");
        removingNumber->setGeometry(QRect(670, 200, 42, 22));
        label_6 = new QLabel(admin);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 360, 49, 16));
        signOutPushButton = new QPushButton(admin);
        signOutPushButton->setObjectName("signOutPushButton");
        signOutPushButton->setGeometry(QRect(650, 500, 100, 32));
        genreTextBox = new QTextEdit(admin);
        genreTextBox->setObjectName("genreTextBox");
        genreTextBox->setGeometry(QRect(60, 100, 171, 31));
        label_7 = new QLabel(admin);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 110, 49, 16));
        label_4 = new QLabel(admin);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 190, 49, 16));
        lnumTextBox = new QTextEdit(admin);
        lnumTextBox->setObjectName("lnumTextBox");
        lnumTextBox->setGeometry(QRect(60, 180, 171, 31));
        ISPNTextBox = new QTextEdit(admin);
        ISPNTextBox->setObjectName("ISPNTextBox");
        ISPNTextBox->setGeometry(QRect(60, 230, 171, 31));
        label_5 = new QLabel(admin);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 240, 49, 16));

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Dialog", nullptr));
        adminLabel->setText(QCoreApplication::translate("admin", "Admin Dashboard", nullptr));
        insertLabel->setText(QCoreApplication::translate("admin", "Insert:", nullptr));
        deleteLabel->setText(QCoreApplication::translate("admin", "Delete:", nullptr));
        titleTextBox->setHtml(QCoreApplication::translate("admin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
        label_2->setText(QCoreApplication::translate("admin", "Author", nullptr));
        pushButton->setText(QCoreApplication::translate("admin", "Insert", nullptr));
        label_3->setText(QCoreApplication::translate("admin", "copies", nullptr));
        pushButton_2->setText(QCoreApplication::translate("admin", "Search", nullptr));
        pushButton_3->setText(QCoreApplication::translate("admin", "remove", nullptr));
        label_6->setText(QCoreApplication::translate("admin", "Search:", nullptr));
        signOutPushButton->setText(QCoreApplication::translate("admin", "Sign Out", nullptr));
        genreTextBox->setHtml(QCoreApplication::translate("admin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("admin", "Genre", nullptr));
        label_4->setText(QCoreApplication::translate("admin", "L-num", nullptr));
        lnumTextBox->setHtml(QCoreApplication::translate("admin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
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
        label_5->setText(QCoreApplication::translate("admin", "ISPN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
