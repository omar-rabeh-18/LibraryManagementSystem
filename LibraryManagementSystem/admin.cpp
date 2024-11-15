#include "admin.h"
#include "ui_admin.h"
#include "book.h"
#include "trie.h"
extern Trie* myTrie;
admin::admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}

void admin::on_pushButton_clicked()
{
    QString genre;
    int copies=ui->copiesNumber->value();
    genre=(ui->actionCheck->isChecked())?"action":(ui->comedyCheck->isChecked())? "comedy":
                                                        (ui->HorrorCheck->isChecked())? "horror":"romantic";
    book * newBook=new book (ui->titleTextBox->toPlainText(),ui->authorTextBox->toPlainText(),genre,copies);
}

