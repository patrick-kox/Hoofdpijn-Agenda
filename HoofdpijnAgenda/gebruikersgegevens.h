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

#ifndef GEBRUIKERSGEGEVENS_H
#define GEBRUIKERSGEGEVENS_H

#include <QDialog>

namespace Ui {
class GebruikersGegevens;
}

class GebruikersGegevens : public QDialog
{
    Q_OBJECT

public:
    explicit GebruikersGegevens(QWidget *parent = nullptr);
    ~GebruikersGegevens();
    void leesGegevens();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::GebruikersGegevens *ui;
};

#endif // GEBRUIKERSGEGEVENS_H