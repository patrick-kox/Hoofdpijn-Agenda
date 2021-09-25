#include "ernstgrafiek.h"
#include "ui_ernstgrafiek.h"

#include <QSqlDatabase>
#include <QSqlQuery>

ErnstGrafiek::ErnstGrafiek(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErnstGrafiek)
{
    ui->setupUi(this);

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

    series->append("1", ernst1);
    series->append("2", ernst2);
    series->append("3", ernst3);
    series->append("4", ernst4);
    series->append("5", ernst5);
    series->append("6", ernst6);
    series->append("7", ernst7);
    series->append("8", ernst8);
    series->append("9", ernst9);
    series->append("10", ernst10);

    QChart *chart = new QChart;
    chart->addSeries(series);
    chart->setTitle("Ernst van de hoofdpijnaanvallen");

    QChartView *chartview = new QChartView(chart);

    chartview->setParent(ui->horizontalFrame);

}

ErnstGrafiek::~ErnstGrafiek();
{
    delete ui;
}
