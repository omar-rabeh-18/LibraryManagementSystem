#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <QDialog>
#include <Vector.h>
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

    void on_signOutPushButton_clicked();

private:
    Ui::Librarian *ui;
    Vector<Request*> requests;
    Vector<Request*> activeRequests;
};

#endif // LIBRARIAN_H
