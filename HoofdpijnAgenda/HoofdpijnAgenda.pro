QT       += core gui sql charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Hoofdpijnen.cpp \
    allehoofdpijnaanvallen.cpp \
    ernstgrafiek.cpp \
    gebruikersgegevens.cpp \
    help.cpp \
    hoofdpijntoevoegen.cpp \
    initializeDB.cpp \
    main.cpp \
    mainwindow.cpp \
    over.cpp \
    recentehoofdpijnaanvallen.cpp \
    symptomengrafiek.cpp

HEADERS += \
    Hoofdpijnen.h \
    allehoofdpijnaanvallen.h \
    ernstgrafiek.h \
    gebruikersgegevens.h \
    help.h \
    hoofdpijntoevoegen.h \
    initializeDB.h \
    mainwindow.h \
    over.h \
    recentehoofdpijnaanvallen.h \
    symptomengrafiek.h

FORMS += \
    allehoofdpijnaanvallen.ui \
    ernstgrafiek.ui \
    gebruikersgegevens.ui \
    help.ui \
    hoofdpijntoevoegen.ui \
    mainwindow.ui \
    over.ui \
    recentehoofdpijnaanvallen.ui \
    symptomengrafiek.ui

TRANSLATIONS += \
    HoofdpijnAgenda_nl_BE.ts \
    HoofdpijnAgenda_nl_NL.ts \
    HoofdpijnAgenda_en_US.ts \
    HoofdpijnAgenda_en_GB.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    HoofdpijnAgenda_en_US.ts
    HoofdpijnAgenda_nl_BE.ts

RESOURCES += \
    Resources.qrc
