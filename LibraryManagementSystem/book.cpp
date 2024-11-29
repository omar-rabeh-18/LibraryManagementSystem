#include "book.h"
#include "trie.h"
#include "filemanipulator.h"
extern Trie* myTrie;
void book::processAndInsertWords(const QString& text) {
    QString word;
    for (int i = 0; i < text.length(); ++i) {
        QChar c = text[i];
        if (c.isLetter() || c.isDigit() || c == '-') {
            word += c.toLower();
        } else {
            if (!word.isEmpty()) {
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

    filemanipulator a_file;
    a_file.books_vector.push_back(this);

    // Process words for title, author, ISBN, and library number
    processAndInsertWords(title);
    processAndInsertWords(author);
    processAndInsertWords(isbn);
    processAndInsertWords(booknuminlib);
    processAndInsertWords(genre);
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


