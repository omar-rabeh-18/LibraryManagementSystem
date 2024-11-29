#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <QDialog>
#include <vector>
#include "request.h"
#include "book.h"
#include "user.h"

namespace Ui {
class Librarian;
}

class Librarian : public QDialog
{
    Q_OBJECT

public:
    explicit Librarian(QWidget *parent = nullptr);
    ~Librarian();

private slots:
    void populate_requests();

    void on_acceptButton_clicked();

    void on_refuseButton_clicked();

private:
    Ui::Librarian *ui;
    vector<Request*> requests;
    vector<book*> books;
    vector<user*> users;

};

#endif // LIBRARIAN_H
