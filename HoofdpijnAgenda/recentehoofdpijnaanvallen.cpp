#include "recentehoofdpijnaanvallen.h"
#include "ui_recentehoofdpijnaanvallen.h"

#include <QSqlDatabase>
#include <QSqlQuery>

RecenteHoofdpijnaanvallen::RecenteHoofdpijnaanvallen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RecenteHoofdpijnaanvallen)
{
    ui->setupUi(this);
    int rijen = telRecenteAanvallen();
    if (rijen > 31)
    {
        rijen = 31;
    }
    ui->tableRecenteAanvallen->setRowCount(rijen);
    ui->tableRecenteAanvallen->setColumnCount(28);

    // Define column header texts
    QTableWidgetItem* datum = new QTableWidgetItem(QString("Datum"),QTableWidgetItem::Type);
    QTableWidgetItem* ernst = new QTableWidgetItem(QString("Ernst"),QTableWidgetItem::Type);
    QTableWidgetItem* enkelzijdig = new QTableWidgetItem(QString("Aan één zijde"),QTableWidgetItem::Type);
    QTableWidgetItem* kloppend = new QTableWidgetItem(QString("Kloppende Hoofdpijn"),QTableWidgetItem::Type);
    QTableWidgetItem* hindertDagAct = new QTableWidgetItem(QString("Hindert dagelijkse activiteiten"),QTableWidgetItem::Type);
    QTableWidgetItem* verergertMBeweging = new QTableWidgetItem(QString("Verergert met beweging"), QTableWidgetItem::Type);
    QTableWidgetItem* andereKenmerken = new QTableWidgetItem(QString("Andere kenmerken"),QTableWidgetItem::Type);
    QTableWidgetItem* braakneigingen = new QTableWidgetItem(QString("Braakneigingen"), QTableWidgetItem::Type);
    QTableWidgetItem* braken = new QTableWidgetItem(QString("Braken/overgeven"),QTableWidgetItem::Type);
    QTableWidgetItem* overgevoeligLicht = new QTableWidgetItem(QString("Overgevoelig voor licht"),QTableWidgetItem::Type);
    QTableWidgetItem* overgevoeligGeluid = new QTableWidgetItem(QString("Overgevoelig voor geluid"), QTableWidgetItem::Type);
    QTableWidgetItem* stoornissenZicht = new QTableWidgetItem(QString("Stoornissen van het zicht"), QTableWidgetItem::Type);
    QTableWidgetItem* tintelingen = new QTableWidgetItem(QString("Tintelingen"),QTableWidgetItem::Type);
    QTableWidgetItem* doofGevoel = new QTableWidgetItem(QString("Doof gevoel"),QTableWidgetItem::Type);
    QTableWidgetItem* spraakstoornissen = new QTableWidgetItem(QString("Spraakstoornissen"),QTableWidgetItem::Type);
    QTableWidgetItem* maandstonden = new QTableWidgetItem(QString("Maandstonden"),QTableWidgetItem::Type);
    QTableWidgetItem* verminderingLevens = new QTableWidgetItem(QString("Vermin. Levensritme"),QTableWidgetItem::Type);
    QTableWidgetItem* voedingOfDrank = new QTableWidgetItem(QString("Voedingsstoffen/drank"),QTableWidgetItem::Type);
    QTableWidgetItem* stress = new QTableWidgetItem(QString("Stress"),QTableWidgetItem::Type);
    QTableWidgetItem* andereTriggers = new QTableWidgetItem(QString("Andere Triggers"),QTableWidgetItem::Type);
    QTableWidgetItem* geneesmiddel_1 = new QTableWidgetItem(QString("Eerste geneesmiddel"),QTableWidgetItem::Type);
    QTableWidgetItem* geneesmiddel_2 = new QTableWidgetItem(QString("Tweede geneesmiddel"),QTableWidgetItem::Type);
    QTableWidgetItem* geneesmiddel_3 = new QTableWidgetItem(QString("Derde geneesmidel"),QTableWidgetItem::Type);
    QTableWidgetItem* geneesmiddel_4 = new QTableWidgetItem(QString("Vierde geneesmiddel"),QTableWidgetItem::Type);
    QTableWidgetItem* tijdelijkOphoudenMetWerken = new QTableWidgetItem(QString("Tijd. oph. werken"),QTableWidgetItem::Type);
    QTableWidgetItem* verstoordFamLeven = new QTableWidgetItem(QString("Verstoord fam. leven"),QTableWidgetItem::Type);
    QTableWidgetItem* verstoordeVrijetijd = new QTableWidgetItem(QString("Verstoorde vrijetijdsbest."),QTableWidgetItem::Type);
    QTableWidgetItem* duurVanDeAanval = new QTableWidgetItem(QString("Aantal uren of dagen"),QTableWidgetItem::Type);


    // Apply column header texts
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(0, datum);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(1, ernst);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(2, enkelzijdig);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(3, kloppend);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(4, hindertDagAct);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(5, verergertMBeweging);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(6, andereKenmerken);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(7, braakneigingen);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(8, braken);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(9, overgevoeligLicht);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(10, overgevoeligGeluid);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(11, stoornissenZicht);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(12, tintelingen);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(13, doofGevoel);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(14, spraakstoornissen);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(15, maandstonden);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(16, verminderingLevens);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(17, voedingOfDrank);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(18, stress);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(19, andereTriggers);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(20, geneesmiddel_1);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(21, geneesmiddel_2);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(22, geneesmiddel_3);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(23, geneesmiddel_4);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(24, tijdelijkOphoudenMetWerken);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(25, verstoordFamLeven);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(26, verstoordeVrijetijd);
    ui->tableRecenteAanvallen->setHorizontalHeaderItem(27, duurVanDeAanval);


    // Set resize to make the columns fit their content
    for (int i = 0; i < 29; i++) {
    ui->tableRecenteAanvallen->resizeColumnToContents(i);
    }


    ui->tableRecenteAanvallen->setStyleSheet("QTableView {selection-background-color: rgb(666666);}");
    ui->tableRecenteAanvallen->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableRecenteAanvallen->verticalHeader()->setVisible(false);
    toonRecenteAanvallen();
}

RecenteHoofdpijnaanvallen::~RecenteHoofdpijnaanvallen()
{
    delete ui;
}

int RecenteHoofdpijnaanvallen::telRecenteAanvallen() const
{
    int hoofdpijnAanvallen = 0;
    // Open database file
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hoofdpijnen.sqlite3");
    if (db.open())
    {
        qDebug() << "Databestand hoofdpijnen.sqlite3 geopend.";
        QString command = "SELECT * FROM Hoofdpijnen";
        QSqlQuery query(db);
        if (query.exec(command)) {
            // put user data into form
            while (query.next())
            {
                hoofdpijnAanvallen++;
                // ui->tableRecenteAanvallen->setItem(1, 1, text);
            }
        }
        else
        {
            qDebug() << "Probleem bij openen gegevensbestand";
            exit(4);
        }
    }
    // db.close();
    // QSqlDatabase::removeDatabase( QSqlDatabase::defaultConnection );
    qDebug() << hoofdpijnAanvallen << " hoofdpijn aanvallen in het databestand";
    return hoofdpijnAanvallen;
}

void RecenteHoofdpijnaanvallen::toonRecenteAanvallen() const
{
    // Open database file
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hoofdpijnen.sqlite3");
    if (db.open())
    {
        qDebug() << "Databestand hoofdpijnen.sqlite3 geopend.";
        QString command = "SELECT * FROM Hoofdpijnen where gebruikers_id = 1 ORDER BY id DESC";
        QSqlQuery query(db);
        if (query.exec(command)) {
            // put user data into form
            // Add Header Titles

            int i = 0;
            while (query.next())
            {
                QString datum = query.value("datum").toString();
                QString ernst = query.value("ernst").toString();
                QString enkelzijdig = query.value("enkelzijdig").toString();
                if (enkelzijdig == "0")
                {
                    enkelzijdig = " ";
                }
                else
                {
                    enkelzijdig = "X";
                }
                QString kloppend = query.value("kloppend").toString();
                if (kloppend == "0")
                {
                    kloppend = " ";
                }
                else
                {
                    kloppend = "X";
                }
                QString hindertDagelijkseActiviteiten = query.value("hindertDagelijkseActiviteiten").toString();
                if (hindertDagelijkseActiviteiten == "0")
                {
                    hindertDagelijkseActiviteiten = " ";
                }
                else
                {
                    hindertDagelijkseActiviteiten = "X";
                }
                QString ergerBijBeweging = query.value("ergerBijBeweging").toString();
                if (ergerBijBeweging == "0")
                {
                    ergerBijBeweging = " ";
                }
                else
                {
                    ergerBijBeweging = "X";
                }
                QString andereKenmerken = query.value("andereKenmerken").toString();
                QString braakneigingen = query.value("braakneigingen").toString();
                if (braakneigingen == "0")
                {
                    braakneigingen = " ";
                }
                else
                {
                    braakneigingen = "X";
                }
                QString braken = query.value("braken").toString();
                if (braken == "0")
                {
                    braken = " ";
                }
                else
                {
                    braken = "X";
                }
                QString overgevoeligVoorLicht = query.value("overgevoeligVoorLicht").toString();
                if (overgevoeligVoorLicht == "0")
                {
                    overgevoeligVoorLicht = " ";
                }
                else
                {
                    overgevoeligVoorLicht = "X";
                }
                QString overgevoeligVoorGeluid = query.value("overgevoeligVoorGeluid").toString();
                if (overgevoeligVoorGeluid == "0")
                {
                    overgevoeligVoorGeluid = " ";
                }
                else
                {
                    overgevoeligVoorGeluid = "X";
                }
                QString stoornissenVanHetZicht = query.value("stoornissenVanHetZicht").toString();
                if (stoornissenVanHetZicht == "0")
                {
                    stoornissenVanHetZicht = " ";
                }
                else
                {
                    stoornissenVanHetZicht = "X";
                }
                QString tintelingen = query.value("tintelingen").toString();
                if (tintelingen == "0")
                {
                    tintelingen = " ";
                }
                else
                {
                    tintelingen = "X";
                }
                QString doofGevoel = query.value("doofGevoel").toString();
                if (doofGevoel == "0")
                {
                    doofGevoel = " ";
                }
                else
                {
                    doofGevoel = "X";
                }
                QString spraakstoornissen = query.value("spraakstoornissen").toString();
                if (spraakstoornissen == "0")
                {
                    spraakstoornissen = " ";
                }
                else
                {
                    spraakstoornissen = "X";
                }
                QString maandstonden = query.value("maandstonden").toString();
                if (maandstonden == "0")
                {
                    maandstonden = " ";
                }
                else
                {
                    maandstonden = "X";
                }
                QString verminderingVanLevensritme = query.value("verminderingVanLevensritme").toString();
                if (verminderingVanLevensritme == "0")
                {
                    verminderingVanLevensritme = " ";
                }
                else
                {
                    verminderingVanLevensritme = "X";
                }
                QString voedingsstoffenOfDrank = query.value("voedingsstoffenOfDrank").toString();
                if (voedingsstoffenOfDrank == "0")
                {
                    voedingsstoffenOfDrank = " ";
                }
                else
                {
                    voedingsstoffenOfDrank = "X";
                }
                QString stress = query.value("stress").toString();
                if (stress == "0")
                {
                    stress = " ";
                }
                else
                {
                    stress = "X";
                }
                QString andereTriggers = query.value("andereTriggers").toString();
                QString geneesmiddel_1 = query.value("geneesmiddel_1").toString();
                QString geneesmiddel_2 = query.value("geneesmiddel_2").toString();
                QString geneesmiddel_3 = query.value("geneesmiddel_3").toString();
                QString geneesmiddel_4 = query.value("geneesmiddel_4").toString();
                QString tijdelijkOphoudenMetWerken = query.value("tijdelijkOphoudenMetWerken").toString();
                if (tijdelijkOphoudenMetWerken == "0")
                {
                    tijdelijkOphoudenMetWerken = " ";
                }
                else
                {
                    tijdelijkOphoudenMetWerken = "X";
                }
                QString verstoordFamiliaalLeven = query.value("verstoordFamiliaalLeven").toString();
                if (verstoordFamiliaalLeven == "0")
                {
                    verstoordFamiliaalLeven = " ";
                }
                else
                {
                    verstoordFamiliaalLeven = "X";
                }
                QString verstoordeVrijetijdsbesteding = query.value("verstoordeVrijetijdsbesteding").toString();
                if (verstoordeVrijetijdsbesteding == "0")
                {
                    verstoordeVrijetijdsbesteding = " ";
                }
                else
                {
                    verstoordeVrijetijdsbesteding = "X";
                }
                QString duurVanDeAanval = query.value("duurVanDeAanval").toString();

                // qDebug()<<datum;
                QTableWidgetItem* Datum = new QTableWidgetItem(datum,QTableWidgetItem::Type);
                QTableWidgetItem* Ernst = new QTableWidgetItem(ernst,QTableWidgetItem::Type);
                QTableWidgetItem* Enkelzijdig = new QTableWidgetItem(enkelzijdig,QTableWidgetItem::Type);
                QTableWidgetItem* Kloppend = new QTableWidgetItem(kloppend,QTableWidgetItem::Type);
                QTableWidgetItem* HindertDagelijkseActiviteiten = new QTableWidgetItem(hindertDagelijkseActiviteiten,QTableWidgetItem::Type);
                QTableWidgetItem* ErgerBijBeweging = new QTableWidgetItem(ergerBijBeweging,QTableWidgetItem::Type);
                QTableWidgetItem* AndereKenmerken = new QTableWidgetItem(andereKenmerken,QTableWidgetItem::Type);
                QTableWidgetItem* Braakneigingen = new QTableWidgetItem(braakneigingen,QTableWidgetItem::Type);
                QTableWidgetItem* Braken = new QTableWidgetItem(braken, QTableWidgetItem::Type);
                QTableWidgetItem* OvergevoeligVoorLicht = new QTableWidgetItem(overgevoeligVoorLicht, QTableWidgetItem::Type);
                QTableWidgetItem* OvergevoeligVoorGeluid = new QTableWidgetItem(overgevoeligVoorGeluid, QTableWidgetItem::Type);
                QTableWidgetItem* StoornissenVanHetZicht = new QTableWidgetItem(stoornissenVanHetZicht, QTableWidgetItem::Type);
                QTableWidgetItem* Tintelingen = new QTableWidgetItem(tintelingen, QTableWidgetItem::Type);
                QTableWidgetItem* DoofGevoel = new QTableWidgetItem(doofGevoel, QTableWidgetItem::Type);
                QTableWidgetItem* Spraakstoornissen = new QTableWidgetItem(spraakstoornissen, QTableWidgetItem::Type);
                QTableWidgetItem* Maandstonden = new QTableWidgetItem(maandstonden,QTableWidgetItem::Type);
                QTableWidgetItem* VerminderingVanLevensritme = new QTableWidgetItem(verminderingVanLevensritme, QTableWidgetItem::Type);
                QTableWidgetItem* VoedingsstoffenOfDrank = new QTableWidgetItem(voedingsstoffenOfDrank, QTableWidgetItem::Type);
                QTableWidgetItem* Stress = new QTableWidgetItem(stress,QTableWidgetItem::Type);
                QTableWidgetItem* AndereTriggers = new QTableWidgetItem(andereTriggers, QTableWidgetItem::Type);
                QTableWidgetItem* Geneesmiddel_1 = new QTableWidgetItem(geneesmiddel_1, QTableWidgetItem::Type);
                QTableWidgetItem* Geneesmiddel_2 = new QTableWidgetItem(geneesmiddel_2, QTableWidgetItem::Type);
                QTableWidgetItem* Geneesmiddel_3 = new QTableWidgetItem(geneesmiddel_3, QTableWidgetItem::Type);
                QTableWidgetItem* Geneesmiddel_4 = new QTableWidgetItem(geneesmiddel_4, QTableWidgetItem::Type);
                QTableWidgetItem* TijdelijkOphoudenMetWerken = new QTableWidgetItem(tijdelijkOphoudenMetWerken, QTableWidgetItem::Type);
                QTableWidgetItem* VerstoordFamiliaalLeven = new QTableWidgetItem(verstoordFamiliaalLeven, QTableWidgetItem::Type);
                QTableWidgetItem* VerstoordeVrijetijd = new QTableWidgetItem(verstoordeVrijetijdsbesteding, QTableWidgetItem::Type);
                QTableWidgetItem* DuurVanDeAanval = new QTableWidgetItem(duurVanDeAanval, QTableWidgetItem::Type);
                ui->tableRecenteAanvallen->setItem(i, 0, Datum);
                ui->tableRecenteAanvallen->setItem(i, 1, Ernst);
                ui->tableRecenteAanvallen->setItem(i, 2, Enkelzijdig);
                ui->tableRecenteAanvallen->setItem(i, 3, Kloppend);
                ui->tableRecenteAanvallen->setItem(i, 4, HindertDagelijkseActiviteiten);
                ui->tableRecenteAanvallen->setItem(i, 5, ErgerBijBeweging);
                ui->tableRecenteAanvallen->setItem(i, 6, AndereKenmerken);
                ui->tableRecenteAanvallen->setItem(i, 7, Braakneigingen);
                ui->tableRecenteAanvallen->setItem(i, 8, Braken);
                ui->tableRecenteAanvallen->setItem(i, 9, OvergevoeligVoorLicht);
                ui->tableRecenteAanvallen->setItem(i, 10, OvergevoeligVoorGeluid);
                ui->tableRecenteAanvallen->setItem(i, 11, StoornissenVanHetZicht);
                ui->tableRecenteAanvallen->setItem(i ,12, Tintelingen);
                ui->tableRecenteAanvallen->setItem(i, 13, DoofGevoel);
                ui->tableRecenteAanvallen->setItem(i, 14, Spraakstoornissen);
                ui->tableRecenteAanvallen->setItem(i, 15, Maandstonden);
                ui->tableRecenteAanvallen->setItem(i, 16, VerminderingVanLevensritme);
                ui->tableRecenteAanvallen->setItem(i, 17, VoedingsstoffenOfDrank);
                ui->tableRecenteAanvallen->setItem(i, 18, Stress);
                ui->tableRecenteAanvallen->setItem(i, 19, AndereTriggers);
                ui->tableRecenteAanvallen->setItem(i, 20, Geneesmiddel_1);
                ui->tableRecenteAanvallen->setItem(i, 21, Geneesmiddel_2);
                ui->tableRecenteAanvallen->setItem(i, 22, Geneesmiddel_3);
                ui->tableRecenteAanvallen->setItem(i, 23, Geneesmiddel_4);
                ui->tableRecenteAanvallen->setItem(i, 24, TijdelijkOphoudenMetWerken);
                ui->tableRecenteAanvallen->setItem(i, 25, VerstoordFamiliaalLeven);
                ui->tableRecenteAanvallen->setItem(i, 26, VerstoordeVrijetijd);
                ui->tableRecenteAanvallen->setItem(i, 27, DuurVanDeAanval);

                i++;
            }
            qDebug() << "Hoofdpijnen weergegeven";
        }
        else
        {
            qDebug() << "Probleem bij openen gegevensbestand";
            exit(4);
        }
        // Set resize to make the columns fit their content
        for (int i = 0; i < 29; i++) {
        ui->tableRecenteAanvallen->resizeColumnToContents(i);
        }
    }
    // db.close();
    // QSqlDatabase::removeDatabase( QSqlDatabase::defaultConnection );
}
