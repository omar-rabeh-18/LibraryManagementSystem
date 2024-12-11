#include "filemanipulator.h"
#include <QString>
#include <Vector.h>
#include <QStringList>
#include "book.h"
#include "trie.h"
#include "request.h"
extern Trie* myTrie;

filemanipulator::filemanipulator() {
    qDebug() << projectPath;
    qDebug() << appDir;
}

filemanipulator::~filemanipulator()
{

}



void filemanipulator::users_files_reader()
{
    qDebug() << "In users_files_manipualtor"; //check if file is open

    QString csv_user_path = appDir + "/csv files/users_info.csv";
    qDebug() << csv_user_path;
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
            QString encryptedPassword = cells[1].trimmed();
            if (encryptedPassword.startsWith('"') && encryptedPassword.endsWith('"')) {
                encryptedPassword = encryptedPassword.mid(1, encryptedPassword.length() - 2);
            }
            a_user->set_password(decryptPassword(encryptedPassword));

            // Process wishlisted books (split by semicolon)
            QStringList wishlistedBooksList = cells[2].split(';');
            Vector<QString> wishlistedBooks;
            for (const QString& book : wishlistedBooksList) {
                a_user->set_wishlisted_books(book.trimmed());
            }


            // Process borrowed books (split by semicolon)
            QStringList borrowedBooksList = cells[3].split(';');
            Vector<QString> borrowedBooks;
            for (const QString& book : borrowedBooksList) {
                qDebug() << book;
                a_user->set_borrowed_books(book.trimmed());
            }
            qDebug() << "Starting borrowed list insertion";
            for (QString s: a_user->get_borrowed_books())
            {
                if(s == "") continue;
                qDebug() << s << ", Vector Size: " << myTrie->search(s).size();
                a_user->borrowed_books_objects.push_back(myTrie->search(s)[0]);
            }

            for (QString s: a_user->get_whishlisted_books())
            {
                if(s == "") continue;
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
    QString csv_user_path =  appDir + "/csv files/users_info.csv";
    QFile users_written(csv_user_path);

    if (!users_written.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Error: Could not open file for writing.";

    }

    else
    {
        qDebug() << "users written was succesfully opened";
    }

    QTextStream out(&users_written);


    for (const auto& user : the_users_data_vector) {
        QStringList rowData;

            rowData << user->get_user_name();
        QString encryptedPassword = "\"" + encryptPassword(user->get_password()) + "\"";
        rowData << encryptedPassword;

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

    QString csv_user_path = appDir + "/csv files/books_info.csv";
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
            qDebug() << "Started Reading a Book\n";
            book * some_book = new book(cells[0].trimmed(),cells[1].trimmed(),cells[2].trimmed(),cells[3].trimmed().toInt(), cells[4].trimmed(),cells[5].trimmed());
        }
    }
    for(book * a_book : books_vector)
    {
        qDebug() << a_book->getTitle();
    }
}

void filemanipulator::books_files_writer()
{
    QString csv_books_path = appDir + "/csv files/books_info.csv";
    QFile boks_info_written(csv_books_path);

    if (!boks_info_written.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Error: Could not open file for writing.";

    }

    else
    {
        qDebug() << "book  written was succesfully opened";
    }

    QTextStream out(&boks_info_written);

    // Write each row of the 2D vector to the CSV file
    for (book* some_book : books_vector) {
        QStringList rowData;

        rowData << some_book->getTitle();
        rowData << some_book->getAuthor();
        rowData << some_book->getGenre();
        rowData << QString::number(some_book->getAvailableBooks());
        rowData << some_book->get_isbn();
        rowData << some_book->get_book_num_lib();

        out << rowData.join(",") << "\n";  // Join with commas and write as a line
    }

    boks_info_written.close();
}

void filemanipulator::book_request_reader()
{
    QString csv_book_path = appDir + "/csv files/books_request_info.csv";
    QFile book_request_file(csv_book_path);  //openeing the users file
    string line;
    if(!book_request_file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "book requests files is not open"; //check if file is open
    }

    else
    {
        qDebug() << "requests files opened succefulyy";
    }
    book_requests_vector.clear();
    QTextStream in(&book_request_file);
    while(!in.atEnd())
    {
        qDebug() << "reading lines";
        QString line = in.readLine();
        QStringList cells = line.split(',');
        int index;
        for(index = 0; index < the_users_data_vector.size(); index++){
            if(cells[0] == the_users_data_vector[index]->get_user_name())
                break;
        }

        //Initialize a request
        Request* bookrequest = new Request(
            the_users_data_vector[index],
            myTrie->search(cells[1].trimmed())[0],
            cells[2].trimmed(),
            cells[3].trimmed(),
            cells[4].trimmed()
            );



        book_requests_vector.push_back(bookrequest);



    }

    for(auto  a_request : book_requests_vector)
    {
        qDebug() << a_request->getUsername() << "  " << a_request->getISBN() << "  " << a_request->getDateOfRequest() << "  " << a_request->getDateOfDecision() << "  " <<  "  " << a_request->getDecision();
    }

}

void filemanipulator::book_request_writer()
{
    QString csv_user_path = appDir + "/csv files/books_request_info.csv";
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
    for (Request* book_request : book_requests_vector) {
        QStringList rowData;

        rowData << book_request->getUsername();
        rowData << book_request->getISBN();
        rowData << book_request->getDateOfRequest();
        rowData << book_request->getDateOfDecision();
        rowData << book_request->getDecision();

        out << rowData.join(",") << "\n";  // Join with commas and write as a line
    }

    users_written.close();
}


void filemanipulator::admin_files_reader()
{
    QString csv_admin_path = appDir + "/csv files/admin_info.csv";
    QFile admin_file(csv_admin_path);  //openeing the users file
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
            QString encryptedPassword = cells[1].trimmed();
            if (encryptedPassword.startsWith('"') && encryptedPassword.endsWith('"')) {
                encryptedPassword = encryptedPassword.mid(1, encryptedPassword.length() - 2);
            }
            a_user->set_password(decryptPassword(encryptedPassword));



            the_admin_data_vector.push_back(a_user);

        }

    }

    for(user* some_admin : the_admin_data_vector)
    {
         some_admin->print_info();
        qDebug() << "||||||||||||||";
    }
}



void filemanipulator::admin_files_writer()
{

        QString csv_user_path = appDir + "/csv files/admin_info.csv";
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
            QString encryptedPassword = "\"" + encryptPassword(user->get_password()) + "\"";
            rowData << encryptedPassword;


            out << rowData.join(",") << "\n";  // Join with commas and write as a line
        }

        users_written.close();


}

void filemanipulator::librarian_file_reader()
{
    QString csv_librarian_path = appDir + "/csv files/librarian_info.csv";
    QFile librarian_file(csv_librarian_path);  //openeing the users file
    string line;
    if(!librarian_file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "librairan files is not open"; //check if file is open
    }

    else
    {
        qDebug() << "librarian files opened succefulyy";
    }

    QTextStream in(&librarian_file);
    while(!in.atEnd())
    {
        qDebug() << "reading lines";
        QString line = in.readLine();
        QStringList cells = line.split(',');

        // Check if there are enough cells in the line to process
        if (cells.size() >= 2) {
            user *a_librarian = new user();

            // Set user name
            a_librarian->set_user_name(cells[0].trimmed());

            // Set password
            QString encryptedPassword = cells[1].trimmed();
            if (encryptedPassword.startsWith('"') && encryptedPassword.endsWith('"')) {
                encryptedPassword = encryptedPassword.mid(1, encryptedPassword.length() - 2);
            }
            a_librarian->set_password(decryptPassword(encryptedPassword));




            the_librarian_data_vector.push_back(a_librarian);

        }

    }

    for(user* some_lib : the_librarian_data_vector)
    {
        some_lib->print_info();
        qDebug() << "||||||||||||||";
    }

    librarian_file.close();

}

void filemanipulator::librarian_file_writer()
{
    QString csv_librarian_path = appDir + "/csv files/librarian_info.csv";
    QFile librarian_written(csv_librarian_path);

    if (!librarian_written.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Error: Could not open librarina file for writing.";

    }

    else
    {
        qDebug() << "librarian written was succesfully opened";
    }

    QTextStream out(&librarian_written);


    for (const auto& user : the_librarian_data_vector) {
        QStringList rowData;

        rowData << user->get_user_name();
        QString encryptedPassword = "\"" + encryptPassword(user->get_password()) + "\"";
        rowData << encryptedPassword;


        out << rowData.join(",") << "\n";  // Join with commas and write as a line
    }

    librarian_written.close();
}

QString filemanipulator::encryptPassword(const QString &password)
{
    QByteArray byteArray = password.toUtf8();
    char key = 'K';
    for (int i = 0; i < byteArray.size(); ++i) {
        byteArray[i] = byteArray[i] ^ key;
    }
    return QString::fromUtf8(byteArray);
}

QString filemanipulator::decryptPassword(const QString &encryptedPassword)
{
    QByteArray byteArray = encryptedPassword.toUtf8();
    char key = 'K';
    for (int i = 0; i < byteArray.size(); ++i) {
        byteArray[i] = byteArray[i] ^ key;
    }
    return QString::fromUtf8(byteArray);
}



Vector<user*> filemanipulator::the_users_data_vector = {};
Vector<user*> filemanipulator::the_admin_data_vector = {};
Vector<user*> filemanipulator::the_librarian_data_vector = {};
Vector<book*> filemanipulator::books_vector = {};
Vector<Request*> filemanipulator::book_requests_vector = {};

void filemanipulator::write_to_users_vector(QString name, QString password, QString wishlistedbooks, QString Borrowedbooks)
{
    user* a_user = new user();
    a_user->set_user_name(name);
    a_user->set_password(password);
    a_user->set_wishlisted_books(wishlistedbooks);
    a_user->set_borrowed_books(Borrowedbooks);



    the_users_data_vector.push_back(a_user);
}


