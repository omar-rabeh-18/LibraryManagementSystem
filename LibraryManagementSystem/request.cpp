#include "request.h"
#include <ctime>
using namespace std;
Request::Request(user* pUser, book* pBook) {

    //To document the time at which the request has been created
    time_t currentTime = time(nullptr);
    tm* localTime = localtime(&currentTime);
    dateOfRequest = asctime(localTime);
    dateOfDecision = "";

    //assigning the book and user requesting the books
    userRequestingBook = pUser;
    bookToBeRequested = pBook;


}

void Request::decide(bool pDecision){
    //To document the time at which the request has been made
    time_t currentTime = time(nullptr);
    tm* localTime = localtime(&currentTime);
    dateOfDecision = asctime(localTime);

    *decision = pDecision;
}


Request::~Request(){
    delete userRequestingBook;
    delete bookToBeRequested;
    delete decision;
}
