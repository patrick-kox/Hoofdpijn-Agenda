#include "ernstgrafiek.h"
#include "ui_ernstgrafiek.h"

#include <QSqlDatabase>
#include <QSqlQuery>

ErnstGrafiek::ErnstGrafiek(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErnstGrafiek)
{
    ui->setupUi(this);
    toonGrafiek();
}

ErnstGrafiek::~ErnstGrafiek()
{
    delete ui;
}

void ErnstGrafiek::toonGrafiek() const
{
    QPieSeries *series = new QPieSeries;

   int ernst;
    int ernst1 = 0;
    int ernst2 = 0;
    int ernst3 = 0;
    int ernst4 = 0;
    int ernst5 = 0;
    int ernst6 = 0;
    int ernst7 = 0;
    int ernst8 = 0;
    int ernst9 = 0;
    int ernst10 = 0;

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Hoofdpijnen.sqlite3");
    if (db.open())
    {
        qDebug() << "Databestand hoofdpijnen.sqlite3 geopend.";
        QString command = "SELECT * FROM Hoofdpijnen";
        QSqlQuery query(db);
        if (query.exec(command)) {
            // put user data into form
            while (query.next())
            {
                ernst = query.value("ernst").toString().toInt();
                switch (ernst)
               {
                case 1:
                    ernst1++;
                    break;
                case 2:
                    ernst2++;
                    break;
                case 3:
                    ernst3++;
                    break;
                case 4:
                    ernst4++;
                    break;
                case 5:
                    ernst5++;
                    break;
                case 6:
                    ernst6++;
                    break;
                case 7:
                    ernst7++;
                    break;
                case 8:
                    ernst8++;
                    break;
                case 9:
                    ernst9++;
                    break;
                case 10:
                    ernst10++;
                    break;
                default:
                    break;
                }
            }
        }
    }
        else
        {
            qDebug() << "Probleem bij openen gegevensbestand";
            exit(4);
        }

    series->append("licht", (ernst1 + ernst2 + ernst3));
    series->append("matig", (ernst4 + ernst5 + ernst6 + ernst7));
    series->append("ernstig", (ernst8 + ernst9 + ernst10));

    QChart *chart = new QChart;
    chart->addSeries(series);
    chart->setTitle("Ernst van de hoofdpijnaanvallen");
    chart->setDropShadowEnabled();

    QChartView *chartview = new QChartView(chart);

    chartview->setParent(ui->horizontalFrame);
    chartview->resize(ui->horizontalFrame->size());
}
