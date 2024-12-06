#ifndef ADMINLOGINWINDOW_H
#define ADMINLOGINWINDOW_H

#include <QDialog>

namespace Ui {
class adminLoginWindow;
}

class adminLoginWindow : public QDialog
{
    Q_OBJECT

public:
    explicit adminLoginWindow(QWidget *parent = nullptr);
    ~adminLoginWindow();

private slots:
    void on_loginPushButton_clicked();

    void on_loginPushButton_2_clicked();

private:
    Ui::adminLoginWindow *ui;
};

#endif // ADMINLOGINWINDOW_H
