#include "mainwindow.h"
#include "filemanipulator.h"
#include "trie.h"
#include <QApplication>

Trie* myTrie=new Trie();
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;

    filemanipulator thefiles;

    thefiles.users_files_reader();
    thefiles.books_files_reader();

    w.show();

    thefiles.users_files_writer();
    return a.exec();




}
