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

