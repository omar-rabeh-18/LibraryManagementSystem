#ifndef REQUEST_H
#define REQUEST_H


#include "user.h"
#include "book.h"
#include <QString>
class Request
{
private:
    int bookToBeRequested;
    QString userRequestingBook;
    QString dateOfRequest;
    QString dateOfDecision;
    QString decision;

public:
    Request(QString, int, QString, QString, QString);
    ~Request();
    void decide(bool);
    QString getUsername(){return userRequestingBook;}
    int getISBN(){return bookToBeRequested;}
    QString getDateOfDecision(){return dateOfDecision;}
    QString getDateOfRequest(){return dateOfRequest;}
    QString getDecision(){return decision;}
};

#endif // REQUEST_H
