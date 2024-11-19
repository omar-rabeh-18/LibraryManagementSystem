/********************************************************************************
** Form generated from reading UI file 'searchwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWINDOW_H
#define UI_SEARCHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_searchWindow
{
public:
    QLabel *titleLabel;
    QLabel *authorLabel;
    QLabel *authorLabel_2;
    QFrame *checkBoxFrame;
    QCheckBox *fantasyCheckBox;
    QCheckBox *romanceCheckBox;
    QCheckBox *mysteryCheckBox;
    QCheckBox *horrorCheckBox;
    QCheckBox *comedyCheckBox;
    QCheckBox *actionCheckBox;
    QLabel *ratingLabel;
    QFrame *ratingFrame;
    QCheckBox *ratingCheckBox2;
    QCheckBox *ratingCheckBox1;
    QLabel *lengthLabel;
    QFrame *lengthFrame;
    QCheckBox *lengthCheckBox2;
    QCheckBox *lengthCheckBox1;
    QLabel *resultsLabel;
    QScrollArea *resultsScrollArea;
    QWidget *scrollAreaWidgetContents;
    QLineEdit *titleLineEdit;
    QLineEdit *authorLineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *searchWindow)
    {
        if (searchWindow->objectName().isEmpty())
            searchWindow->setObjectName("searchWindow");
        searchWindow->resize(846, 522);
        titleLabel = new QLabel(searchWindow);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(20, 20, 41, 16));
        authorLabel = new QLabel(searchWindow);
        authorLabel->setObjectName("authorLabel");
        authorLabel->setGeometry(QRect(20, 60, 58, 16));
        authorLabel_2 = new QLabel(searchWindow);
        authorLabel_2->setObjectName("authorLabel_2");
        authorLabel_2->setGeometry(QRect(20, 110, 58, 16));
        checkBoxFrame = new QFrame(searchWindow);
        checkBoxFrame->setObjectName("checkBoxFrame");
        checkBoxFrame->setGeometry(QRect(80, 110, 251, 201));
        QFont font;
        font.setBold(false);
        checkBoxFrame->setFont(font);
        checkBoxFrame->setFrameShape(QFrame::StyledPanel);
        checkBoxFrame->setFrameShadow(QFrame::Raised);
        fantasyCheckBox = new QCheckBox(checkBoxFrame);
        fantasyCheckBox->setObjectName("fantasyCheckBox");
        fantasyCheckBox->setGeometry(QRect(30, 160, 85, 20));
        romanceCheckBox = new QCheckBox(checkBoxFrame);
        romanceCheckBox->setObjectName("romanceCheckBox");
        romanceCheckBox->setGeometry(QRect(30, 100, 85, 20));
        mysteryCheckBox = new QCheckBox(checkBoxFrame);
        mysteryCheckBox->setObjectName("mysteryCheckBox");
        mysteryCheckBox->setGeometry(QRect(30, 70, 85, 20));
        horrorCheckBox = new QCheckBox(checkBoxFrame);
        horrorCheckBox->setObjectName("horrorCheckBox");
        horrorCheckBox->setGeometry(QRect(30, 10, 85, 20));
        comedyCheckBox = new QCheckBox(checkBoxFrame);
        comedyCheckBox->setObjectName("comedyCheckBox");
        comedyCheckBox->setGeometry(QRect(30, 130, 85, 20));
        actionCheckBox = new QCheckBox(checkBoxFrame);
        actionCheckBox->setObjectName("actionCheckBox");
        actionCheckBox->setGeometry(QRect(30, 40, 85, 20));
        ratingLabel = new QLabel(searchWindow);
        ratingLabel->setObjectName("ratingLabel");
        ratingLabel->setGeometry(QRect(30, 340, 91, 16));
        ratingFrame = new QFrame(searchWindow);
        ratingFrame->setObjectName("ratingFrame");
        ratingFrame->setGeometry(QRect(80, 370, 120, 71));
        ratingFrame->setFrameShape(QFrame::StyledPanel);
        ratingFrame->setFrameShadow(QFrame::Raised);
        ratingCheckBox2 = new QCheckBox(ratingFrame);
        ratingCheckBox2->setObjectName("ratingCheckBox2");
        ratingCheckBox2->setGeometry(QRect(30, 40, 85, 20));
        ratingCheckBox1 = new QCheckBox(ratingFrame);
        ratingCheckBox1->setObjectName("ratingCheckBox1");
        ratingCheckBox1->setGeometry(QRect(30, 10, 85, 20));
        lengthLabel = new QLabel(searchWindow);
        lengthLabel->setObjectName("lengthLabel");
        lengthLabel->setGeometry(QRect(210, 339, 91, 16));
        lengthFrame = new QFrame(searchWindow);
        lengthFrame->setObjectName("lengthFrame");
        lengthFrame->setGeometry(QRect(240, 370, 120, 71));
        lengthFrame->setFrameShape(QFrame::StyledPanel);
        lengthFrame->setFrameShadow(QFrame::Raised);
        lengthCheckBox2 = new QCheckBox(lengthFrame);
        lengthCheckBox2->setObjectName("lengthCheckBox2");
        lengthCheckBox2->setGeometry(QRect(30, 40, 85, 20));
        lengthCheckBox1 = new QCheckBox(lengthFrame);
        lengthCheckBox1->setObjectName("lengthCheckBox1");
        lengthCheckBox1->setGeometry(QRect(30, 10, 85, 20));
        resultsLabel = new QLabel(searchWindow);
        resultsLabel->setObjectName("resultsLabel");
        resultsLabel->setGeometry(QRect(410, 30, 91, 16));
        resultsScrollArea = new QScrollArea(searchWindow);
        resultsScrollArea->setObjectName("resultsScrollArea");
        resultsScrollArea->setGeometry(QRect(410, 60, 391, 381));
        resultsScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 389, 379));
        resultsScrollArea->setWidget(scrollAreaWidgetContents);
        titleLineEdit = new QLineEdit(searchWindow);
        titleLineEdit->setObjectName("titleLineEdit");
        titleLineEdit->setGeometry(QRect(80, 20, 211, 21));
        authorLineEdit = new QLineEdit(searchWindow);
        authorLineEdit->setObjectName("authorLineEdit");
        authorLineEdit->setGeometry(QRect(80, 60, 211, 21));
        pushButton = new QPushButton(searchWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(630, 470, 100, 32));

        retranslateUi(searchWindow);

        QMetaObject::connectSlotsByName(searchWindow);
    } // setupUi

    void retranslateUi(QDialog *searchWindow)
    {
        searchWindow->setWindowTitle(QCoreApplication::translate("searchWindow", "Dialog", nullptr));
        titleLabel->setText(QCoreApplication::translate("searchWindow", "Title:", nullptr));
        authorLabel->setText(QCoreApplication::translate("searchWindow", "Author:", nullptr));
        authorLabel_2->setText(QCoreApplication::translate("searchWindow", "Genres:", nullptr));
        fantasyCheckBox->setText(QCoreApplication::translate("searchWindow", "Fantasy", nullptr));
        romanceCheckBox->setText(QCoreApplication::translate("searchWindow", "Romance", nullptr));
        mysteryCheckBox->setText(QCoreApplication::translate("searchWindow", "Mystery", nullptr));
        horrorCheckBox->setText(QCoreApplication::translate("searchWindow", "Horror", nullptr));
        comedyCheckBox->setText(QCoreApplication::translate("searchWindow", "Comedy", nullptr));
        actionCheckBox->setText(QCoreApplication::translate("searchWindow", "Action", nullptr));
        ratingLabel->setText(QCoreApplication::translate("searchWindow", "Sort by rating:", nullptr));
        ratingCheckBox2->setText(QCoreApplication::translate("searchWindow", "BSC", nullptr));
        ratingCheckBox1->setText(QCoreApplication::translate("searchWindow", "ASC", nullptr));
        lengthLabel->setText(QCoreApplication::translate("searchWindow", "Sort by length:", nullptr));
        lengthCheckBox2->setText(QCoreApplication::translate("searchWindow", "BSC", nullptr));
        lengthCheckBox1->setText(QCoreApplication::translate("searchWindow", "ASC", nullptr));
        resultsLabel->setText(QCoreApplication::translate("searchWindow", "Results:", nullptr));
        pushButton->setText(QCoreApplication::translate("searchWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searchWindow: public Ui_searchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWINDOW_H
