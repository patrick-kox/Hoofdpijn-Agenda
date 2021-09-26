#ifndef SYMPTOMENGRAFIEK_H
#define SYMPTOMENGRAFIEK_H

#include <QDialog>
#include <QtCharts>
#include <QChartView>
#include <QBarSet>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QPdfWriter>
#include <QPainter>
#include <QPageSize>
#include <QPageLayout>
#include <QFile>

namespace Ui {
class SymptomenGrafiek;
}

class SymptomenGrafiek : public QDialog
{
    Q_OBJECT

public:
    explicit SymptomenGrafiek(QWidget *parent = nullptr);
    ~SymptomenGrafiek();
    void toonGrafiek() const;

private slots:
    void on_buttonBox_accepted();

private:
    Ui::SymptomenGrafiek *ui;
};

#endif // SYMPTOMENGRAFIEK_H
