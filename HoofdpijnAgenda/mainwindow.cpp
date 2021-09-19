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
#include "ui_mainwindow.h"
#include "gebruikersgegevens.h"
#include "hoofdpijntoevoegen.h"

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
     QCoreApplication::quit();
}

void MainWindow::on_action_Gebruikers_Gegevens_triggered()
{
    GebruikersGegevens *data = new GebruikersGegevens;
    qDebug() << "Toon gebruikersgegevens";
    data->show();
}


void MainWindow::on_action_Hoofdpijn_Toevoegen_triggered()
{
    HoofdpijnToevoegen *hoofdpijn = new HoofdpijnToevoegen;
    qDebug() << "Voeg een hoofdpijn aanval toe";
    hoofdpijn->show();
}

