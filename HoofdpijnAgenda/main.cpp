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
along with Hoofdpijn Agenda. If not, see <https://www.gnu.org/licenses/>.
*/

/*
©Copyright 2021 Patrick Kox
*/

#include "mainwindow.h"
#include "Hoofdpijnen.h"
#include "initializeDB.h"
#include "gebruikersgegevens.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <QVector>

// SQL
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>

// Debugging
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "HoofdpijnAgenda_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    // Open database file
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hoofdpijnen.sqlite3");
    if (db.open())
    {
        qDebug() << "Databestand hoofdpijnen.sqlite3 geopend.";
        QString command = "SELECT * FROM Gebruikers";
        QSqlQuery query(db);
        if (!query.exec(command))
        {
            qDebug() << "Gegevensbestand wordt aangemaakt.";
           initializeDB(db);
           query.clear();
           db.close();
        }
        else
        {
            query.clear();
            db.close();
        }
    }
    else
    {
        qDebug() << "Fout bij openen van databestand!";
        exit(1);
    }
    QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection);
    MainWindow w;
    w.show();
    return a.exec();
}
