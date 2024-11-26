#ifndef REQUEST_H
#define REQUEST_H


#include "user.h"
#include "book.h"
#include <QString>
class Request
{
private:
    book* bookToBeRequested;
    user* userRequestingBook;
    QString dateOfRequest;
    QString dateOfDecision;
    bool* decision = nullptr;

public:
    Request(user*, book*);
    ~Request();
    void decide(bool);
};

#endif // REQUEST_H
