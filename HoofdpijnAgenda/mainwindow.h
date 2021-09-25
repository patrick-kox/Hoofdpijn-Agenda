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

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QMessageBox>
#include <QSqlDatabase>

#include "Hoofdpijnen.h"
#include "ui_mainwindow.h"
#include "gebruikersgegevens.h"
#include "hoofdpijntoevoegen.h"
#include "recentehoofdpijnaanvallen.h"
#include "allehoofdpijnaanvallen.h"
#include "help.h"
#include "over.h"
#include "initializeDB.h"
#include "ernstgrafiek.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow;}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_Afsluiten_triggered();

    void on_action_Gebruikers_Gegevens_triggered();

    void on_action_Hoofdpijn_Toevoegen_triggered();

    void on_actionToon_meest_Recente_Hoofdpijn_Aanvallen_triggered();

    void on_actionToon_Alle_Hoofdpijn_Aanvallen_triggered();

    void on_action_Gegevensbestand_Herstellen_triggered();

    void on_action_Help_triggered();

    void on_action_Informatie_triggered();

    void on_actionGegevens_Exporteren_triggered();

    void on_action_Ernst_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
