#include "request.h"
#include <ctime>

//To document the time at which the action has been taken
QString currentTime(){
    time_t currentTime = time(nullptr);
    tm* localTime = localtime(&currentTime);
    char buffer[100];
    strftime(buffer, sizeof(buffer),":%Y-%m-%d %H:%M:%S", localTime);
    return buffer;
}

using namespace std;
Request::Request(QString pUser, int pBook, QString pDateOfRequest, QString pDateOfDecision, QString pDecision) {
    if(pDateOfRequest == ""){//In the case this is a new request
        dateOfRequest = currentTime();
        dateOfDecision = "";
        decision = "Pending";
    }else{//In the case the request is being read from a csv file
        dateOfRequest = pDateOfRequest;
        dateOfDecision = pDateOfDecision;
        decision = pDecision;
    }


    //assigning the book and user requesting the books
    userRequestingBook = pUser;
    bookToBeRequested = pBook;


}

void Request::decide(bool pDecision){
    dateOfDecision = currentTime();
    if(pDecision)
        decision = "Accepted";
    else
        decision = "Denied";
}


Request::~Request(){

}