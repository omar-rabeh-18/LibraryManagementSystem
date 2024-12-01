#include "admin.h"
#include "mainwindow.h"
#include "filemanipulator.h"
#include "ui_admin.h"
#include "book.h"
#include "trie.h"
#include <vector>
using namespace std;
extern Trie* myTrie;
admin::admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);
    connect(ui->listWidget, &QListWidget::itemClicked, this, &admin::on_listWidget_itemClicked);
}

admin::~admin()
{
    delete ui;
}

void admin::on_pushButton_clicked()
{
    QString genre=ui->genreTextBox->toPlainText();;
    int copies=ui->copiesNumber->value();
    QString lnum=ui->lnumTextBox->toPlainText();
    QString ispn=ui->ISPNTextBox->toPlainText();
    if(!myTrie->search(ispn).empty()) {
        book* existing= myTrie->search(ispn)[0];
        existing->setAvailableBooks(existing->getAvailableBooks()+copies);
        return;} //BOOK ALREADY THERE
    book * newBook=new book (ui->titleTextBox->toPlainText(),ui->authorTextBox->toPlainText(),genre,copies,ispn,lnum);
}


void admin::on_pushButton_2_clicked()
{
    results.clear();
    QString searchTitle = ui->titleSearchTextedit->toPlainText();

    std::vector<QString> titleWords;
    std::vector<QString> authorWords;

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


    // searcing

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



    poulateBooksList();
}


void admin::on_pushButton_3_clicked()
{
    auto selectedItem = ui->listWidget->currentItem();
    if (selectedItem) {
        book* selectedBook = static_cast<book*>(selectedItem->data(Qt::UserRole).value<void*>());
        selectedBook->setAvailableBooks(selectedBook->getAvailableBooks()-ui->removingNumber->value());
        poulateBooksList(); // Refresh the list
    }
}

void admin::poulateBooksList()
{
    for (book *b : results) {
        qDebug() << b->getTitle() << "\n";
    }

    ui->listWidget->clear(); // Clear any existing items

    for (const auto& b : results) {
        QString bookDetails = QString("Title: %1\nAuthor: %2\nGenre: %3\nISBN: %4\nLibrary Number: %5\nAvailable Copies: %6")
        .arg(b->getTitle())
            .arg(b->getAuthor())
            .arg(b->getGenre())
            .arg(b->get_isbn())
            .arg(b->get_book_num_lib())
            .arg(b->getAvailableBooks());

        QListWidgetItem* item = new QListWidgetItem(bookDetails, ui->listWidget);
        item->setData(Qt::UserRole, QVariant::fromValue(static_cast<void*>(b)));
        ui->listWidget->addItem(item);
    }
}


void admin::on_listWidget_itemClicked(QListWidgetItem *item)
{
book* selectedBook = static_cast<book*>(item->data(Qt::UserRole).value<void*>());
}





void admin::on_signOutPushButton_clicked()
{
    filemanipulator File;
    File.books_files_writer();
    this->close();
    MainWindow *m = new MainWindow();
    m->show();
}



