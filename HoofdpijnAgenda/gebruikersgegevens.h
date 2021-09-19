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
