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

QT_BEGIN_NAMESPACE

class Ui_Librarian
{
public:

    void setupUi(QDialog *Librarian)
    {
        if (Librarian->objectName().isEmpty())
            Librarian->setObjectName("Librarian");
        Librarian->resize(400, 300);

        retranslateUi(Librarian);

        QMetaObject::connectSlotsByName(Librarian);
    } // setupUi

    void retranslateUi(QDialog *Librarian)
    {
        Librarian->setWindowTitle(QCoreApplication::translate("Librarian", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Librarian: public Ui_Librarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIAN_H
