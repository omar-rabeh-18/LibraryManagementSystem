#include "filemanipulator.h"
#include <QString>
#include <QVector>
#include <QStringList>
#include <vector>

filemanipulator::filemanipulator() {

}

void filemanipulator::users_files_reader()
{
    qDebug() << "In users_files_manipualtor"; //check if file is open

    QFile users_file(":/thefiles/csv files/users_info.csv");  //openeing the users file
    string line;
    if(!users_file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "users files is not open"; //check if file is open
    }

    else
    {
        qDebug() << "users files opened succefulyy";
    }

    QTextStream in(&users_file);
    while(!in.atEnd())
    {
        qDebug() << "reading lines";
        QString line = in.readLine();
        QStringList cells = line.split(',');

        // Check if there are enough cells in the line to process
        if (cells.size() >= 4) {
            user *a_user = new user();

            // Set user name
            a_user->set_user_name(cells[0].trimmed());

            // Set password
            a_user->set_password(cells[1].trimmed());

            // Process wishlisted books (split by semicolon)
            QStringList wishlistedBooksList = cells[2].split(';');
            std::vector<QString> wishlistedBooks;
            for (const QString& book : wishlistedBooksList) {
                a_user->set_wishlisted_books(book.trimmed());
            }


            // Process borrowed books (split by semicolon)
            QStringList borrowedBooksList = cells[3].split(';');
            std::vector<QString> borrowedBooks;
            for (const QString& book : borrowedBooksList) {
                a_user->set_borrowed_books(book.trimmed());
            }


            the_users_data_map[a_user->get_password().toInt()] = a_user;

    }

   }



    users_file.close();
   auto temp = the_users_data_map.find(432);
    qDebug() << temp->second->get_user_name();

}
/*
void filemanipulator::users_files_writer()
{
    QFile users_written("C:\\Users\\HP\\Desktop\\shit\\writtenusers.csv");

    if (!users_written.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Error: Could not open file for writing.";

    }

    else
    {
        qDebug() << "users written was succesfully opened";
    }

    QTextStream out(&users_written);

    // Write each row of the 2D vector to the CSV file
    for (const auto& row : the_user_data_vector) {
        QStringList rowData;
        for (const auto& cell : row) {
            rowData << cell;  // Collect cells in a QStringList for joining
        }
        out << rowData.join(",") << "\n";  // Join with commas and write as a line
    }

    users_written.close();

}

void filemanipulator::write_to_users_vector(QString name, QString password, QString wishlistedbooks, QString Borrowedbooks)
{
    vector<QString> rowdata;
    rowdata.push_back(name);
    rowdata.push_back(password);
    rowdata.push_back(wishlistedbooks);
    rowdata.push_back(Borrowedbooks);
    the_user_data_vector.push_back(rowdata);
}

*/
