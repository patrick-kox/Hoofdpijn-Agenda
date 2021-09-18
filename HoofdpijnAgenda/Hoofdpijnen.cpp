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
    this->verstoordeVrijeTijdsbesteding = verstoordeVrijetijdsbesteding;
    this->duurVanDeAanval = duurVanDeAanval;
    this->datum = datum;
}
// Getters
int Hoofdpijnen::getErnst() const {
    return ernst;
}

char Hoofdpijnen::getEnkelzijdig() const {
    return enkelzijdig;
}
bool Hoofdpijnen::getKloppend() const {
    return kloppend;
}
bool Hoofdpijnen::getHindertDagelijkseActiviteiten() const {
    return hindertDagelijkseActiviteiten;
}
bool Hoofdpijnen::getErgerBijBeweging() const {
    return ergerBijBeweging;
}
QString Hoofdpijnen::getAndereKenmerken() const {
    return andereKenmerken;
}
bool Hoofdpijnen::getBraakneigingen() const {
    return braakneigingen;
}
bool Hoofdpijnen::getBraken() const {
    return braken;
}
bool Hoofdpijnen::getOvergevoeligVoorLicht() const {
    return overgevoeligVoorLicht;
}
bool Hoofdpijnen::getOvergevoeligVoorGeluid() const {
    return overgevoeligVoorGeluid;
}
char Hoofdpijnen::getStoornissenVanHetZicht() const {
    return stoornissenVanHetZicht;
}
char Hoofdpijnen::getTintelingen() const {
    return tintelingen;
}
char Hoofdpijnen::getDoofGevoel() const {
    return doofGevoel;
}
bool Hoofdpijnen::getSpraakstoornissen() const {
    return spraakstoornissen;
}
bool Hoofdpijnen::getMaandstonden() const {
    return maandstonden;
}
bool Hoofdpijnen::getVerminderingVanLevensritme() const {
    return verminderingVanLevensritme;
}
bool Hoofdpijnen::getVoedingsstoffenOfDrank() const {
    return voedingsstoffenOfDrank;
}
bool Hoofdpijnen::getStress() const {
    return stress;
}
QString Hoofdpijnen::getAndereTriggers() const {
    return andereTriggers;
}
QString Hoofdpijnen::getGeneesmiddel_1() const {
    return geneesmiddel_1;
}
QString Hoofdpijnen::getGeneesmiddel_2() const {
    return geneesmiddel_2;
}
QString Hoofdpijnen::getGeneesmiddel_3() const {
    return geneesmiddel_3;
}
QString Hoofdpijnen::getGeneesmiddel_4() const {
    return geneesmiddel_4;
}
int Hoofdpijnen::getTijdelijkOphoudenMetWerken() const {
    return tijdelijkOphoudenMetWerken;
}
bool Hoofdpijnen::getVerstoordFamiliaalLeven() const {
    return verstoordFamiliaalLeven;
}
bool Hoofdpijnen::getVerstoordeVrijetijdsbesteding() const {
    return verstoordeVrijeTijdsbesteding;
}
int Hoofdpijnen::getDuurVanDeAanval() const {
    return duurVanDeAanval;
}
QDate Hoofdpijnen::getDatum() const {
    return datum;
}

// Setter
void Hoofdpijnen::setErnst(int ernst) {
    this->ernst = ernst;
}
void Hoofdpijnen:: setEnkelzijdig(char enkelzijdig) {
    this->enkelzijdig = enkelzijdig;
}
void Hoofdpijnen::setKloppend(bool kloppend) {
    this->kloppend = kloppend;
}
void Hoofdpijnen::setHindertDagelijkseActiviteiten(bool hindertDagelijkseActiviteiten) {
    this->hindertDagelijkseActiviteiten = hindertDagelijkseActiviteiten;
}
void Hoofdpijnen::setErgerBijBeweging(bool ergerBijBeweging) {
    this->ergerBijBeweging = ergerBijBeweging;
}
void Hoofdpijnen::setAndereKenmerken(QString andereKenmerken) {
    this->andereKenmerken = andereKenmerken;
}
void Hoofdpijnen::setBraakneigingen(bool braakneigingen) {
    this->braakneigingen = braakneigingen;
}
void Hoofdpijnen::setBraken(bool braken) {
    this->braken = braken;
}
void Hoofdpijnen::setOvergevoeligVoorLicht(bool overgevoeligVoorLight) {
    this->overgevoeligVoorLicht = overgevoeligVoorLight;
}
void Hoofdpijnen::setOvergevoeligVoorGeluid(bool overgevoeligVoorGeluid) {
    this->overgevoeligVoorGeluid = overgevoeligVoorGeluid;
}
void Hoofdpijnen::setStoornissenVanHetZicht(char stoornissenVanHetZicht) {
    this->stoornissenVanHetZicht = stoornissenVanHetZicht;
}
void Hoofdpijnen::setTintelingen(char tintelingen) {
    this->tintelingen = tintelingen;
}
void Hoofdpijnen::setDoofGevoel(char doofGevoel) {
    this->doofGevoel = doofGevoel;
}
void Hoofdpijnen::setSpraakstoornissen(bool spraakstoornissen) {
    this->spraakstoornissen = spraakstoornissen;
}
void Hoofdpijnen::setMaandstonden(bool maandstonden) {
    this->maandstonden = maandstonden;
}
void Hoofdpijnen::setVerminderingVanLevensritme(bool verminderingVanLevensritme) {
    this->verminderingVanLevensritme = verminderingVanLevensritme;
}
void Hoofdpijnen::setVoedingsstoffenOfDrank(bool voedingsstoffenOfDrank) {
    this->voedingsstoffenOfDrank = voedingsstoffenOfDrank;
}
void Hoofdpijnen::setStress(bool stress) {
    this->stress = stress;
}
void Hoofdpijnen:: setAndereTriggers(QString andereTriggers) {
    this->andereTriggers = andereTriggers;
}
void Hoofdpijnen::setGeneesmiddel_1(QString geneesmiddel) {
    this->geneesmiddel_1 = geneesmiddel;
}
void Hoofdpijnen::setGeneesmiddel_2(QString geneesmiddel) {
    this->geneesmiddel_2 = geneesmiddel;
}
void Hoofdpijnen::setGeneesmiddel_3(QString geneesmiddel) {
    this->geneesmiddel_3 = geneesmiddel;
}
void Hoofdpijnen::setGeneesmiddel_4(QString geneesmiddel) {
    this->geneesmiddel_4 = geneesmiddel;
}
void Hoofdpijnen::setTijdelijkOphoudenMetWerken(int tijdelijkOphoudenMetWerken) {
    this->tijdelijkOphoudenMetWerken = tijdelijkOphoudenMetWerken;
}
void Hoofdpijnen::setVerstoordFamiliaalLeven(int verstoordFamiliaalLeven) {
    this->verstoordFamiliaalLeven = verstoordFamiliaalLeven;
}
void Hoofdpijnen::setVerstoordeVrijetijdsbesteding(bool verstoordeVrijetijdsbesteding) {
    this->verstoordeVrijeTijdsbesteding = verstoordeVrijetijdsbesteding;
}
void Hoofdpijnen::setDuurVanDeAanval(int duurVanDeAanval) {
    this->duurVanDeAanval = duurVanDeAanval;
}
void Hoofdpijnen::setDatum(QDate datum) {
    this->datum = datum;
}
