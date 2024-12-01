#include "mainwindow.h"
#include "filemanipulator.h"
#include "trie.h"
#include "user.h"
#include <QApplication>

Trie* myTrie=new Trie();
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;

    filemanipulator thefiles;

    thefiles.books_files_reader();
    thefiles.users_files_reader();
    thefiles.book_request_reader();
    thefiles.admin_files_reader();
    thefiles.librarian_file_reader();


    w.show();

    thefiles.users_files_writer();
    thefiles.book_request_writer();
    thefiles.admin_files_writer();
    thefiles.books_files_writer();
    thefiles.librarian_file_writer();
    return a.exec();




}
