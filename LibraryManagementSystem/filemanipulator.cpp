#include "filemanipulator.h"
#include <QString>
#include <QVector>
#include <QStringList>
#include <vector>
#include "book.h"


filemanipulator::filemanipulator() {
    qDebug() << projectPath;
}

void filemanipulator::users_files_reader()
{
    qDebug() << "In users_files_manipualtor"; //check if file is open

    QString csv_user_path = projectPath + "\\csv files\\users_info.csv";
    QFile users_file(csv_user_path);  //openeing the users file
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


            the_users_data_vector.push_back(a_user);

    }

   }


   for(user * users : the_users_data_vector)
   {
        users->print_info();
       qDebug() << "||||||||||" ;
   }


}

void filemanipulator::users_files_writer()
{
    QString csv_user_path = projectPath + "\\csv files\\users_info.csv";
    QFile users_written(csv_user_path);

    if (!users_written.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Error: Could not open file for writing.";

    }

    else
    {
        qDebug() << "users written was succesfully opened";
    }

    QTextStream out(&users_written);

    // Write each row of the 2D vector to the CSV file
    for (const auto& user : the_users_data_vector) {
        QStringList rowData;

            rowData << user->get_user_name();
            rowData << user->get_password();

            QStringList wishlisted_books_string;
            for(QString book : user->get_whishlisted_books())
            {
                wishlisted_books_string << book;
            }
            QString wish_list = wishlisted_books_string.join(";");

            rowData << wish_list;

            QStringList borrowed_books_string;
            for(QString book : user->get_borrowed_books())
            {
                borrowed_books_string << book;
            }


            QString borrowed_list = borrowed_books_string.join(";");

            rowData << borrowed_list;

        out << rowData.join(",") << "\n";  // Join with commas and write as a line
    }

    users_written.close();

}

void filemanipulator::books_files_reader()
{
    qDebug() << "In books_files_manipualtor"; //check if file is open

    QString csv_user_path = projectPath + "\\csv files\\books_info.csv";
    QFile users_file(csv_user_path);  //openeing the users file
    string line;
    if(!users_file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "books files is not open"; //check if file is open
    }

    else
    {
        qDebug() << "books files opened succefulyy";
    }

    QTextStream in(&users_file);
    while(!in.atEnd())
    {
        qDebug() << "reading lines";
        QString line = in.readLine();
        QStringList cells = line.split(',');

        // Check if there are enough cells in the line to process
        if (cells.size() >= 6) {
            book * some_book = new book(cells[0].trimmed(),cells[1].trimmed(),cells[2].trimmed(),cells[3].trimmed().toInt());



        }
    }

    for(book * a_book : books_vector)
    {
        qDebug() << a_book->getTitle();
    }
}


std::vector<user*> filemanipulator::the_users_data_vector = {};
std::vector<book*> filemanipulator::books_vector = {};

void filemanipulator::write_to_users_vector(QString name, QString password, QString wishlistedbooks, QString Borrowedbooks)
{
    user* a_user = new user();
    a_user->set_user_name(name);
    a_user->set_password(password);
    a_user->set_wishlisted_books(wishlistedbooks);
    a_user->set_borrowed_books(Borrowedbooks);



    the_users_data_vector.push_back(a_user);
}


