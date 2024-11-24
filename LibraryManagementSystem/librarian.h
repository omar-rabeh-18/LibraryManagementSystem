#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <QDialog>

namespace Ui {
class Librarian;
}

class Librarian : public QDialog
{
    Q_OBJECT

public:
    explicit Librarian(QWidget *parent = nullptr);
    ~Librarian();

private:
    Ui::Librarian *ui;
};

#endif // LIBRARIAN_H
