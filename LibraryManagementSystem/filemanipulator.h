#ifndef FILEMANIPULATOR_H
#define FILEMANIPULATOR_H
#include <iostream>
#include <string>
#include <vector>
#include <QFile>
#include <QTextStream>
#include <QDebug>
using namespace std;


class filemanipulator
{
public:
    filemanipulator();
    void users_files_reader();
    void users_files_writer();
    void write_to_users_vector(QString name, QString password, QString wishlistedbooks, QString Borrowedbooks);
    vector<vector<QString>> the_user_data_vector;
};

#endif // FILEMANIPULATOR_H
