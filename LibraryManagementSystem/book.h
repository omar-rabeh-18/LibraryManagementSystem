#ifndef BOOK_H
#define BOOK_H
#include <QString>

class book
{
public:
    book(QString t,QString a, QString g,int copies);
    QString getTitle() const;
    void setTitle(const QString &newTitle);

    QString getAuthor() const;
    void setAuthor(const QString &newAuthor);

    QString getGenre() const;
    void setGenre(const QString &newGenre);

    int getAvailableBooks() const;
    void setAvailableBooks(int newAvailableBooks);

    int get_isbn() const;
    void set_isbn(int newAvailableBooks);

    int get_book_num_lib() const;
    void set_book_num_lib(int newAvailableBooks);

private:
    QString title ;
     QString author ;
     QString genre ;
     int availableBooks;
     int isbn;
     int booknuminlib;

};

#endif // BOOK_H
