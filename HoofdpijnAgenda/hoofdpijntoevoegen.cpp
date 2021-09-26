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
#include <QMessageBox>

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

   // Open database file and add the headache
   QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
   db.setDatabaseName("Hoofdpijnen.sqlite3");
       db.open();
       QSqlQuery sql;
       if(db.isValid()) {
           if(db.tables().isEmpty()) {
           qDebug() << tr("Databestand beschadigd!");
           exit(3);
       }
           sql.prepare("INSERT INTO Hoofdpijnen (gebruikers_id, ernst, enkelzijdig, kloppend, hindertDagelijkseActiviteiten, ergerBijBeweging, andereKenmerken, braakneigingen, braken, "
                                    "overgevoeligVoorLicht, overgevoeligVoorGeluid, stoornissenVanHetZicht, tintelingen, doofGevoel, spraakstoornissen, maandstonden, verminderingVanLevensritme, "
                                    "voedingsstoffenOfDrank, stress, andereTriggers, geneesmiddel_1, geneesmiddel_2, geneesmiddel_3, geneesmiddel_4, tijdelijkOphoudenMetWerken, verstoordFamiliaalLeven, "
                                    "verstoordeVrijetijdsbesteding, duurVanDeAanval, datum)"
                          "values(:gebruikers_id,:ernst,:enkelzijdig,:kloppend, :hindertDagelijkseActiviteiten, :ergerBijBeweging, :andereKenmerken, :braakneigingen, :braken, :overgevoeligVoorLicht, "
                                    ":overgevoeligVoorGeluid, :stoornissenVanHetZicht, :tintelingen, :doofGevoel, :spraakstoornissen, :maandstonden, :verminderingVanLevensritme, :voedingsstoffenOfDrank, :stress, "
                                    ":andereTriggers, :geneesmiddel_1, :geneesmiddel_2, :geneesmiddel_3, :geneesmiddel_4, :tijdelijkOphoudenMetWerken, :verstoordFamiliaalLeven, :verstoordeVrijetijdsbesteding, "
                                    ":duurVanDeAanval, :datum)");
                          sql.bindValue(":gebruikers_id",1);
                          sql.bindValue(":ernst",ernst);
                          sql.bindValue(":enkelzijdig", aanEenZijde);
                          sql.bindValue(":kloppend", kloppendeHoofdpijn);
                          sql.bindValue(":hindertDagelijkseActiviteiten", hindertDeDagelijkseActiviteit);
                          sql.bindValue(":ergerBijBeweging", verergertMetBeweging);
                          sql.bindValue(":andereKenmerken", andereKenmerken);
                          sql.bindValue(":braakneigingen", braakneigingen);
                          sql.bindValue(":braken",brakenOvergeven);
                          sql.bindValue(":overgevoeligVoorLicht", overgevoeligVoorLicht);
                          sql.bindValue(":overgevoeligVoorGeluid", overgevoeligVoorGeluid);
                          sql.bindValue(":stoornissenVanHetZicht", stoornissenVanHetZicht);
                          sql.bindValue(":tintelingen", tintelingen);
                          sql.bindValue(":doofGevoel",doofGevoel);
                          sql.bindValue(":spraakstoornissen", spraakstoornissen);
                          sql.bindValue(":maandstonden", maandstonden);
                          sql.bindValue(":verminderingVanLevensritme", verminderingVanLevensritme);
                          sql.bindValue(":voedingsstoffenOfDrank", voedingsstoffenOfDrank);
                          sql.bindValue(":stress", stress);
                          sql.bindValue(":andereTriggers", andereTriggers);
                          sql.bindValue(":geneesmiddel_1", geneesmiddel_1);
                          sql.bindValue(":geneesmiddel_2", geneesmiddel_2);
                          sql.bindValue(":geneesmiddel_3", geneesmiddel_3);
                          sql.bindValue(":geneesmiddel_4", geneesmiddel_4);
                          sql.bindValue(":tijdelijkOphoudenMetWerken", tijdelijkOphoudenMetWerken);
                          sql.bindValue(":verstoordFamiliaalLeven", verstoordFamiliaalLeven);
                          sql.bindValue(":verstoordeVrijetijdsbesteding", verstoordeVrijetijdsactiviteiten);
                          sql.bindValue(":duurVanDeAanval", duurVanDeAanval);
                          sql.bindValue(":datum", datumVanDeAanval);

                          if(sql.exec()){
                              QMessageBox msgBox;
                              msgBox.setText(tr("De hoofdpijnaanval is opgeslagen."));
                              msgBox.exec();
                          }
                          else {
                              qDebug() << tr("Er is een fout opgetreden bij het opslaan van de Hoofdpijnaanval");
                              exit(3);
                          }
       }
       else
       {
           qDebug() << tr("Kan gegevensbestand niet openen!");
           exit(3);
       }
}

