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

   // thefiles.users_files_reader();
    thefiles.books_files_reader();
  //  thefiles.book_request_reader();
  //  thefiles.admin_files_reader();
    vector<QString> some_request; some_request.push_back("dana"); some_request.push_back("234234234"); some_request.push_back("1/1/2001"); some_request.push_back("1/12/2012"); some_request.push_back("pending");
    thefiles.book_requests_vector.push_back(some_request);
    user * a_user = new user();
    a_user->set_user_name("superadmin");
    a_user->set_password("554433");
    thefiles.the_admin_data_vector.push_back(a_user);


    w.show();

    thefiles.users_files_writer();
    thefiles.book_request_writer();
    thefiles.admin_files_writer();
    return a.exec();




}
