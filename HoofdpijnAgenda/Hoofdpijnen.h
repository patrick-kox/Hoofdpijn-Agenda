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

    // Constructors
    Hoofdpijnen();
    Hoofdpijnen(int ernst, char enkelzijdig, bool kloppend, bool hindertDagelijkseActiviteiten, bool ergerBijBeweging, QString andereKenmerken,
                bool braakneigingen, bool braken, bool overgevoeligVoorLicht, bool overgevoeligVoorGeluid,
                char stoornissenVanHetZicht, char tintelingen, char doofGevoel, bool spraakstoornissen,
                bool maandstonden, bool verminderingVanLevensritme, bool voedingsstoffenOfDrank, bool stress, QString andereTriggers,
                QString geneesmiddel_1, QString geneesmiddel_2, QString geneesmiddel_3, QString geneesmiddel_4,
                int tijdelijkOphoudenMetWerken, bool verstoordFamiliaalLeven, bool verstoordeVrijetijdsbesteding,
                int duurVanDeAanval, QDate datum);

    // Getters
    int getErnst() const;
    char getEnkelzijdig() const;
    bool getKloppend() const;
    bool getHindertDagelijkseActiviteiten() const;
    bool getErgerBijBeweging() const;
    QString getAndereKenmerken() const;
    bool getBraakneigingen() const;
    bool getBraken() const;
    bool getOvergevoeligVoorLicht() const;
    bool getOvergevoeligVoorGeluid() const;
    char getStoornissenVanHetZicht() const;
    char getTintelingen() const;
    char getDoofGevoel() const;
    bool getSpraakstoornissen() const;
    bool getMaandstonden() const;
    bool getVerminderingVanLevensritme() const;
    bool getVoedingsstoffenOfDrank() const;
    bool getStress() const;
    QString getAndereTriggers() const;
    QString getGeneesmiddel_1() const;
    QString getGeneesmiddel_2() const;
    QString getGeneesmiddel_3() const;
    QString getGeneesmiddel_4() const;
    int getTijdelijkOphoudenMetWerken() const;
    bool getVerstoordFamiliaalLeven() const;
    bool getVerstoordeVrijetijdsbesteding() const;
    int getDuurVanDeAanval() const;
    QDate getDatum() const;

    // Setter
    void setErnst(int);
    void setEnkelzijdig(char);
    void setKloppend(bool);
    void setHindertDagelijkseActiviteiten(bool);
    void setErgerBijBeweging(bool);
    void setAndereKenmerken(QString);
    void setBraakneigingen(bool);
    void setBraken(bool);
    void setOvergevoeligVoorLicht(bool);
    void setOvergevoeligVoorGeluid(bool);
    void setStoornissenVanHetZicht(char);
    void setTintelingen(char);
    void setDoofGevoel(char);
    void setSpraakstoornissen(bool);
    void setMaandstonden(bool);
    void setVerminderingVanLevensritme(bool);
    void setVoedingsstoffenOfDrank(bool);
    void setStress(bool);
    void setAndereTriggers(QString);
    void setGeneesmiddel_1(QString);
    void setGeneesmiddel_2(QString);
    void setGeneesmiddel_3(QString);
    void setGeneesmiddel_4(QString);
    void setTijdelijkOphoudenMetWerken(int);
    void setVerstoordFamiliaalLeven(int);
    void setVerstoordeVrijetijdsbesteding(bool);
    void setDuurVanDeAanval(int);
    void setDatum(QDate);

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
    bool verstoordeVrijeTijdsbesteding;

    // Duur van de aanval (duration of the attack).
    int duurVanDeAanval;

    // Datum (date)
    QDate datum;
};

#endif // HOOFDPIJNEN_H
