#ifndef FILEMANIPULATOR_H
#define FILEMANIPULATOR_H
#include <iostream>
#include <string>
#include <Vector.h>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "user.h"
#include <unordered_map>
#include <filesystem>
#include <QByteArray>
#include "book.h"
#include "request.h"
#include <QDir>
#include <QCoreApplication>


using namespace std;



class filemanipulator
{
private:


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
    QString encryptPassword(const QString& password);
    QString decryptPassword(const QString& encryptedPassword);

    void write_to_users_vector(QString name, QString password, QString wishlistedbooks, QString Borrowedbooks);
    static Vector<user*> the_users_data_vector;
    static Vector<user*> the_admin_data_vector;
    static Vector<user*> the_librarian_data_vector;
    static Vector<book*> books_vector;
    static Vector<Request*> book_requests_vector;
    QString projectPath = QString::fromStdString(filesystem::current_path().parent_path().string());
    QString appDir = QCoreApplication::applicationDirPath();
    QDir dir = QDir(appDir);
};

#endif // FILEMANIPULATOR_H
