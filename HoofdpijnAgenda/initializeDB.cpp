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

#include "initializeDB.h"
#include "gebruikersgegevens.h"

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>



void initializeDB(QSqlDatabase db) {
    // SQL command to clear the Database Tables if they exist:
    // "DROP TABLE IF EXISTS Hoofdpijnen;"

    // SQL command to rebuild the Database Tables
    // "CREATE TABLE Gebruikers(id INTEGER PRIMARY KEY AUTOINCREMENT, voornaam TEXT, achternaam TEXT, ... "
    // "CREATE TABLE Hoofdpijnen(id INTEGER PRIMARY KEY AUTOINCREMENT, gebruikers_id INT REFERENCE Gebruikers id, ernst INT, ... "

        // Delete the database table with the users (if it exists).
        QString command = "DROP TABLE IF EXISTS Gebruikers;";
        QSqlQuery query(db);
        if (query.exec(command))
        {
            qDebug() << "Gebruikers tabel verwijderd";
        }
        else
        {
            qDebug() << "Fout bij verwijderen Gebruikers tabel!";
            db.close();
            exit(2);
        }

        // Delete the database table with the Headaches (if it exists).
        command = "DROP TABLE IF EXISTS Hoofdpijnen;";
        if (query.exec(command)) {
            qDebug() << "Hoofdpijnen tabel verwijderd";
        }
        else
        {
            qDebug() << "Fout bij verwijderen Hoofdpijnen tabel!";
            db.close();
            exit(2);
        }

        // Rebuild the users database table
        command = "CREATE TABLE Gebruikers(id INTEGER PRIMARY KEY AUTOINCREMENT, voornaam TEXT, achternaam TEXT, geslacht TEXT, straat TEXT, huisnummer TEXT, postcode TEXT, gemeente TEXT, leeftijd INTEGER);";
        if (query.exec(command)) {
            qDebug() << "Gebruikers tabel aangemaakt";
        }
        else
        {
            qDebug() << "Fout bij aanmaken Gebruikers tabel!";
            db.close();
            exit(3);
        }

        // Rebuild the Headaches database table
        command = "CREATE TABLE Hoofdpijnen(id INTEGER PRIMARY KEY AUTOINCREMENT, gebruikers_id INT REFERENCE Gebruikers id, ernst INT, enkelzijdig TEXT, kloppend TEXT, hindertDagelijkseActiviteiten TEXT,"
                  "ergerBijBeweging TEXT, andereKenmerken TEXT, braakneigingen TEXT, braken TEXT, overgevoeligVoorLicht TEXT, overgevoeligVoorGeluid TEXT, stoornissenVanHetZicht TEXT, tintelingen TEXT, "
                  "doofGevoel TEXT, spraakstoornissen TEXT, maandstonden TEXT, verminderingVanLevensritme TEXT, voedingsstoffenOfDrank TEXT, stress TEXT, andereTriggers TEXT, "
                  "geneesmiddel_1 TEXT, geneesmiddel_2 TEXT, geneesmiddel_3 TEXT, geneesmiddel_4 TEXT, tijdelijkOphoudenMetWerken INTEGER, verstoordFamiliaalLeven TEXT, verstoordeVrijetijdsbesteding TEXT, "
                  "duurVanDeAanval INTEGER, datum TEXT);";
        if (query.exec(command)) {
            qDebug() << "Hoofdpijnen tabel aangemaakt";
        }
        else
        {
            qDebug() << "Fout bij aanmaken Hoofdpijnen tabel!";
            db.close();
            exit(3);
        }

    // gebruiker toevoegen
    GebruikersGegevens *data = new GebruikersGegevens;
    qDebug() << "Toon gebruikersgegevens";
    data->show();
}
