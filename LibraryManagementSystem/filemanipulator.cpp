#include "filemanipulator.h"
#include <QString>
#include <QVector>
#include <QStringList>
#include <vector>
#include "book.h"
#include "trie.h"
extern Trie* myTrie;

filemanipulator::filemanipulator() {
    qDebug() << projectPath;
}

filemanipulator::~filemanipulator()
{

}



void filemanipulator::users_files_reader()
{
    qDebug() << "In users_files_manipualtor"; //check if file is open

    QString csv_user_path = projectPath + "\\LibraryManagementSystem\\csv files\\users_info.csv";
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

            for (QString s: a_user->get_borrowed_books())
            {
                a_user->borrowed_books_objects.push_back(myTrie->search(s)[0]);
            }

            for (QString s: a_user->get_whishlisted_books())
            {
                a_user->wishlisted_books_objects.push_back(myTrie->search(s)[0]);
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
    QString csv_user_path = projectPath + "\\LibraryManagementSystem\\csv files\\users_info.csv";
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

    QString csv_user_path = projectPath + "\\LibraryManagementSystem\\csv files\\books_info.csv";
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
            book * some_book = new book(cells[0].trimmed(),cells[1].trimmed(),cells[2].trimmed(),cells[3].trimmed().toInt(), cells[4].trimmed(),cells[5].trimmed());

        }
    }

    for(book * a_book : books_vector)
    {
        qDebug() << a_book->getTitle();
    }
}

void filemanipulator::book_request_reader()
{
    QString csv_user_path = projectPath + "\\LibraryManagementSystem\\csv files\\books_request_info.csv";
    QFile users_file(csv_user_path);  //openeing the users file
    string line;
    if(!users_file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "book requests files is not open"; //check if file is open
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
        if (cells.size() >= 2)
        {

            vector<QString> bookrequest;
            bookrequest.push_back(cells[0].trimmed());
            bookrequest.push_back(cells[1].trimmed());
            bookrequest.push_back(cells[2].trimmed());
            bookrequest.push_back(cells[3].trimmed());
            bookrequest.push_back(cells[4].trimmed());


            book_requests_vector.push_back(bookrequest);

        }

    }

    for(auto  a_request : book_requests_vector)
    {
        qDebug() << a_request[0] << "  " << a_request[1] << "  " << a_request[2] << "  " << a_request[3] << "  " <<  "  " << a_request[4];
    }

}

void filemanipulator::book_request_writer()
{
    QString csv_user_path = projectPath + "\\LibraryManagementSystem\\csv files\\books_request_info.csv";
    QFile users_written(csv_user_path);

    if (!users_written.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Error: Could not open file for writing.";

    }

    else
    {
        qDebug() << "book requests written was succesfully opened";
    }

    QTextStream out(&users_written);

    // Write each row of the 2D vector to the CSV file
    for (const auto book_request : book_requests_vector) {
        QStringList rowData;

        rowData << book_request[0];
        rowData << book_request[1];
        rowData << book_request[2];
        rowData << book_request[3];
        rowData << book_request[4];

        out << rowData.join(",") << "\n";  // Join with commas and write as a line
    }

    users_written.close();
}



void filemanipulator::admin_files_reader()
{
    QString csv_user_path = projectPath + "\\LibraryManagementSystem\\csv files\\admin_info.csv";
    QFile admin_file(csv_user_path);  //openeing the users file
    string line;
    if(!admin_file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "admin files is not open"; //check if file is open
    }

    else
    {
        qDebug() << "admin files opened succefulyy";
    }

    QTextStream in(&admin_file);
    while(!in.atEnd())
    {
        qDebug() << "reading lines";
        QString line = in.readLine();
        QStringList cells = line.split(',');

        // Check if there are enough cells in the line to process
        if (cells.size() >= 2) {
            user *a_user = new user();

            // Set user name
            a_user->set_user_name(cells[0].trimmed());

            // Set password
            a_user->set_password(cells[1].trimmed());



            the_users_data_vector.push_back(a_user);

        }

    }
}



void filemanipulator::admin_files_writer()
{

        QString csv_user_path = projectPath + "\\LibraryManagementSystem\\csv files\\admin_info.csv";
        QFile users_written(csv_user_path);

        if (!users_written.open(QIODevice::WriteOnly | QIODevice::Text)) {
            qDebug() << "Error: Could not open file for writing.";

        }

        else
        {
            qDebug() << "admin written was succesfully opened";
        }

        QTextStream out(&users_written);

        // Write each row of the 2D vector to the CSV file
        for (const auto& user : the_admin_data_vector) {
            QStringList rowData;

            rowData << user->get_user_name();
            rowData << user->get_password();


            out << rowData.join(",") << "\n";  // Join with commas and write as a line
        }

        users_written.close();


}



std::vector<user*> filemanipulator::the_users_data_vector = {};
std::vector<user*> filemanipulator::the_admin_data_vector = {};
std::vector<book*> filemanipulator::books_vector = {};
std::vector<vector<QString>> filemanipulator::book_requests_vector = {};

void filemanipulator::write_to_users_vector(QString name, QString password, QString wishlistedbooks, QString Borrowedbooks)
{
    user* a_user = new user();
    a_user->set_user_name(name);
    a_user->set_password(password);
    a_user->set_wishlisted_books(wishlistedbooks);
    a_user->set_borrowed_books(Borrowedbooks);



    the_users_data_vector.push_back(a_user);
}


