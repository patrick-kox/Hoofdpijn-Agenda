#ifndef RECENTEHOOFDPIJNAANVALLEN_H
#define RECENTEHOOFDPIJNAANVALLEN_H

#include <QDialog>
#include <QTableWidget>

namespace Ui {
class RecenteHoofdpijnaanvallen;
}

class RecenteHoofdpijnaanvallen : public QDialog
{
    Q_OBJECT

public:
    explicit RecenteHoofdpijnaanvallen(QWidget *parent = nullptr);
    ~RecenteHoofdpijnaanvallen();
    int telRecenteAanvallen() const;
    void toonRecenteAanvallen() const;

private:
    Ui::RecenteHoofdpijnaanvallen *ui;
};

#endif // RECENTEHOOFDPIJNAANVALLEN_H
