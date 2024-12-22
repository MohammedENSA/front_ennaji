QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admingestionemprunt.cpp \
    admingestionlivre.cpp \
    admingestionutilisateur.cpp \
    adminpage.cpp \
    loginpage.cpp \
    main.cpp \
    mainwindow.cpp \
    userinfos.cpp \
    userpage.cpp

HEADERS += \
    admingestionemprunt.h \
    admingestionlivre.h \
    admingestionutilisateur.h \
    adminpage.h \
    loginpage.h \
    mainwindow.h \
    userinfos.h \
    userpage.h

FORMS += \
    admingestionemprunt.ui \
    admingestionlivre.ui \
    admingestionutilisateur.ui \
    adminpage.ui \
    loginpage.ui \
    mainwindow.ui \
    userinfos.ui \
    userpage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    HFHF.qrc \
    Logo.qrc \
    imag.qrc
