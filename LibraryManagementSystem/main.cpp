#include "mainwindow.h"
#include "filemanipulator.h"

#include <QApplication>

int main(int argc, char *argv[])
{

    filemanipulator thefiles;
    thefiles.users_files_reader();
    thefiles.write_to_users_vector("ahmed", "987", "kicking and running", "the impossible");
    thefiles.write_to_users_vector("qusai", "000", "kicking and flying", "the possible");
    thefiles.users_files_writer();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();




}
