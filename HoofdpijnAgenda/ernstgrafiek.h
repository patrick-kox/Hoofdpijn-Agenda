#ifndef ERNSTGRAFIEK_H
#define ERNSTGRAFIEK_H

#include <QDialog>
#include <QtCharts>
#include <QChartView>
#include <QBarSet>
#include <QPieSeries>

#include <QSqlDatabase>
#include <QSqlQuery>


namespace Ui {
class ErnstGrafiek;
}

class ErnstGrafiek : public QDialog
{
    Q_OBJECT

public:
    explicit ErnstGrafiek(QWidget *parent = nullptr);
    ~ErnstGrafiek();
    void toonGrafiek() const;

private:
    Ui::ErnstGrafiek *ui;
};

#endif // ERNSTGRAFIEK_H
