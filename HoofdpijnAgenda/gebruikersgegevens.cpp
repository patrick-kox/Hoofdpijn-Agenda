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

#include "gebruikersgegevens.h"
#include "ui_gebruikersgegevens.h"

#include <QSqlDatabase>
#include <QSqlQuery>

GebruikersGegevens::GebruikersGegevens(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GebruikersGegevens)
{
    ui->setupUi(this);
    // Make the window-size fit it's content
    this->adjustSize();
    // Disable the resizing of the window
    this->layout()->setSizeConstraint(QLayout::SetFixedSize);
    leesGegevens();
}

GebruikersGegevens::~GebruikersGegevens()
{
    delete ui;
}

void GebruikersGegevens::leesGegevens() {
    // Open database file
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hoofdpijnen.sqlite3");
    if (db.open())
    {
        qDebug() << "Databestand hoofdpijnen.sqlite3 geopend.";
        QString command = "SELECT * FROM Gebruikers";
        QSqlQuery query(db);
        if (query.exec(command)) {
            // put user data into form
            while (query.next())
            {
                ui->inputVoornaam->setText(query.value("voornaam").toString());
                ui->inputAchternaam->setText(query.value("achternaam").toString());
                ui->inputGeslacht->setText(query.value("geslacht").toString());
                ui->inputStraat->setText(query.value("straat").toString());
                ui->inputNummer->setText(query.value("huisnummer").toString());
                ui->inputGemeente->setText(query.value("gemeente").toString());
                ui->inputPostcode->setText(query.value("postcode").toString());
                ui->inputLeeftijd->setText(query.value("leeftijd").toString());
            }
        }
        else
        {
            // fields are blank
        }
    }
    else
    {
        qDebug() << tr("Fout bij openen van databestand!");
        exit(1);
    }
    // db.close();
    // QSqlDatabase::removeDatabase( QSqlDatabase::defaultConnection );
}


void GebruikersGegevens::on_buttonBox_accepted()
{
   // Read the values of the inputFields (lineInput) into SQtring variables,
   // we will use these to add/update the information in the SQLite database file.
   QString voornaam = ui->inputVoornaam->text();
   QString achternaam = ui->inputAchternaam->text();
   QString geslacht = ui->inputGeslacht->text();
   QString straat = ui->inputStraat->text();
   QString huisnummer = ui->inputNummer->text();
   QString gemeente = ui->inputGemeente->text();
   QString postcode = ui->inputPostcode->text();
   QString leeftijd = ui->inputLeeftijd->text();
   int gebruikers = 0;

   // Open database file
   QSqlDatabase gebruikers_db = QSqlDatabase::addDatabase("QSQLITE");
   gebruikers_db.setDatabaseName("Hoofdpijnen.sqlite3");
   if (gebruikers_db.open())
   {
        QString command = "SELECT * FROM Gebruikers";
        QSqlQuery query(gebruikers_db);
        if (!query.exec(command)) {
            qDebug() << tr("Fout bij lezen gegevensbestand");
            gebruikers_db.close();
            exit(3);
        }
        else
        {
            gebruikers = 0;
            // Count the number of rows in the database file, if it is less than 1 (so zero)
            // there is no user information in the database file, so we use the INSERT INTO SQL command
            // to add the user.
            // Else, there is 1 row (unless there is a bug somewhere in the program) in the database
            // so we update the information using the UPDATE SQL command.
            while(query.next())
            {
                gebruikers++;
            }
            if (gebruikers < 1) {
                command = "INSERT INTO Gebruikers (voornaam, achternaam, geslacht, straat, huisnummer, postcode, gemeente, leeftijd)VALUES('"+ voornaam+ "','"+achternaam+"','"+geslacht+"','"+straat+"', '"+huisnummer+"', '"+postcode+"', '"+gemeente+"', '"+leeftijd+"');";
                qDebug() << tr("Gebruiker invoegen in databestand");
                // Print the command used to add the user for debugging
                // qDebug() << "commando: " << command;
                query.exec(command);
            }
            else {
                command = "UPDATE Gebruikers SET (voornaam, achternaam, geslacht, straat, huisnummer, postcode, gemeente, leeftijd)=('"+ voornaam+ "','"+achternaam+"','"+geslacht+"','"+straat+"', '"+huisnummer+"', '"+postcode+"', '"+gemeente+"', '"+leeftijd+"') WHERE id = 1;";
                qDebug() << tr("Gebruiker gegevens aangepast in databastand");
                // Print the command used to update the user for debugging
                // qDebug() << "commando: " << command;
                query.exec(command);
            }

        }
   }
   // gebruikers_db.close();
   // QSqlDatabase::removeDatabase( QSqlDatabase::defaultConnection );
}

