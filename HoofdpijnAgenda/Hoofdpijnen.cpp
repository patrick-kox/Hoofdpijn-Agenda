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

#include "Hoofdpijnen.h"

Hoofdpijnen::Hoofdpijnen()
{
}


Hoofdpijnen::Hoofdpijnen (int ernst, char enkelzijdig, bool kloppend, bool hindertDagelijkseActiviteiten, bool ergerBijBeweging, QString andereKenmerken,
            bool braakneigingen, bool braken, bool overgevoeligVoorLicht, bool overgevoeligVoorGeluid,
            char stoornissenVanHetZicht, char tintelingen, char doofGevoel, bool spraakstoornissen,
            bool maandstonden, bool verminderingVanLevensritme, bool voedingsstoffenOfDrank, bool stress, QString andereTriggers,
            QString geneesmiddel_1, QString geneesmiddel_2, QString geneesmiddel_3, QString geneesmiddel_4,
            int tijdelijkOphoudenMetWerken, bool verstoordFamiliaalLeven, bool verstoordeVrijetijdsbesteding,
                          int duurVanDeAanval, QDate datum)
{
    this->ernst = ernst;
    this->enkelzijdig = enkelzijdig;
    this->kloppend = kloppend;
    this->hindertDagelijkseActiviteiten = hindertDagelijkseActiviteiten;
    this->ergerBijBeweging = ergerBijBeweging;
    this->andereKenmerken = andereKenmerken;
    this->braakneigingen = braakneigingen;
    this->braken = braken;
    this->overgevoeligVoorLicht = overgevoeligVoorLicht;
    this->overgevoeligVoorGeluid = overgevoeligVoorGeluid;
    this->stoornissenVanHetZicht = stoornissenVanHetZicht;
    this->tintelingen = tintelingen;
    this->doofGevoel = doofGevoel;
    this->spraakstoornissen = spraakstoornissen;
    this->maandstonden = maandstonden;
    this->verminderingVanLevensritme = verminderingVanLevensritme;
    this->voedingsstoffenOfDrank = voedingsstoffenOfDrank;
    this->stress = stress;
    this->andereTriggers = andereTriggers;
    this->geneesmiddel_1 = geneesmiddel_1;
    this->geneesmiddel_2 = geneesmiddel_2;
    this->geneesmiddel_3 = geneesmiddel_3;
    this->geneesmiddel_4 = geneesmiddel_4;
    this->tijdelijkOphoudenMetWerken = tijdelijkOphoudenMetWerken;
    this->verstoordFamiliaalLeven = verstoordFamiliaalLeven;
    this->versootdeVrijeTijdsbesteding = verstoordeVrijetijdsbesteding;
    this->duurVanDeAanval = duurVanDeAanval;
    this->datum = datum;
}
// Getters
int Hoofdpijnen::getErnst() const {

}

char Hoofdpijnen::getEnkelzijdig() const {

}
bool Hoofdpijnen::getKloppend() const {

}
bool Hoofdpijnen::getHindertDagelijkseActiviteiten() const {

}
bool Hoofdpijnen::getErgerBijBeweging() const {

}
QString Hoofdpijnen::getAndereKenmerken() const {

}
bool Hoofdpijnen::getBraakneigingen() const {

}
bool Hoofdpijnen::getBraken() const {

}
bool Hoofdpijnen::getOvergevoeligVoorLicht() const {

}
bool Hoofdpijnen::getOvergevoeligVoorGeluid() const {

}
char Hoofdpijnen::getStoornissenVanHetZicht() const {

}
char Hoofdpijnen::getTintelingen() const {

}
char Hoofdpijnen::getDoofGevoel() const {

}
bool Hoofdpijnen::getSpraakstoornissen() const {

}
bool Hoofdpijnen::getMaandstonden() const {

}
bool Hoofdpijnen::getVerminderingVanLevensritme() const {

}
bool Hoofdpijnen::getVoedingsstoffenOfDrank() const {

}
bool Hoofdpijnen::getStress() const {

}
QString Hoofdpijnen::getAndereTriggers() const {

}
QString Hoofdpijnen::getGeneesmiddel_1() const {

}
QString Hoofdpijnen::getGeneesmiddel_2() const {

}
QString Hoofdpijnen::getGeneesmiddel_3() const {

}
QString Hoofdpijnen::getGeneesmiddel_4() const {

}
int Hoofdpijnen::getTijdelijkOphoudenMetWerken() const {

}
bool Hoofdpijnen::getVerstoordFamiliaalLeven() const {

}
bool Hoofdpijnen::getVerstoordeVrijetijdsbesteding() const {

}
int Hoofdpijnen::getDuurVanDeAanval() const {

}
QDate Hoofdpijnen::getDatum() const {

}

// Setter
void Hoofdpijnen::setErnst(int) {

}
void Hoofdpijnen:: setEnkelzijdig(char) {

}
void Hoofdpijnen::setKloppend(bool) {

}
void Hoofdpijnen::setHindertDagelijkseActiviteiten(bool) {

}
void Hoofdpijnen::setErgerBijBeweging(bool) {

}
void Hoofdpijnen::setAndereKenmerken(QString) {

}
void Hoofdpijnen::setBraakneigingen(bool) {

}
void Hoofdpijnen::setBraken(bool) {

}
void Hoofdpijnen::setOvergevoeligVoorLicht(bool) {

}
void Hoofdpijnen::setOvergevoeligVoorGeluid(bool) {

}
void Hoofdpijnen::setStoornissenVanHetZicht(char) {

}
void Hoofdpijnen::setTintelingen(char) {

}
void Hoofdpijnen::setDoofGevoel(char) {

}
void Hoofdpijnen::setSpraakstoornissen(bool) {

}
void Hoofdpijnen::setMaandstonden(bool) {

}
void Hoofdpijnen::setVerminderingVanLevensritme(bool) {

}
void Hoofdpijnen::setVoedingsstoffenOfDrank(bool) {

}
void Hoofdpijnen::setStress(bool) {

}
void Hoofdpijnen:: setAndereTriggers(QString) {

}
void Hoofdpijnen::setGeneesmiddel_1(QString) {

}
void Hoofdpijnen::setGeneesmiddel_2(QString) {

}
void Hoofdpijnen::setGeneesmiddel_3(QString) {

}
void Hoofdpijnen::setGeneesmiddel_4(QString) {

}
void Hoofdpijnen::setTijdelijkOphoudenMetWerken(int) {

}
void Hoofdpijnen::setVerstoordFamiliaalLeven(int) {

}
void Hoofdpijnen::setVerstoordeVrijetijdsbesteding(bool) {

}
void Hoofdpijnen::setDuurVanDeAanval(int) {

}
void Hoofdpijnen::setDatum(QDate) {

}
