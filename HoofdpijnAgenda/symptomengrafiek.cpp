#include "symptomengrafiek.h"
#include "ui_symptomengrafiek.h"

SymptomenGrafiek::SymptomenGrafiek(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SymptomenGrafiek)
{
    ui->setupUi(this);
    toonGrafiek();
}

SymptomenGrafiek::~SymptomenGrafiek()
{
    delete ui;
}

void SymptomenGrafiek::toonGrafiek() const
{
    QBarSet *Enkelzijdig = new QBarSet(tr("Enkelzijdig"));
    QBarSet *Kloppend = new QBarSet(tr("Kloppend"));
    QBarSet *Hindert = new QBarSet(tr("Hindert dagelijkse activiteiten"));
    QBarSet *Beweging = new QBarSet(tr("Verergert met beweging"));
    QBarSet *Braakneigingen = new QBarSet(tr("Braakneigingen"));
    QBarSet *Braken = new QBarSet(tr("Braken"));
    QBarSet *Licht = new QBarSet(tr("Overgevoelig voor licht"));
    QBarSet *Geluid = new QBarSet(tr("Overgevoelig voor geluid"));
    QBarSet *Zicht = new QBarSet(tr("Stoornissen van het zicht"));
    QBarSet *Tintelingen = new QBarSet(tr("Tintelingen"));
    QBarSet *DoofGevoel = new QBarSet(tr("Doof gevoel"));
    QBarSet *Spraakstoornissen = new QBarSet(tr("Spraakstoornissen"));
    QBarSet *Maandstonden = new QBarSet(tr("Maandstonden"));
    QBarSet *Levensritme = new QBarSet(tr("Vermindering van levensritme"));
    QBarSet *Voeding = new QBarSet(tr("Voedingsstoffen of drank"));
    QBarSet *Stress = new QBarSet(tr("Stress"));

    QBarSeries *series = new QBarSeries;

    int enkelzijdig = 0;
    int kloppend = 0;
    int hindert = 0;
    int beweging = 0;
    int braakneigingen = 0;
    int braken = 0;
    int licht = 0;
    int geluid = 0;
    int zicht = 0;
    int tintelingen = 0;
    int doofGevoel = 0;
    int spraakstoornissen = 0;
    int maandstonden = 0;
    int levensritme = 0;
    int voeding = 0;
    int stress = 0;
    int records = 0;

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
                enkelzijdig += query.value("enkelzijdig").toString().toInt();
                kloppend += query.value("kloppend").toString().toInt();
                hindert += query.value("hindertDagelijkseActiviteiten").toString().toInt();
                beweging += query.value("ergerBijBeweging").toString().toInt();
                braakneigingen += query.value("braakneigingen").toString().toInt();
                braken += query.value("braken").toString().toInt();
                licht += query.value("overgevoeligVoorLicht").toString().toInt();
                geluid += query.value("overgevoeligVoorGeluid").toString().toInt();
                zicht += query.value("stoornissenVanHetZicht").toString().toInt();
                tintelingen += query.value("tintelingen").toString().toInt();
                doofGevoel += query.value("doofGevoel").toString().toInt();
                spraakstoornissen += query.value("spraakstoornissen").toString().toInt();
                maandstonden += query.value("maandstonden").toString().toInt();
                levensritme += query.value("verminderingVanLevensritme").toString().toInt();
                voeding += query.value("voedingsstoffenOfDrank").toString().toInt();
                stress += query.value("stress").toString().toInt();
                records++;
                }
            }
        }
        else
        {
            qDebug() << tr("Probleem bij openen gegevensbestand");
            exit(4);
        }
    *Enkelzijdig << enkelzijdig;
    *Kloppend << kloppend;
    *Hindert << hindert;
    *Beweging << beweging;
    *Braakneigingen << braakneigingen;
    *Braken << braken;
    *Licht << licht;
    *Geluid << geluid;
    *Zicht << zicht;
    *Tintelingen << tintelingen;
    *DoofGevoel << doofGevoel;
    *Spraakstoornissen << spraakstoornissen;
    *Maandstonden << maandstonden;
    *Levensritme << levensritme;
    *Voeding << voeding;
    *Stress << stress;

    series->append(Enkelzijdig);
    series->append(Kloppend);
    series->append(Hindert);
    series->append(Beweging);
    series->append(Braakneigingen);
    series->append(Braken);
    series->append(Licht);
    series->append(Geluid);
    series->append(Zicht);
    series->append(Tintelingen);
    series->append(DoofGevoel);
    series->append(Spraakstoornissen);
    series->append(Maandstonden);
    series->append(Levensritme);
    series->append(Voeding);
    series->append(Stress);

    QChart *chart = new QChart;
    chart->addSeries(series);
    chart->setTitle(tr("Symptomen, Kenmerken en Triggers"));
    chart->setDropShadowEnabled();
    chart->setAnimationOptions(QChart::SeriesAnimations);

    QValueAxis *axisY = new QValueAxis;
    axisY->setRange(0, records);
    axisY->setTickCount(1);
    axisY->setLabelFormat("%2i");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight);

    QChartView *chartview = new QChartView(chart);
    chartview->setParent(ui->horizontalFrame);
    chartview->resize(ui->horizontalFrame->size());
}

void SymptomenGrafiek::on_buttonBox_accepted()
{
    QBarSet *Enkelzijdig = new QBarSet(tr("Enkelzijdig"));
    QBarSet *Kloppend = new QBarSet(tr("Kloppend"));
    QBarSet *Hindert = new QBarSet(tr("Hindert dagelijkse activiteiten"));
    QBarSet *Beweging = new QBarSet(tr("Verergert met beweging"));
    QBarSet *Braakneigingen = new QBarSet(tr("Braakneigingen"));
    QBarSet *Braken = new QBarSet(tr("Braken"));
    QBarSet *Licht = new QBarSet(tr("Overgevoelig voor licht"));
    QBarSet *Geluid = new QBarSet(tr("Overgevoelig voor geluid"));
    QBarSet *Zicht = new QBarSet(tr("Stoornissen van het zicht"));
    QBarSet *Tintelingen = new QBarSet(tr("Tintelingen"));
    QBarSet *DoofGevoel = new QBarSet(tr("Doof gevoel"));
    QBarSet *Spraakstoornissen = new QBarSet(tr("Spraakstoornissen"));
    QBarSet *Maandstonden = new QBarSet(tr("Maandstonden"));
    QBarSet *Levensritme = new QBarSet(tr("Vermindering van levensritme"));
    QBarSet *Voeding = new QBarSet(tr("Voedingsstoffen of drank"));
    QBarSet *Stress = new QBarSet(tr("Stress"));

    QBarSeries *series = new QBarSeries;

    int enkelzijdig = 0;
    int kloppend = 0;
    int hindert = 0;
    int beweging = 0;
    int braakneigingen = 0;
    int braken = 0;
    int licht = 0;
    int geluid = 0;
    int zicht = 0;
    int tintelingen = 0;
    int doofGevoel = 0;
    int spraakstoornissen = 0;
    int maandstonden = 0;
    int levensritme = 0;
    int voeding = 0;
    int stress = 0;
    int records = 0;

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
                enkelzijdig += query.value("enkelzijdig").toString().toInt();
                kloppend += query.value("kloppend").toString().toInt();
                hindert += query.value("hindertDagelijkseActiviteiten").toString().toInt();
                beweging += query.value("ergerBijBeweging").toString().toInt();
                braakneigingen += query.value("braakneigingen").toString().toInt();
                braken += query.value("braken").toString().toInt();
                licht += query.value("overgevoeligVoorLicht").toString().toInt();
                geluid += query.value("overgevoeligVoorGeluid").toString().toInt();
                zicht += query.value("stoornissenVanHetZicht").toString().toInt();
                tintelingen += query.value("tintelingen").toString().toInt();
                doofGevoel += query.value("doofGevoel").toString().toInt();
                spraakstoornissen += query.value("spraakstoornissen").toString().toInt();
                maandstonden += query.value("maandstonden").toString().toInt();
                levensritme += query.value("verminderingVanLevensritme").toString().toInt();
                voeding += query.value("voedingsstoffenOfDrank").toString().toInt();
                stress += query.value("stress").toString().toInt();
                records++;
                }
            }
        }
        else
        {
            qDebug() << tr("Probleem bij openen gegevensbestand");
            exit(4);
        }
    *Enkelzijdig << enkelzijdig;
    *Kloppend << kloppend;
    *Hindert << hindert;
    *Beweging << beweging;
    *Braakneigingen << braakneigingen;
    *Braken << braken;
    *Licht << licht;
    *Geluid << geluid;
    *Zicht << zicht;
    *Tintelingen << tintelingen;
    *DoofGevoel << doofGevoel;
    *Spraakstoornissen << spraakstoornissen;
    *Maandstonden << maandstonden;
    *Levensritme << levensritme;
    *Voeding << voeding;
    *Stress << stress;

    series->append(Enkelzijdig);
    series->append(Kloppend);
    series->append(Hindert);
    series->append(Beweging);
    series->append(Braakneigingen);
    series->append(Braken);
    series->append(Licht);
    series->append(Geluid);
    series->append(Zicht);
    series->append(Tintelingen);
    series->append(DoofGevoel);
    series->append(Spraakstoornissen);
    series->append(Maandstonden);
    series->append(Levensritme);
    series->append(Voeding);
    series->append(Stress);

    QChart *chart = new QChart;
    chart->addSeries(series);
    chart->setTitle(tr("Symptomen, Kenmerken en Triggers"));
    //chart->setDropShadowEnabled();
    // chart->setAnimationOptions(QChart::SeriesAnimations); This option makes the graph invisible if using the chartView->grab() method.

    QValueAxis *axisY = new QValueAxis;
    axisY->setRange(0, records);
    axisY->setTickCount(1);
    axisY->setLabelFormat("%2i");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignRight);

    QChartView *chartview = new QChartView(chart);
    chartview->setParent(ui->horizontalFrame);
    chartview->resize(ui->horizontalFrame->size());

    QString fileName = QFileDialog::getSaveFileName(this, tr("Opslaan als"), QDir::currentPath(), tr("PDF Bestanden (*.pdf)"));
    if (!fileName.isEmpty())
    {

    /*
     * PDF Export
     */
    QPdfWriter writer(fileName);
    writer.setCreator("https:/www.hoofdpijnagenda.be");
    writer.setTitle(tr("Symptomen"));
    writer.setPageOrientation(QPageLayout::Landscape);

    QPainter painter(&writer);
    QPixmap pix = chartview->grab();
    int h = painter.window().height()*0.5;
    int w = h * 1.3;
    int x = (painter.window().width() / 2) - (w/2);
    int y = (painter.window().height() / 2) - (h/2);
    chartview->resize(w, h);
    painter.drawPixmap(x, y, w, h, pix);
    // chartview->render(&painter);
    qDebug() << "Exported graph to symptomen.pdf";

    painter.end();
    }
}

