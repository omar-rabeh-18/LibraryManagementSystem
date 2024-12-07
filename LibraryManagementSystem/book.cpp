#include "book.h"
#include "trie.h"
#include "filemanipulator.h"
extern Trie* myTrie;
void book::processAndInsertWords(const QString& text) {
    QString word;
    for (int i = 0; i < text.length(); ++i) {
        qDebug() << "After checking char" << i << "\n";
        QChar c = text[i];
        if (c.isLetter() || c.isDigit() || c == '-') {
            word += c.toLower();
        } else {
            if (!word.isEmpty()) {
                qDebug() << word << "\n";
                myTrie->insert(word, this);
                word.clear();
            }
        }
    }
    if (!word.isEmpty()) {
        myTrie->insert(word, this);
    }
}

book::book(QString t, QString a, QString g, int copies, QString i, QString LN)
    : author(a), title(t), genre(g), availableBooks(copies), isbn(i), booknuminlib(LN) {
    qDebug() << "In Book Constructor\n";
    filemanipulator a_file;
    a_file.books_vector.push_back(this);
    qDebug() << "After Pushing a book\n";
    // Process words for title, author, ISBN, and library number
    processAndInsertWords(title);
    qDebug() << "After Inserting title\n";
    processAndInsertWords(author);
    qDebug() << "After Inserting Author\n";
    processAndInsertWords(isbn);
    qDebug() << "After Inserting ISBN\n";
    processAndInsertWords(booknuminlib);
    qDebug() << "After Inserting BookNumber\n";
    processAndInsertWords(genre);
    qDebug() << "After Inserting Genre\n";
}

QString book::getTitle() const
{
    return title;
}

void book::setTitle(const QString &newTitle)
{
    title = newTitle;
}

QString book::getAuthor() const
{
    return author;
}

void book::setAuthor(const QString &newAuthor)
{
    author = newAuthor;
}

QString book::getGenre() const
{
    return genre;
}

void book::setGenre(const QString &newGenre)
{
    genre = newGenre;
}

int book::getAvailableBooks() const
{
    return availableBooks;
}

void book::setAvailableBooks(int newAvailableBooks)
{
    availableBooks = newAvailableBooks;
    if(availableBooks<0) availableBooks=0;
}

QString book::get_isbn() const
{
    return isbn;
}

QString book::get_book_num_lib() const
{
    return booknuminlib;
}


