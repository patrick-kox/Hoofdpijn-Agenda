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

private:
    Ui::HoofdpijnToevoegen *ui;
};

#endif // HOOFDPIJNTOEVOEGEN_H
