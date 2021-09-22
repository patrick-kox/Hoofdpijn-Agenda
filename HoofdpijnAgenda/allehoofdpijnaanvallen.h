#ifndef ALLEHOOFDPIJNAANVALLEN_H
#define ALLEHOOFDPIJNAANVALLEN_H

#include <QDialog>

namespace Ui {
class AlleHoofdpijnAanvallen;
}

class AlleHoofdpijnAanvallen : public QDialog
{
    Q_OBJECT

public:
    explicit AlleHoofdpijnAanvallen(QWidget *parent = nullptr);
    ~AlleHoofdpijnAanvallen();
    int telRecenteAanvallen() const;
    void toonRecenteAanvallen() const;

private:
    Ui::AlleHoofdpijnAanvallen *ui;
};

#endif // ALLEHOOFDPIJNAANVALLEN_H
