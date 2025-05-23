QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin.cpp \
    adminloginwindow.cpp \
    adminsignupwindow.cpp \
    book.cpp \
    filemanipulator.cpp \
    librarian.cpp \
    librarianlogin.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    request.cpp \
    searchwindow.cpp \
    signup.cpp \
    trie.cpp \
    user.cpp

HEADERS += \
    Vector.h \
    admin.h \
    adminloginwindow.h \
    adminsignupwindow.h \
    book.h \
    filemanipulator.h \
    librarian.h \
    librarianlogin.h \
    login.h \
    mainwindow.h \
    request.h \
    searchwindow.h \
    signup.h \
    trie.h \
    user.h

FORMS += \
    admin.ui \
    adminloginwindow.ui \
    adminsignupwindow.ui \
    librarian.ui \
    librarianlogin.ui \
    login.ui \
    mainwindow.ui \
    searchwindow.ui \
    signup.ui \
    user.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    TheResources.qrc
