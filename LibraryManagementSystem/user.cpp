#include "user.h"
#include "mainwindow.h"
#include "searchwindow.h"
#include "ui_user.h"
#include "trie.h"
extern Trie* myTrie;
user::user(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::user)
{
    ui->setupUi(this);
     connect(ui->searchList, &QListWidget::itemClicked, this, &user::on_searchList_itemClicked);
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
  //  wishlisted_books.push_back(wishlisted_book);
}

vector<QString> user::get_whishlisted_books()
{
  //  return wishlisted_books;
}

void user::set_borrowed_books(QString borrowed_book)
{
    //borrowed_books.push_back(borrowed_book);
}

vector<QString> user::get_borrowed_books()
{
   // return borrowed_books;
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
    for (book * b: results) qDebug()<<b->getTitle()<<"\n";

    ui->searchList->clear(); // Clear any existing items

    for (const auto& b : results) {
        QString bookDetails = QString("%1 by %2 [%3 copies available]")
        .arg(b->getTitle())
            .arg(b->getAuthor())
            .arg(b->getAvailableBooks());
        QListWidgetItem* item = new QListWidgetItem(bookDetails, ui->searchList);
        item->setData(Qt::UserRole, QVariant::fromValue(static_cast<void*>(b)));
        ui->searchList->addItem(item);
    }
}

void user::populate_wishList()
{
    for (book * b: wishlisted_books) qDebug()<<b->getTitle()<<"\n";

    ui->wishList->clear(); // Clear any existing items

    for (const auto& b : wishlisted_books) {
        QString bookDetails = QString("%1 by %2 [%3 copies available in library]")
        .arg(b->getTitle())
            .arg(b->getAuthor())
            .arg(b->getAvailableBooks());
        QListWidgetItem* item = new QListWidgetItem(bookDetails, ui->wishList);
        item->setData(Qt::UserRole, QVariant::fromValue(static_cast<void*>(b)));
        ui->wishList->addItem(item);
    }
}

void user::populate_borrowedList()
{
    for (book * b: borrowed_books) qDebug()<<b->getTitle()<<"\n";

    ui->borrowList->clear(); // Clear any existing items

    for (const auto& b : borrowed_books) {
        QString bookDetails = QString("%1 by %2 [%3 copies available in library]")
        .arg(b->getTitle())
            .arg(b->getAuthor())
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
    QString searchAuthor = ui->authorSearchTextedit->toPlainText();

    std::vector<QString> titleWords;
    std::vector<QString> authorWords;

    // Split the title into words
    QString currentWord;
    for (int i = 0; i < searchTitle.length(); ++i) {
        QChar c = searchTitle[i];
        if (c.isLetter()) {
            currentWord += c.toLower();  // Add the letter to the current word in lowercase
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

    // Split the author into words
    currentWord.clear();
    for (int i = 0; i < searchAuthor.length(); ++i) {
        QChar c = searchAuthor[i];
        if (c.isLetter()) {
            currentWord += c.toLower();  // Add the letter to the current word in lowercase
        } else {
            if (!currentWord.isEmpty()) {
                authorWords.push_back(currentWord);  // Add word to vector if it's not empty
                currentWord.clear();  // Reset current word
            }
        }
    }
    if (!currentWord.isEmpty()) {
        authorWords.push_back(currentWord);  // Add the last word if any
    }

    // Now, let's perform the search for each word in the title and author and find the intersection of results

    bool firstWord = true;

    // Search for title words and find the intersection
    for (const QString& word : titleWords) {
        std::vector<book*> currentBooks = myTrie->search(word);

        if (firstWord) {
            results = currentBooks;  // For the first word, initialize results with the books found
            firstWord = false;
        } else {
            // For subsequent words, find the intersection of results
            std::vector<book*> intersectedBooks;
            for (book* bookInResults : results) {
                if (std::find(currentBooks.begin(), currentBooks.end(), bookInResults) != currentBooks.end()) {
                    intersectedBooks.push_back(bookInResults);
                }
            }
            results = intersectedBooks;  // Update results with the intersection
        }
    }

    // Now, do the same for author words and find the intersection with the current results
    firstWord = true;
    for (const QString& word : authorWords) {
        std::vector<book*> currentBooks = myTrie->search(word);

        if (firstWord) {
            results = currentBooks;  // For the first word, initialize results with the books found
            firstWord = false;
        } else {
            // For subsequent words, find the intersection of results
            std::vector<book*> intersectedBooks;
            for (book* bookInResults : results) {
                if (std::find(currentBooks.begin(), currentBooks.end(), bookInResults) != currentBooks.end()) {
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
    this->close();
    MainWindow *m = new MainWindow();
    m->show();
}


void user::on_pushButton_clicked()
{
    //borrow

    auto selectedItem = ui->searchList->currentItem();
    if (selectedItem) {
        book* selectedBook = static_cast<book*>(selectedItem->data(Qt::UserRole).value<void*>());
        if(selectedBook->getAvailableBooks()>0) selectedBook->setAvailableBooks(selectedBook->getAvailableBooks()-1);
       if(selectedBook->getAvailableBooks()>0)  borrowed_books.push_back(selectedBook);
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
        wishlisted_books.push_back(selectedBook);
       populate_wishList(); // Refresh the list
        populate_searchList();
    }

}

