/********************************************************************************
** Form generated from reading UI file 'librarian.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARIAN_H
#define UI_LIBRARIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Librarian
{
public:
    QLabel *MainTitle;
    QListWidget *ActiveRequests;
    QPushButton *acceptButton;
    QPushButton *refuseButton;
    QLabel *warningLabel;
    QPushButton *signOutPushButton;

    void setupUi(QDialog *Librarian)
    {
        if (Librarian->objectName().isEmpty())
            Librarian->setObjectName("Librarian");
        Librarian->resize(696, 550);
        MainTitle = new QLabel(Librarian);
        MainTitle->setObjectName("MainTitle");
        MainTitle->setGeometry(QRect(0, 0, 341, 51));
        ActiveRequests = new QListWidget(Librarian);
        ActiveRequests->setObjectName("ActiveRequests");
        ActiveRequests->setGeometry(QRect(80, 70, 401, 311));
        acceptButton = new QPushButton(Librarian);
        acceptButton->setObjectName("acceptButton");
        acceptButton->setGeometry(QRect(530, 330, 80, 24));
        refuseButton = new QPushButton(Librarian);
        refuseButton->setObjectName("refuseButton");
        refuseButton->setGeometry(QRect(530, 360, 80, 24));
        warningLabel = new QLabel(Librarian);
        warningLabel->setObjectName("warningLabel");
        warningLabel->setGeometry(QRect(180, 390, 301, 31));
        signOutPushButton = new QPushButton(Librarian);
        signOutPushButton->setObjectName("signOutPushButton");
        signOutPushButton->setGeometry(QRect(30, 440, 91, 51));

        retranslateUi(Librarian);

        QMetaObject::connectSlotsByName(Librarian);
    } // setupUi

    void retranslateUi(QDialog *Librarian)
    {
        Librarian->setWindowTitle(QCoreApplication::translate("Librarian", "Dialog", nullptr));
        MainTitle->setText(QCoreApplication::translate("Librarian", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700;\">Libriarian Dashboard</span></p></body></html>", nullptr));
        acceptButton->setText(QCoreApplication::translate("Librarian", "Accept", nullptr));
        refuseButton->setText(QCoreApplication::translate("Librarian", "Refuse", nullptr));
        warningLabel->setText(QCoreApplication::translate("Librarian", "<html><head/><body><p><span style=\" color:#ff0000;\">*Please Highlight a request before making a decision</span></p></body></html>", nullptr));
        signOutPushButton->setText(QCoreApplication::translate("Librarian", "Sign Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Librarian: public Ui_Librarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIAN_H
