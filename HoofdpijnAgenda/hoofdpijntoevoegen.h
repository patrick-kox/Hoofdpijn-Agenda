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

#ifndef HOOFDPIJNTOEVOEGEN_H
#define HOOFDPIJNTOEVOEGEN_H

#include <QDialog>

namespace Ui {
class HoofdpijnToevoegen;
}

class HoofdpijnToevoegen : public QDialog
{
    Q_OBJECT

public:
    explicit HoofdpijnToevoegen(QWidget *parent = nullptr);
    ~HoofdpijnToevoegen();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::HoofdpijnToevoegen *ui;
};

#endif // HOOFDPIJNTOEVOEGEN_H
