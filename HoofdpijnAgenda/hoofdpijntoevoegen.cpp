#include "hoofdpijntoevoegen.h"
#include "ui_hoofdpijntoevoegen.h"

HoofdpijnToevoegen::HoofdpijnToevoegen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HoofdpijnToevoegen)
{
    ui->setupUi(this);
}

HoofdpijnToevoegen::~HoofdpijnToevoegen()
{
    delete ui;
}
