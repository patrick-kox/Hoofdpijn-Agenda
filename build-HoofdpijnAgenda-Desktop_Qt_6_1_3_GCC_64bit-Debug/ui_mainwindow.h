/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Gebruikers_Gegevens;
    QAction *action_Hoofdpijn_Toevoegen;
    QAction *actionToon_meest_Recente_Hoofdpijn_Aanvallen;
    QAction *actionToon_Alle_Hoofdpijn_Aanvallen;
    QAction *action_Afsluiten;
    QAction *action_Help;
    QAction *action_Informatie;
    QAction *action_Gegevensbestand_Herstellen;
    QAction *actionGegevens_Exporteren;
    QAction *action_Ernst_van_de_hoofdpijnen;
    QAction *action_Ernst;
    QAction *actionSymptomen;
    QAction *action_Rapport;
    QAction *action_Rapport_Weergeven;
    QWidget *centralwidget;
    QLabel *Background;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuBestand;
    QMenu *menuHulpmiddelen;
    QMenu *menuH_ulp;
    QMenu *menuGrafieken;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/HoofdpijnAgenda.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_Gebruikers_Gegevens = new QAction(MainWindow);
        action_Gebruikers_Gegevens->setObjectName(QString::fromUtf8("action_Gebruikers_Gegevens"));
        action_Hoofdpijn_Toevoegen = new QAction(MainWindow);
        action_Hoofdpijn_Toevoegen->setObjectName(QString::fromUtf8("action_Hoofdpijn_Toevoegen"));
        actionToon_meest_Recente_Hoofdpijn_Aanvallen = new QAction(MainWindow);
        actionToon_meest_Recente_Hoofdpijn_Aanvallen->setObjectName(QString::fromUtf8("actionToon_meest_Recente_Hoofdpijn_Aanvallen"));
        actionToon_Alle_Hoofdpijn_Aanvallen = new QAction(MainWindow);
        actionToon_Alle_Hoofdpijn_Aanvallen->setObjectName(QString::fromUtf8("actionToon_Alle_Hoofdpijn_Aanvallen"));
        action_Afsluiten = new QAction(MainWindow);
        action_Afsluiten->setObjectName(QString::fromUtf8("action_Afsluiten"));
        action_Help = new QAction(MainWindow);
        action_Help->setObjectName(QString::fromUtf8("action_Help"));
        action_Informatie = new QAction(MainWindow);
        action_Informatie->setObjectName(QString::fromUtf8("action_Informatie"));
        action_Gegevensbestand_Herstellen = new QAction(MainWindow);
        action_Gegevensbestand_Herstellen->setObjectName(QString::fromUtf8("action_Gegevensbestand_Herstellen"));
        actionGegevens_Exporteren = new QAction(MainWindow);
        actionGegevens_Exporteren->setObjectName(QString::fromUtf8("actionGegevens_Exporteren"));
        action_Ernst_van_de_hoofdpijnen = new QAction(MainWindow);
        action_Ernst_van_de_hoofdpijnen->setObjectName(QString::fromUtf8("action_Ernst_van_de_hoofdpijnen"));
        action_Ernst = new QAction(MainWindow);
        action_Ernst->setObjectName(QString::fromUtf8("action_Ernst"));
        actionSymptomen = new QAction(MainWindow);
        actionSymptomen->setObjectName(QString::fromUtf8("actionSymptomen"));
        action_Rapport = new QAction(MainWindow);
        action_Rapport->setObjectName(QString::fromUtf8("action_Rapport"));
        action_Rapport_Weergeven = new QAction(MainWindow);
        action_Rapport_Weergeven->setObjectName(QString::fromUtf8("action_Rapport_Weergeven"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Background = new QLabel(centralwidget);
        Background->setObjectName(QString::fromUtf8("Background"));
        Background->setGeometry(QRect(-6, -9, 811, 581));
        Background->setFrameShape(QFrame::StyledPanel);
        Background->setPixmap(QPixmap(QString::fromUtf8(":/images/iStock-1146312637.jpg")));
        Background->setScaledContents(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 510, 801, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        menuBestand = new QMenu(menubar);
        menuBestand->setObjectName(QString::fromUtf8("menuBestand"));
        menuHulpmiddelen = new QMenu(menubar);
        menuHulpmiddelen->setObjectName(QString::fromUtf8("menuHulpmiddelen"));
        menuH_ulp = new QMenu(menubar);
        menuH_ulp->setObjectName(QString::fromUtf8("menuH_ulp"));
        menuGrafieken = new QMenu(menubar);
        menuGrafieken->setObjectName(QString::fromUtf8("menuGrafieken"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuBestand->menuAction());
        menubar->addAction(menuGrafieken->menuAction());
        menubar->addAction(menuHulpmiddelen->menuAction());
        menubar->addAction(menuH_ulp->menuAction());
        menuBestand->addAction(action_Gebruikers_Gegevens);
        menuBestand->addAction(action_Hoofdpijn_Toevoegen);
        menuBestand->addAction(actionToon_meest_Recente_Hoofdpijn_Aanvallen);
        menuBestand->addAction(actionToon_Alle_Hoofdpijn_Aanvallen);
        menuBestand->addSeparator();
        menuBestand->addAction(action_Afsluiten);
        menuHulpmiddelen->addAction(action_Gegevensbestand_Herstellen);
        menuHulpmiddelen->addSeparator();
        menuHulpmiddelen->addAction(action_Rapport_Weergeven);
        menuH_ulp->addAction(action_Help);
        menuH_ulp->addAction(action_Informatie);
        menuGrafieken->addAction(action_Ernst);
        menuGrafieken->addAction(actionSymptomen);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hoofdpijn Agenda", nullptr));
        action_Gebruikers_Gegevens->setText(QCoreApplication::translate("MainWindow", "&Gebruikers Gegevens", nullptr));
        action_Hoofdpijn_Toevoegen->setText(QCoreApplication::translate("MainWindow", "&Hoofdpijn Toevoegen", nullptr));
        actionToon_meest_Recente_Hoofdpijn_Aanvallen->setText(QCoreApplication::translate("MainWindow", "&Recente Hoofdpijnen", nullptr));
        actionToon_Alle_Hoofdpijn_Aanvallen->setText(QCoreApplication::translate("MainWindow", "Alle &Hoofdpijnen", nullptr));
        action_Afsluiten->setText(QCoreApplication::translate("MainWindow", "&Afsluiten", nullptr));
        action_Help->setText(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        action_Informatie->setText(QCoreApplication::translate("MainWindow", "&Over", nullptr));
        action_Gegevensbestand_Herstellen->setText(QCoreApplication::translate("MainWindow", "&Gegevens Herstellen", nullptr));
        actionGegevens_Exporteren->setText(QCoreApplication::translate("MainWindow", "Gegevens &Exporteren", nullptr));
        action_Ernst_van_de_hoofdpijnen->setText(QCoreApplication::translate("MainWindow", "&Ernst van de hoofdpijnen", nullptr));
        action_Ernst->setText(QCoreApplication::translate("MainWindow", "&Ernst", nullptr));
        actionSymptomen->setText(QCoreApplication::translate("MainWindow", "&Symptomen", nullptr));
        action_Rapport->setText(QCoreApplication::translate("MainWindow", "&Rapport", nullptr));
        action_Rapport_Weergeven->setText(QCoreApplication::translate("MainWindow", "&Rapport Opslaan", nullptr));
        Background->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Hoofdpijn Agenda", nullptr));
        menuBestand->setTitle(QCoreApplication::translate("MainWindow", "&Bestand", nullptr));
        menuHulpmiddelen->setTitle(QCoreApplication::translate("MainWindow", "&Hulpmiddellen", nullptr));
        menuH_ulp->setTitle(QCoreApplication::translate("MainWindow", "H&ulp", nullptr));
        menuGrafieken->setTitle(QCoreApplication::translate("MainWindow", "&Grafieken", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
