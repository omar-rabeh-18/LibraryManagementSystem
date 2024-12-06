#ifndef REQUEST_H
#define REQUEST_H


#include "user.h"
#include "book.h"
#include <QString>
class Request
{
private:

    QString dateOfRequest;
    QString dateOfDecision;
    QString decision;

public:

    book* bookToBeRequested;
    user* userRequestingBook;
    Request(user*, book*, QString, QString, QString);
    Request(user*, book*);
    ~Request();
    void decide(bool);
    QString getUsername(){return userRequestingBook->get_user_name();}
    QString getISBN(){return bookToBeRequested->get_isbn();}
    QString getTitle(){return bookToBeRequested->getTitle();}
    QString getDateOfDecision(){return dateOfDecision;}
    QString getDateOfRequest(){return dateOfRequest;}
    QString getDecision(){return decision;}
};

#endif // REQUEST_H
