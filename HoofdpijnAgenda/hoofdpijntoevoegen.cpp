/*
This file is part of Hoofdpijn Agenda.

Hoofdpijn Agenda is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Hoofdpijn Agenda is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Hoofdpijn Agenda.  If not, see <https://www.gnu.org/licenses/>.
*/

/*
©Copyright 2021 Patrick Kox
*/

#include "hoofdpijntoevoegen.h"
#include "ui_hoofdpijntoevoegen.h"

#include <QSqlDatabase>
#include <QtSql>
#include <QSqlQuery>
#include <QDateTime>

HoofdpijnToevoegen::HoofdpijnToevoegen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HoofdpijnToevoegen)
{
    ui->setupUi(this);
    // Resize the window to fit it's content
    this->adjustSize();
    // Disable the resizing of this window
    this->layout()->setSizeConstraint(QLayout::SetFixedSize);
    QDateTimeEdit *dateEdit = new QDateTimeEdit(QDate::currentDate());
    this->ui->dateDatumVanDeAanval->setDate(dateEdit->date());
}

HoofdpijnToevoegen::~HoofdpijnToevoegen()
{
    delete ui;
}

void HoofdpijnToevoegen::on_buttonBox_accepted()
{
    // Ernst van de Hoofdpijn
   int ernst = ui->spnbxErnstVanDeHoofdpijn->value();

   // Kenmerken van de hoofdpijn
   bool aanEenZijde = ui->chkAanEenZijde->checkState();
   bool kloppendeHoofdpijn = ui->chkKloppendeHoofdpijn->checkState();
   bool hindertDeDagelijkseActiviteit = ui->chkHindertDagelijkseActiviteiten->checkState();
   bool verergertMetBeweging = ui->chkVerergertMetBeweging->checkState();
   QString andereKenmerken = ui->inputAndereKenmerken->text();

   // Symptomen die de hoofdpijn begeleiden
   bool braakneigingen = ui->chkBraakneigingen->checkState();
   bool brakenOvergeven = ui->chkBrakenOvergeven->checkState();
   bool overgevoeligVoorLicht = ui->chkOvergevoeligVoorLicht->checkState();
   bool overgevoeligVoorGeluid = ui->chkOvergevoeligVoorGeluid->checkState();

   // Klachten bij het BEGIN van de aanval
   bool stoornissenVanHetZicht = ui->chkStoornissenVanHetZicht->checkState();
   bool tintelingen = ui->chkTintelingen->checkState();
   bool doofGevoel = ui->chkDoofGevoel->checkState();
   bool spraakstoornissen = ui->chkSpraakstoornissen->checkState();

   // Uitlokkende factoren
   bool maandstonden = ui->chkMaandstonden->checkState();
   bool verminderingVanLevensritme = ui->chkVerminderingVanLevensritme->checkState();
   bool voedingsstoffenOfDrank = ui->chkVoedingsstoffenOfDrank->checkState();
   bool stress = ui->chkStress->checkState();
   QString andereTriggers = ui->inputAndereTriggers->text();

   // Ingenomen medicatie
   QString geneesmiddel_1 = ui->inputGeneesmiddel1->text();
   QString geneesmiddel_2 = ui->inputGeneesmiddel2->text();
   QString geneesmiddel_3 = ui->inputGeneesmiddel3->text();
   QString geneesmiddel_4 = ui->inputGeneesmiddel4->text();

   // Invloed op de activiteiten
   int tijdelijkOphoudenMetWerken = ui->spnTijdelijkOphoudenMetWerken->value();
   bool verstoordFamiliaalLeven = ui->chkVerstoordFamiliaalLeven->checkState();
   bool verstoordeVrijetijdsactiviteiten = ui->chkVerstoordeVrijetijdsactiviteiten->checkState();

   // Duur van de aanval
   QString duurVanDeAanval = ui->inputDuurVanDeAanval->text();
   QDate datumVanDeAanval = ui->dateDatumVanDeAanval->date();

   // qDebug output (to shut-up the "unused variable error messages during design"
   qDebug() << "Ernst van de hoofdpijn is ingesteld op: " << ernst;
   qDebug() << " ";
   qDebug() << "Eenzijdig is: " << aanEenZijde;
   qDebug() << "Is de hoofdpijn kloppende: " << kloppendeHoofdpijn;
   qDebug() << "Hindert de hoofdpijn de dagelijkse activiteiten: " << hindertDeDagelijkseActiviteit;
   qDebug() << "Verergert de hoofdpijn met beweging: " << verergertMetBeweging;
   qDebug() << "Zijn er andere kenmerken: " << andereKenmerken;
   qDebug() << " ";
   qDebug() << "Braakneigingen: " << braakneigingen;
   qDebug() << "Braken / overgeven: " << brakenOvergeven;
   qDebug() << "Overgevoelig voor Licht: " << overgevoeligVoorLicht;
   qDebug() << "Overgevoelig voor Geluid: " << overgevoeligVoorGeluid;
   qDebug() << "";
   qDebug() << "Stoornissen van het zicht:" << stoornissenVanHetZicht;
   qDebug() << "Tintelingen: " << tintelingen;
   qDebug() << "doof gevoel: " << doofGevoel;
   qDebug() << "spraakstoornissen: " << spraakstoornissen;
   qDebug() << "";
   qDebug() << "maandstonden: " << maandstonden;
   qDebug() << "vermindering van levensritme: " << verminderingVanLevensritme;
   qDebug() << "voedingsstoffen of drank: " << voedingsstoffenOfDrank;
   qDebug() << "stress: " << stress;
   qDebug() << "andere triggers: " << andereTriggers;
   qDebug() << " ";
   qDebug() << "Ingenomen medicatie:";
   qDebug() << geneesmiddel_1;
   qDebug() << geneesmiddel_2;
   qDebug() << geneesmiddel_3;
   qDebug() << geneesmiddel_4;
   qDebug() << " ";
   qDebug() << "Tijdelijk ophouden met werken: " << tijdelijkOphoudenMetWerken;
   qDebug() << "Verstoord familiaal leven: " << verstoordFamiliaalLeven;
   qDebug() << "Verstoorde vrijetijdsactiviteiten: " << verstoordeVrijetijdsactiviteiten;
   qDebug() << " ";
   qDebug() << "Duur van de Aanval: " << duurVanDeAanval;
   qDebug() << "Datum van de Aanval: " << datumVanDeAanval;

   // Open database file and add the headache
   QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
   db.setDatabaseName("Hoofdpijnen.sqlite3");
   if (db.open())
   {
       qDebug() << "Databestand hoofdpijnen.sqlite3 geopend.";
       QString command = "SELECT * FROM Gebruikers";
       QSqlQuery query(db);
       if (!query.exec(command))
       {
           qDebug() << "Hoofdpijn wordt toegevoegd";

           query.prepare("INSERT INTO Gebruikers (gebruikers_id, ernst, enkelzijdig, kloppend, hindertDagelijkseActiviteiten, ergerBijBeweging, andereKenmerken, braakneigingen, braken, overgevoeligVoorLicht, overgevoeligVoorGeluid, stoornissenVanHetZicht, tintelingen, doofGevoel, spraakstoornissen, maandstonden, verminderingVanLevensritme, voedingsstoffenOfDrank, stress, andereTriggers, geneesmiddel_1, geneesmiddel_2, geneesmiddel_3, geneesmiddel_4, tijdelijkOphoudenMetWerken, verstoordFamiliaalLeven, verstoordeVrijetijdsbesteding, duurVanDeAanval, datum)"
               "values(:gebruikers_id,:ernst,:enkelzijdig,:kloppend, :hindertDagelijkseActiviteiten, :ergerBijBeweging, :andereKenmerken, :braakneigingen, :braken, :overgevoeligVoorLicht, :overgevoeligVoorGeluid, :stoornissenVanHetZicht, :tintelingen, :doofGevoel, :spraakstoornissen, :maandstonden, :verminderingVanLevensritme, :voedingsstoffenOfDrank, :stress, :andereTriggers, :geneesmiddel_1, :geneesmiddel_2, :geneesmiddel_3, :geneesmiddel_4, :tijdelijkOphoudenMetWerken, :verstoordFamiliaalLeven, :verstoordeVrijetijdsbesteding, :duurVanDeAanval, :datum)");
               query.bindValue(":gebruikers_id",1);
               query.bindValue(":ernst",ernst);
               query.bindValue(":kloppend", kloppendeHoofdpijn);
               query.bindValue(":hindertDagelijkseActiviteiten", hindertDeDagelijkseActiviteit);

       }
   }
   else
   {
       qDebug() << "Fout bij openen van databestand!";
       db.close();
       exit(1);
   }
}

