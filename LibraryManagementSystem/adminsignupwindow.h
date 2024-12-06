#ifndef ADMINSIGNUPWINDOW_H
#define ADMINSIGNUPWINDOW_H

#include <QDialog>

namespace Ui {
class adminsignupwindow;
}

class adminsignupwindow : public QDialog
{
    Q_OBJECT

public:
    explicit adminsignupwindow(QWidget *parent = nullptr);
    ~adminsignupwindow();

private slots:
    void on_signupPushButton_clicked();


private:
    Ui::adminsignupwindow *ui;
    QString SPC = "*#42#*";
};

#endif // ADMINSIGNUPWINDOW_H
