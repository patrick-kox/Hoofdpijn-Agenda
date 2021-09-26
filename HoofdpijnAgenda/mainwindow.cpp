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

#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Afsluiten_triggered()
{
    QSqlDatabase::removeDatabase( QSqlDatabase::defaultConnection );
     QCoreApplication::quit();
}

void MainWindow::on_action_Gebruikers_Gegevens_triggered()
{
    GebruikersGegevens *data = new GebruikersGegevens;
    qDebug() << tr("Toon gebruikersgegevens");
    data->show();
}


void MainWindow::on_action_Hoofdpijn_Toevoegen_triggered()
{
    HoofdpijnToevoegen *hoofdpijn = new HoofdpijnToevoegen;
    qDebug() << tr("Voeg een hoofdpijn aanval toe");
    hoofdpijn->show();
}


void MainWindow::on_actionToon_meest_Recente_Hoofdpijn_Aanvallen_triggered()
{
   RecenteHoofdpijnaanvallen *aanvallen = new RecenteHoofdpijnaanvallen;
   qDebug() << tr("Toon meest recente hoofdpijnaanvallen");
   aanvallen->show();
}


void MainWindow::on_actionToon_Alle_Hoofdpijn_Aanvallen_triggered()
{
    AlleHoofdpijnAanvallen *aanvallen = new AlleHoofdpijnAanvallen;
    qDebug() << tr("Toon alle hoofdpijnaanvallen");
    aanvallen->show();
}


void MainWindow::on_action_Gegevensbestand_Herstellen_triggered()
{
    QMessageBox msgBox;
    msgBox.setText(tr("Gegevensbestand herstellen"));
    msgBox.setInformativeText(tr("Alle gegevens in het databestand worden verwijderd, bent u zeker?"));
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    int ret = msgBox.exec();

    switch (ret) {
      case QMessageBox::Yes:
          initializeDB();
          break;
      case QMessageBox::No:
        QMessageBox confirm;
        confirm.setText(tr("Gegevensbestand herstellen"));
        confirm.setInformativeText(tr("Gegevensbestand niet aangepast."));
        confirm.exec();
          break;
    }
}


void MainWindow::on_action_Help_triggered()
{
    Help *help = new Help;
    qDebug() << tr("Toon help venster");
    help->show();
}


void MainWindow::on_action_Informatie_triggered()
{
   Over *over = new Over;
   qDebug() << tr("Toon 'about' venster");
   over->show();
}


void MainWindow::on_actionGegevens_Exporteren_triggered()
{
    QMessageBox msgBox;
    msgBox.setText(tr("nog te implementeren."));
    msgBox.exec();
}


void MainWindow::on_action_Ernst_triggered()
{
    ErnstGrafiek *ernstgrafiek = new ErnstGrafiek;
    qDebug() << tr("Toon grafiek van de ernst van de hoofdpijnen.");
    ernstgrafiek->show();
}


void MainWindow::on_actionSymptomen_triggered()
{
   SymptomenGrafiek *symptomengrafiek = new SymptomenGrafiek;
   qDebug() << tr("Toon grafiek van symptomen.");
   symptomengrafiek->show();
}


void MainWindow::on_action_Rapport_Weergeven_triggered()
{
    writePdf();
}

void MainWindow::writePdf()
{
    /* Get user information */
    // Open database file
    QString Voornaam;
    QString Achternaam;
    QString Geslacht;
    QString Straat;
    QString Huisnummer;
    QString Gemeente;
    QString Postcode;
    QString Leeftijd;
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
                Voornaam = query.value("voornaam").toString();
                Achternaam = query.value("achternaam").toString();
                Geslacht = query.value("geslacht").toString();
                Straat = query.value("straat").toString();
                Huisnummer = query.value("huisnummer").toString();
                Gemeente = query.value("gemeente").toString();
                Postcode = query.value("postcode").toString();
                Leeftijd = query.value("leeftijd").toString();
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

    /* Get headache information from the database */
    int enkelzijdig = 0;
    int kloppend = 0;
    int hindert = 0;
    int beweging = 0;
    int braakneigingen = 0;
    int braken = 0;
    int licht = 0;
    int geluid = 0;
    int zicht = 0;
    int tintelingen = 0;
    int doofGevoel = 0;
    int spraakstoornissen = 0;
    int maandstonden = 0;
    int levensritme = 0;
    int voeding = 0;
    int stress = 0;
    // QString ophoudenMetWerken;
    int verstoordFamiliaalLeven = 0;
    int verstoordeVrijetijd = 0;
    int records = 0;
    QString geneesmiddel_1;
    QString geneesmiddel_2;
    QString geneesmiddel_3;
    QString geneesmiddel_4;
    QString command = "SELECT * FROM Hoofdpijnen";
    QSqlQuery query(db);
    if (query.exec(command)) {
        // put user data into form
        while (query.next())
        {
            enkelzijdig += query.value("enkelzijdig").toString().toInt();
            kloppend += query.value("kloppend").toString().toInt();
            hindert += query.value("hindertDagelijkseActiviteiten").toString().toInt();
            beweging += query.value("ergerBijBeweging").toString().toInt();
            braakneigingen += query.value("braakneigingen").toString().toInt();
            braken += query.value("braken").toString().toInt();
            licht += query.value("overgevoeligVoorLicht").toString().toInt();
            geluid += query.value("overgevoeligVoorGeluid").toString().toInt();
            zicht += query.value("stoornissenVanHetZicht").toString().toInt();
            tintelingen += query.value("tintelingen").toString().toInt();
            doofGevoel += query.value("doofGevoel").toString().toInt();
            spraakstoornissen += query.value("spraakstoornissen").toString().toInt();
            maandstonden += query.value("maandstonden").toString().toInt();
            levensritme += query.value("verminderingVanLevensritme").toString().toInt();
            voeding += query.value("voedingsstoffenOfDrank").toString().toInt();
            stress += query.value("stress").toString().toInt();
            // ophoudenMetWerken = query.value("tijdelijkOphoudenMetWerken").toString();
            verstoordFamiliaalLeven += query.value("verstoordFamiliaalLeven").toString().toInt();
            verstoordeVrijetijd += query.value("verstoordeVrijetijdsbesteding").toString().toInt();
            records++;

            geneesmiddel_1 = query.value("geneesmiddel_1").toString();
            geneesmiddel_2 = query.value("geneesmiddel_2").toString();
            geneesmiddel_3 = query.value("geneesmiddel_3").toString();
            geneesmiddel_4 = query.value("geneesmiddel_4").toString();
            }
    }
    else
    {
        qDebug() << tr("Probleem bij openen gegevensbestand");
        exit(4);
    }

    QString Enkelzijdig = QString::number(enkelzijdig);
    QString Kloppend = QString::number(kloppend);
    QString Hindert = QString::number(hindert);
    QString Beweging = QString::number(beweging);
    QString Braakneigingen = QString::number(braakneigingen);
    QString Braken = QString::number(braken);
    QString Licht = QString::number(licht);
    QString Geluid = QString::number(geluid);
    QString Zicht = QString::number(zicht);
    QString Tintelingen = QString::number(tintelingen);
    QString DoofGevoel = QString::number(doofGevoel);
    QString Spraakstoornissen = QString::number(spraakstoornissen);
    QString Maandstonden = QString::number(maandstonden);
    QString Levensritme = QString::number(levensritme);
    QString Voeding = QString::number(voeding);
    QString Stress = QString::number(stress);
    QString VerstoordFamiliaalLeven = QString::number(verstoordFamiliaalLeven);
    QString VerstoordeVrijetijdsbesteding = QString::number(verstoordeVrijetijd);
    QString Records = QString::number(records);

    if (geneesmiddel_1 == "")
        geneesmiddel_1 = tr("(geen)");
    if (geneesmiddel_2 == "")
        geneesmiddel_2 = tr("(geen)");
    if (geneesmiddel_3 == "")
        geneesmiddel_3 = tr("(geen)");
    if (geneesmiddel_4 == "")
        geneesmiddel_4 = tr("(geen)");

    QString fileName = QFileDialog::getSaveFileName(this, tr("Opslaan als"), QDir::currentPath(), tr("PDF Bestanden (*.pdf)"));
    if (!fileName.isEmpty())
    {
        if (!fileName.endsWith(".pdf"))
            fileName += ".pdf";
    QPdfWriter pdfwriter(fileName);
    pdfwriter.setPageSize(QPageSize(QPageSize::A4));
    QPainter painter(&pdfwriter);

    // Personal Data
    painter.drawText(0,0, tr("Naam:"));
    painter.drawText(1000,0,Voornaam + " " + Achternaam);
    painter.drawText(0,200, tr("Address:"));
    painter.drawText(1000,200,Straat + " " + Huisnummer);
    painter.drawText(0,400,tr("Gemeente:"));
    painter.drawText(1000,400,Postcode + " " + Gemeente);

    // Report Title
    painter.drawText(4000,700,(tr("Rapport Hoofdpijnagenda")));

    // Report "Kenmerken)

    QString Aanvallen = tr(" bij ") + Records + tr(" hoofdpijnaanvallen");

    painter.drawText(100,1200,(tr("Kenmerken van de hoofdpijn")));
    painter.drawText(500,1400,tr("Aan één zijde"));
    painter.drawText(3350,1200,Aanvallen);
    painter.drawText(4400,1400,Enkelzijdig);
    painter.drawText(500,1600,tr("Kloppende hoofdpijn"));
    painter.drawText(4400,1600,Kloppend);
    painter.drawText(500,1800,tr("Hindert dagelijkse activiteiten"));
    painter.drawText(4400,1800,Hindert);
    painter.drawText(500,2000,tr("Verergert met beweging"));
    painter.drawText(4400,2000,Beweging);

    painter.drawText(100,2400,tr("Symptomen die die hoofdpijn begeleiden"));
    painter.drawText(500,2600,tr("Braakneigingen"));
    painter.drawText(4400,2600,Braakneigingen);
    painter.drawText(500,2800,tr("Braken"));
    painter.drawText(4400,2800,Braken);
    painter.drawText(500,3000,tr("Overgevoelig voor licht"));
    painter.drawText(4400,3000,Licht);
    painter.drawText(500,3200,tr("Overgevoelig voor geluid"));
    painter.drawText(4400,3200,Geluid);

    painter.drawText(100,3600,tr("Klachten bij het BEGIN van de aanval"));
    painter.drawText(500,3800,tr("Stoornissen van het zicht"));
    painter.drawText(4400,3800,Zicht);
    painter.drawText(500,4000,tr("Tintelingen"));
    painter.drawText(4400,4000,Tintelingen);
    painter.drawText(500,4200,tr("Doof gevoel"));
    painter.drawText(4400,4200,DoofGevoel);
    painter.drawText(500,4400,tr("Spraakstoornissen"));
    painter.drawText(4400,4400,Spraakstoornissen);

    painter.drawText(100,4800,tr("Uitlokkende Factoren"));
    painter.drawText(500,5000,tr("Maandstonden"));
    painter.drawText(4400,5000,Maandstonden);
    painter.drawText(500,5200,tr("Vermindering van levensritme"));
    painter.drawText(4400,5200,Levensritme);
    painter.drawText(500,5400,tr("Voedingsstoffen of drank"));
    painter.drawText(4400,5400,Voeding);
    painter.drawText(500,5600,tr("Stress"));
    painter.drawText(4400,5600,Stress);

    painter.drawText(100,6000,tr("Invloed op de activiteiten"));
    painter.drawText(500,6200,tr("Verstoord familiaal leven"));
    painter.drawText(4400,6200,VerstoordFamiliaalLeven);
    painter.drawText(500,6400,tr("Verstoorde vrijetijdsbesteding"));
    painter.drawText(4400,6400,VerstoordeVrijetijdsbesteding);
    //painter.drawText(500,6600,tr("Tijdelijk ophouden met werken"));
    //painter.drawText(4400,6600,ophoudenMetWerken);

    painter.drawText(100, 7000,tr("Medicatie ingenomen bij meest recente hoofdpijnaanval"));
    painter.drawText(500,7200,tr("Geneesmiddel #1"));
    painter.drawText(4400,7200,geneesmiddel_1);
    painter.drawText(500,7400,tr("Geneesmiddel #2"));
    painter.drawText(4400,7400,geneesmiddel_2);
    painter.drawText(500,7600,tr("Geneesmiddel #3"));
    painter.drawText(4400,7600,geneesmiddel_3);
    painter.drawText(500,7800,tr("Geneesmiddel #4"));
    painter.drawText(4400,7800,geneesmiddel_4);

    painter.end();

    QString message = tr("Het bestand is opgeslagen als ") + fileName;
    QMessageBox msgBox;
    msgBox.setText(message);
    msgBox.exec();
    }
}

