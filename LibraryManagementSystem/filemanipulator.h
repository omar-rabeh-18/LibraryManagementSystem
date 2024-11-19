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

using namespace std;



class filemanipulator
{
public:
    filemanipulator();
    void users_files_reader();
    void users_files_writer();
    void books_files_reader();
    void books_files_writer();
    void write_to_users_vector(QString name, QString password, QString wishlistedbooks, QString Borrowedbooks);
    unordered_map<int, user*> the_users_data_map;
    static vector<user*> the_users_data_vector;
    static vector<book*> books_vector;
    QString projectPath = QString::fromStdString(filesystem::current_path().string());
};

#endif // FILEMANIPULATOR_H
