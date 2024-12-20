#include "user.h"
#include "mainwindow.h"
#include "searchwindow.h"
#include "ui_user.h"
#include "trie.h"
#include "filemanipulator.h"
extern Trie* myTrie;
user::user(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::user)
{
    ui->setupUi(this);
     connect(ui->searchList, &QListWidget::itemClicked, this, &user::on_searchList_itemClicked);


     this->resize(1121, 621);

     QPixmap bg(":/resources/userdashboard.png");

     ui->backpic->setPixmap(bg.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
     ui->backpic->resize(this->size());
     ui->backpic->lower();

     ui->backpic_2->setPixmap(bg.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
     ui->backpic_2->resize(this->size());
     ui->backpic_2->lower();

}

user::~user()
{
    delete ui;
}

void user::set_user_name(QString name)
{
    user_name = name;
}

QString user::get_user_name()
{
    return user_name;
}

void user::set_password(QString given_password)
{
    password = given_password;
}

QString user::get_password()
{
    return password;
}

void user::set_wishlisted_books(QString wishlisted_book)
{
    wishlisted_books.push_back(wishlisted_book);
}

Vector<QString> user::get_whishlisted_books()
{
    return wishlisted_books;
}

void user::set_borrowed_books(QString borrowed_book)
{
    borrowed_books.push_back(borrowed_book);
}

Vector<QString> user::get_borrowed_books()
{
     return borrowed_books;
}

void user::print_info()
{
    qDebug() << user_name;
    qDebug() << password;
    for(QString book : wishlisted_books)
    {
        qDebug() << book;
    }

    for(QString book : borrowed_books)
    {
        qDebug() << book;
    }
    qDebug() << "|||||||||||";
}


//WARNING: Crash the applications. DO NOT USE (for now)
void user::refresh()
{
    populate_borrowedList();
    populate_wishList();
    ui->searchList->clear();
}



void user::on_searchPushButton_clicked()
{

    hide();
    searchWindow s;
    s.setModal(true);
    s.exec();
}

void user::populate_searchList()
{
    for (book* b : results) {
        qDebug() << b->getTitle() << "\n";
    }

    ui->searchList->clear(); // Clear any existing items

    for (const auto& b : results) {
        QString bookDetails = QString("Title: %1\nAuthor: %2\nGenre: %3\nISBN: %4\nLibrary Number: %5\nAvailable Copies: %6")
        .arg(b->getTitle())
            .arg(b->getAuthor())
            .arg(b->getGenre())
            .arg(b->get_isbn())
            .arg(b->get_book_num_lib())
            .arg(b->getAvailableBooks());

        QListWidgetItem* item = new QListWidgetItem(bookDetails, ui->searchList);
        item->setData(Qt::UserRole, QVariant::fromValue(static_cast<void*>(b)));
        ui->searchList->addItem(item);
    }
}
void user::populate_wishList()
{
    for (book* b : wishlisted_books_objects) {
        qDebug() << b->getTitle() << "\n";
    }

    ui->wishList->clear(); // Clear any existing items

    for (const auto& b : wishlisted_books_objects) {
        QString bookDetails = QString("Title: %1\nAuthor: %2\nGenre: %3\nISBN: %4\nLibrary Number: %5\nAvailable Copies: %6")
        .arg(b->getTitle())
            .arg(b->getAuthor())
            .arg(b->getGenre())
            .arg(b->get_isbn())
            .arg(b->get_book_num_lib())
            .arg(b->getAvailableBooks());

        QListWidgetItem* item = new QListWidgetItem(bookDetails, ui->wishList);
        item->setData(Qt::UserRole, QVariant::fromValue(static_cast<void*>(b)));
        ui->wishList->addItem(item);
    }
}
void user::populate_borrowedList()
{
    for (book* b : borrowed_books_objects) {
        qDebug() << b->getTitle() << "\n";
    }

    ui->borrowList->clear(); // Clear any existing items

    for (const auto& b : borrowed_books_objects) {
        QString bookDetails = QString("Title: %1\nAuthor: %2\nGenre: %3\nISBN: %4\nLibrary Number: %5\nAvailable Copies: %6")
        .arg(b->getTitle())
            .arg(b->getAuthor())
            .arg(b->getGenre())
            .arg(b->get_isbn())
            .arg(b->get_book_num_lib())
            .arg(b->getAvailableBooks());

        QListWidgetItem* item = new QListWidgetItem(bookDetails, ui->borrowList);
        item->setData(Qt::UserRole, QVariant::fromValue(static_cast<void*>(b)));
        ui->borrowList->addItem(item);
    }
}

void user::on_pushButton_2_clicked()
{

    results.clear();
    QString searchTitle = ui->titleSearchTextedit->toPlainText();


    Vector<QString> titleWords;

    // Split the title into words (considering letters, digits, and dash)
    QString currentWord;
    for (int i = 0; i < searchTitle.length(); ++i) {
        QChar c = searchTitle[i];

        // Check if the character is a letter, digit, or dash
        if (c.isLetter() || c.isDigit() || c == '-') {
            currentWord += c.toLower();  // Add the character to the current word in lowercase
        } else {
            if (!currentWord.isEmpty()) {
                titleWords.push_back(currentWord);  // Add word to vector if it's not empty
                currentWord.clear();  // Reset current word
            }
        }
    }
    if (!currentWord.isEmpty()) {
        titleWords.push_back(currentWord);  // Add the last word if any
    }



    // Now, let's perform the search for each word in the title and author and find the intersection of results

    bool firstWord = true;

    // Search for title words and find the intersection
    for (const QString& word : titleWords) {
        Vector<book*> currentBooks = myTrie->search(word);

        if (firstWord) {
            results = currentBooks;  // For the first word, initialize results with the books found
            firstWord = false;
        } else {
            // For subsequent words, find the intersection of results
            Vector<book*> intersectedBooks;
            for (book* bookInResults : results) {
                if (currentBooks.find(bookInResults) != currentBooks.end()) {
                    intersectedBooks.push_back(bookInResults);
                }
            }
            results = intersectedBooks;  // Update results with the intersection
        }
    }


    populate_searchList();
}


void user::on_searchList_itemClicked(QListWidgetItem *item)
{
    book* selectedBook = static_cast<book*>(item->data(Qt::UserRole).value<void*>());
}


void user::on_signOutPushButton_clicked()
{
    //filemanipulator::book_request_writer();
    //filemanipulator::users_files_writer();
    filemanipulator File = filemanipulator();
    File.book_request_writer();
    File.users_files_writer();
    File.books_files_writer();
    this->close();
    MainWindow *m = new MainWindow();
    m->show();
}


void user::on_pushButton_clicked()
{
    //borrow
    //TODO: Make the borrow make a request

    auto selectedItem = ui->searchList->currentItem();

    if (selectedItem) {
        book* selectedBook = static_cast<book*>(selectedItem->data(Qt::UserRole).value<void*>());
        Request* request = new Request(this, selectedBook);
        filemanipulator::book_requests_vector.push_back(request);

        //Redundant Code
        populate_borrowedList(); // Refresh the list
        populate_searchList();
        ui->borrowList->update();
    }

}


void user::on_pushButton_3_clicked()
{ //add wishlist
    auto selectedItem = ui->searchList->currentItem();
    if (selectedItem) {
        book* selectedBook = static_cast<book*>(selectedItem->data(Qt::UserRole).value<void*>());
        wishlisted_books_objects.push_back(selectedBook);
        wishlisted_books.push_back(selectedBook->get_isbn());
       populate_wishList(); // Refresh the list
        //populate_searchList();
    }

}


void user::on_pushButton_4_clicked()
{
    // Unborrow
    auto selectedItem = ui->borrowList->currentItem();
    if (selectedItem)
    {
        book* selectedBook = static_cast<book*>(selectedItem->data(Qt::UserRole).value<void*>());
        auto it = borrowed_books_objects.find(selectedBook);
        if (it != borrowed_books_objects.end()) {
            borrowed_books_objects.erase(it); // Erase the book from the borrowed list
            //Increment its number in the Trie
            selectedBook->setAvailableBooks(selectedBook->getAvailableBooks() + 1);
        }

        auto it2 = borrowed_books.find(selectedBook->get_isbn());
        if (it2 != borrowed_books.end()) {
            borrowed_books.erase(it2); // Erase the book from the borrowed list
        }
    }

    populate_borrowedList(); // Refresh the borrowed list
    populate_searchList();   // Refresh the search list
}

void user::on_pushButton_5_clicked()
{
    // Remove from Wishlist
    auto selectedItem = ui->wishList->currentItem();
    if (selectedItem)
    {
        book* selectedBook = static_cast<book*>(selectedItem->data(Qt::UserRole).value<void*>());
        auto it = wishlisted_books_objects.find(selectedBook);
        if (it != wishlisted_books_objects.end()) {
            wishlisted_books_objects.erase(it); // Erase the book from the wishlist
        }
        auto it2 = wishlisted_books.find(selectedBook->get_isbn());
        if (it2 != wishlisted_books.end()) {
            wishlisted_books.erase(it2); // Erase the book from the wishlist
        }
    }

    populate_wishList(); // Refresh the wishlist
    populate_searchList(); // Refresh the search list
}

