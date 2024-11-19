#include "book.h"
#include "trie.h"
#include "filemanipulator.h"
extern Trie* myTrie;
book::book(QString t, QString a, QString g, int copies):author(a),title(t),genre(g),availableBooks(copies)
{  QString word;

   filemanipulator a_file;

    a_file.books_vector.push_back(this);


    // Loop through each character in the title
    for (int i = 0; i < title.length(); ++i) {
        QChar c = title[i];

        // If the character is a letter (A-Z or a-z), add it to the current word
        if (c.isLetter()) {
            word += c.toLower(); // Convert to lowercase and append to the word
        } else {
            // If the character is not a letter and word is not empty, insert it into the Trie
            if (!word.isEmpty()) {
                myTrie->insert(word, this); // Insert the word into the Trie
                word.clear(); // Reset word for next word
            }
        }
    }

    // After looping through the title, check if there's any remaining word to insert
    if (!word.isEmpty()) {
        myTrie->insert(word, this); // Insert the last word into the Trie
    }

    // Reset word and repeat the same logic for the author
    word.clear(); // Reset word for author

    // Loop through each character in the author's name
    for (int i = 0; i < author.length(); ++i) {
        QChar c = author[i];

        // If the character is a letter (A-Z or a-z), add it to the current word
        if (c.isLetter()) {
            word += c.toLower(); // Convert to lowercase and append to the word
        } else {
            // If the character is not a letter and word is not empty, insert it into the Trie
            if (!word.isEmpty()) {
                myTrie->insert(word, this); // Insert the word into the Trie
                word.clear(); // Reset word for next word
            }
        }
    }

    // After looping through the author, check if there's any remaining word to insert
    if (!word.isEmpty()) {
        myTrie->insert(word, this); // Insert the last word into the Trie
    }}

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


