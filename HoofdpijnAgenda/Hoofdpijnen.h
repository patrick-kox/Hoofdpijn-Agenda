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

#ifndef HOOFDPIJNEN_H
#define HOOFDPIJNEN_H

#include <QDate>
#include <QString>

class Hoofdpijnen
{

public:
    Hoofdpijnen();

private:
    // Ernst van de Hoofdpijn (Severity of of the Headache)
    int ernst;

    // Kenmerken van de Hoofdpijn (Characteristics of the Headache)
    char enkelzijdig;
    bool kloppend;
    bool hindertDagelijkseActiviteiten;
    bool ergerBijBeweging;
    QString andereKenmerken;

    // Symptomen die de hoofdpijn begeleiden (Symptoms that accompany the Headache)
    bool braakneigingen;
    bool braken;
    bool overgevoeligVoorLicht;
    bool overgevoeligVoorGeluid;

    // Klachten bij het BEGIN van de aanval (Complaints at the START of the attack)
    char stoornissenVanHetZicht;
    char tintelingen;
    char doofGevoel;
    bool spraakstoornissen;

    // Uitlokkende factoren (Triggers)
    bool maandstonden;
    bool verminderingVanLevensritme;
    bool voedingsstoffenOfDrank;
    bool stress;
    QString andereTriggers;

    // Ingenomen medicatie (naam, aantal, eenheden, toegediende vorm)
    // Medication taken (name, amount, unit, format)
    QString geneesmiddel_1;
    QString geneesmiddel_2;
    QString geneesmiddel_3;
    QString geneesmiddel_4;

    // Invloed op de activiteiten (Influence of activities)
    int tijdelijkOphoudenMetWerken;		// aantal dagen
    bool verstoordFamiliaalLeven;
    bool versootdeVrijeTijdsbesteding;

    // Duur van de aanval (duration of the attack).
    int duurVanDeAanval;

    // Datum (date)
    QDate datum;
};

#endif // HOOFDPIJNEN_H
