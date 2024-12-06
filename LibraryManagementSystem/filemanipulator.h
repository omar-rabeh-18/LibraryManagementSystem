#ifndef FILEMANIPULATOR_H
#define FILEMANIPULATOR_H
#include <iostream>
#include <string>
#include <vector>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "user.h"
#include <unordered_map>
#include <filesystem>
#include <QByteArray>
#include "book.h"
#include "request.h"


using namespace std;



class filemanipulator
{
public:
    filemanipulator();
    ~filemanipulator();
    void users_files_reader();
    void users_files_writer();
    void books_files_reader();
    void books_files_writer();
    void book_request_reader();
    void book_request_writer();
    void admin_files_reader();
    void admin_files_writer();
    void librarian_file_reader();
    void librarian_file_writer();

    void write_to_users_vector(QString name, QString password, QString wishlistedbooks, QString Borrowedbooks);
    static vector<user*> the_users_data_vector;
    static vector<user*> the_admin_data_vector;
    static vector<user*> the_librarian_data_vector;
    static vector<book*> books_vector;
    static vector<Request*> book_requests_vector;
    QString projectPath = QString::fromStdString(filesystem::current_path().parent_path().string());
};

#endif // FILEMANIPULATOR_H
