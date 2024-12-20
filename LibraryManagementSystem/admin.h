#ifndef ADMIN_H
#define ADMIN_H
#include "book.h"
#include <QDialog>
#include <QListWidgetItem>
#include <Vector.h>
using namespace std;
namespace Ui {
class admin;
}

class admin : public QDialog
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void poulateBooksList();

    void on_listWidget_itemClicked(QListWidgetItem *item);


    void on_signOutPushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::admin *ui;
    Vector<book*> results;
};

#endif // ADMIN_H
