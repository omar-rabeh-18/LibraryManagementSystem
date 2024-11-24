#include "librarian.h"
#include "ui_librarian.h"

Librarian::Librarian(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Librarian)
{
    ui->setupUi(this);
}

Librarian::~Librarian()
{
    delete ui;
}
