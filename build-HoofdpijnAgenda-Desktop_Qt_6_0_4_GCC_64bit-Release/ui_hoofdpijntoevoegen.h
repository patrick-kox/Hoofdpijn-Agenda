/********************************************************************************
** Form generated from reading UI file 'hoofdpijntoevoegen.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOOFDPIJNTOEVOEGEN_H
#define UI_HOOFDPIJNTOEVOEGEN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_HoofdpijnToevoegen
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout_3;
    QLabel *lblKenmerken;
    QLabel *lblErnstVanDeHoofdpijn;
    QSpinBox *spnbxErnstVanDeHoofdpijn;
    QCheckBox *chkAanEenZijde;
    QCheckBox *chkKloppendeHoofdpijn;
    QCheckBox *chkHindertDagelijkseActiviteiten;
    QCheckBox *chkVerergertMetBeweging;
    QLabel *lblAndereKenmerken;
    QLineEdit *inputAndereKenmerken;
    QLabel *lblSymptomenDieDeHoofdpijnBegeleiden;
    QCheckBox *chkBraakneigingen;
    QCheckBox *chkBrakenOvergeven;
    QCheckBox *chkOvergevoeligVoorLicht;
    QCheckBox *chkOvergevoeligVoorGeluid;
    QLabel *lblKlachtenBijHetBEGINVanDeAanval;
    QCheckBox *chkStoornissenVanHetZicht;
    QCheckBox *chkTintelingen;
    QCheckBox *chkSpraakstoornissen;
    QCheckBox *chkDoofGevoel;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_5;
    QFormLayout *formLayout_6;
    QLabel *lblUitlokkendeFactoren;
    QCheckBox *chkMaandstonden;
    QCheckBox *chkVerminderingVanLevensritme;
    QCheckBox *chkVoedingsstoffenOfDrank;
    QCheckBox *chkStress;
    QLabel *lblAndereTriggers;
    QLineEdit *inputAndereTriggers;
    QLabel *lblIngenomenMedicatie;
    QLabel *lblIngenomenMedicatieDetails;
    QLabel *lblGeneesmiddel1;
    QLineEdit *inputGeneesmiddel1;
    QLabel *lblGeneesmiddel2;
    QLineEdit *inputGeneesmiddel2;
    QLabel *lblGeneesmiddel3;
    QLineEdit *inputGeneesmiddel3;
    QLabel *lblGeneesmiddel4;
    QLineEdit *inputGeneesmiddel4;
    QLabel *lblInvloedOpDeActiviteiten;
    QLabel *label_6;
    QLabel *lblTijdelijkOphoudenMetWerken;
    QSpinBox *spnTijdelijkOphoudenMetWerken;
    QCheckBox *chkVerstoordFamiliaalLeven;
    QCheckBox *chkVerstoordeVrijetijdsactiviteiten;
    QLabel *lblDuurVanDeAanval;
    QLabel *label_17;
    QLineEdit *inputDuurVanDeAanval;
    QLabel *lblDatumVanDeAanval;
    QDateEdit *dateDatumVanDeAanval;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *HoofdpijnToevoegen)
    {
        if (HoofdpijnToevoegen->objectName().isEmpty())
            HoofdpijnToevoegen->setObjectName(QString::fromUtf8("HoofdpijnToevoegen"));
        HoofdpijnToevoegen->setWindowModality(Qt::WindowModal);
        HoofdpijnToevoegen->resize(1870, 973);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HoofdpijnToevoegen->sizePolicy().hasHeightForWidth());
        HoofdpijnToevoegen->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/site-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HoofdpijnToevoegen->setWindowIcon(icon);
        HoofdpijnToevoegen->setModal(true);
        horizontalLayout = new QHBoxLayout(HoofdpijnToevoegen);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblKenmerken = new QLabel(HoofdpijnToevoegen);
        lblKenmerken->setObjectName(QString::fromUtf8("lblKenmerken"));
        lblKenmerken->setMaximumSize(QSize(16777215, 70));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        lblKenmerken->setFont(font);
        lblKenmerken->setCursor(QCursor(Qt::ForbiddenCursor));
        lblKenmerken->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, lblKenmerken);

        lblErnstVanDeHoofdpijn = new QLabel(HoofdpijnToevoegen);
        lblErnstVanDeHoofdpijn->setObjectName(QString::fromUtf8("lblErnstVanDeHoofdpijn"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, lblErnstVanDeHoofdpijn);

        spnbxErnstVanDeHoofdpijn = new QSpinBox(HoofdpijnToevoegen);
        spnbxErnstVanDeHoofdpijn->setObjectName(QString::fromUtf8("spnbxErnstVanDeHoofdpijn"));
        spnbxErnstVanDeHoofdpijn->setMaximumSize(QSize(70, 35));
        spnbxErnstVanDeHoofdpijn->setMinimum(1);
        spnbxErnstVanDeHoofdpijn->setMaximum(10);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, spnbxErnstVanDeHoofdpijn);

        chkAanEenZijde = new QCheckBox(HoofdpijnToevoegen);
        chkAanEenZijde->setObjectName(QString::fromUtf8("chkAanEenZijde"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, chkAanEenZijde);

        chkKloppendeHoofdpijn = new QCheckBox(HoofdpijnToevoegen);
        chkKloppendeHoofdpijn->setObjectName(QString::fromUtf8("chkKloppendeHoofdpijn"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, chkKloppendeHoofdpijn);

        chkHindertDagelijkseActiviteiten = new QCheckBox(HoofdpijnToevoegen);
        chkHindertDagelijkseActiviteiten->setObjectName(QString::fromUtf8("chkHindertDagelijkseActiviteiten"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, chkHindertDagelijkseActiviteiten);

        chkVerergertMetBeweging = new QCheckBox(HoofdpijnToevoegen);
        chkVerergertMetBeweging->setObjectName(QString::fromUtf8("chkVerergertMetBeweging"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, chkVerergertMetBeweging);

        lblAndereKenmerken = new QLabel(HoofdpijnToevoegen);
        lblAndereKenmerken->setObjectName(QString::fromUtf8("lblAndereKenmerken"));

        formLayout_3->setWidget(6, QFormLayout::LabelRole, lblAndereKenmerken);

        inputAndereKenmerken = new QLineEdit(HoofdpijnToevoegen);
        inputAndereKenmerken->setObjectName(QString::fromUtf8("inputAndereKenmerken"));
        inputAndereKenmerken->setMinimumSize(QSize(250, 25));
        inputAndereKenmerken->setMaximumSize(QSize(250, 16777215));

        formLayout_3->setWidget(6, QFormLayout::FieldRole, inputAndereKenmerken);

        lblSymptomenDieDeHoofdpijnBegeleiden = new QLabel(HoofdpijnToevoegen);
        lblSymptomenDieDeHoofdpijnBegeleiden->setObjectName(QString::fromUtf8("lblSymptomenDieDeHoofdpijnBegeleiden"));
        lblSymptomenDieDeHoofdpijnBegeleiden->setMaximumSize(QSize(16777215, 70));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sans Serif"));
        font1.setPointSize(10);
        font1.setBold(true);
        lblSymptomenDieDeHoofdpijnBegeleiden->setFont(font1);
        lblSymptomenDieDeHoofdpijnBegeleiden->setCursor(QCursor(Qt::ForbiddenCursor));
        lblSymptomenDieDeHoofdpijnBegeleiden->setLineWidth(2);
        lblSymptomenDieDeHoofdpijnBegeleiden->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(7, QFormLayout::LabelRole, lblSymptomenDieDeHoofdpijnBegeleiden);

        chkBraakneigingen = new QCheckBox(HoofdpijnToevoegen);
        chkBraakneigingen->setObjectName(QString::fromUtf8("chkBraakneigingen"));

        formLayout_3->setWidget(8, QFormLayout::LabelRole, chkBraakneigingen);

        chkBrakenOvergeven = new QCheckBox(HoofdpijnToevoegen);
        chkBrakenOvergeven->setObjectName(QString::fromUtf8("chkBrakenOvergeven"));

        formLayout_3->setWidget(9, QFormLayout::LabelRole, chkBrakenOvergeven);

        chkOvergevoeligVoorLicht = new QCheckBox(HoofdpijnToevoegen);
        chkOvergevoeligVoorLicht->setObjectName(QString::fromUtf8("chkOvergevoeligVoorLicht"));

        formLayout_3->setWidget(10, QFormLayout::LabelRole, chkOvergevoeligVoorLicht);

        chkOvergevoeligVoorGeluid = new QCheckBox(HoofdpijnToevoegen);
        chkOvergevoeligVoorGeluid->setObjectName(QString::fromUtf8("chkOvergevoeligVoorGeluid"));

        formLayout_3->setWidget(11, QFormLayout::LabelRole, chkOvergevoeligVoorGeluid);

        lblKlachtenBijHetBEGINVanDeAanval = new QLabel(HoofdpijnToevoegen);
        lblKlachtenBijHetBEGINVanDeAanval->setObjectName(QString::fromUtf8("lblKlachtenBijHetBEGINVanDeAanval"));
        lblKlachtenBijHetBEGINVanDeAanval->setMaximumSize(QSize(16777215, 70));
        lblKlachtenBijHetBEGINVanDeAanval->setFont(font);

        formLayout_3->setWidget(12, QFormLayout::LabelRole, lblKlachtenBijHetBEGINVanDeAanval);

        chkStoornissenVanHetZicht = new QCheckBox(HoofdpijnToevoegen);
        chkStoornissenVanHetZicht->setObjectName(QString::fromUtf8("chkStoornissenVanHetZicht"));

        formLayout_3->setWidget(13, QFormLayout::LabelRole, chkStoornissenVanHetZicht);

        chkTintelingen = new QCheckBox(HoofdpijnToevoegen);
        chkTintelingen->setObjectName(QString::fromUtf8("chkTintelingen"));

        formLayout_3->setWidget(14, QFormLayout::LabelRole, chkTintelingen);

        chkSpraakstoornissen = new QCheckBox(HoofdpijnToevoegen);
        chkSpraakstoornissen->setObjectName(QString::fromUtf8("chkSpraakstoornissen"));

        formLayout_3->setWidget(16, QFormLayout::LabelRole, chkSpraakstoornissen);

        chkDoofGevoel = new QCheckBox(HoofdpijnToevoegen);
        chkDoofGevoel->setObjectName(QString::fromUtf8("chkDoofGevoel"));

        formLayout_3->setWidget(15, QFormLayout::LabelRole, chkDoofGevoel);

        buttonBox = new QDialogButtonBox(HoofdpijnToevoegen);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        formLayout_3->setWidget(19, QFormLayout::FieldRole, buttonBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_3->setItem(18, QFormLayout::FieldRole, verticalSpacer);


        gridLayout_2->addLayout(formLayout_3, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        lblUitlokkendeFactoren = new QLabel(HoofdpijnToevoegen);
        lblUitlokkendeFactoren->setObjectName(QString::fromUtf8("lblUitlokkendeFactoren"));
        lblUitlokkendeFactoren->setMaximumSize(QSize(16777215, 70));
        lblUitlokkendeFactoren->setFont(font);

        formLayout_6->setWidget(0, QFormLayout::LabelRole, lblUitlokkendeFactoren);

        chkMaandstonden = new QCheckBox(HoofdpijnToevoegen);
        chkMaandstonden->setObjectName(QString::fromUtf8("chkMaandstonden"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, chkMaandstonden);

        chkVerminderingVanLevensritme = new QCheckBox(HoofdpijnToevoegen);
        chkVerminderingVanLevensritme->setObjectName(QString::fromUtf8("chkVerminderingVanLevensritme"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, chkVerminderingVanLevensritme);

        chkVoedingsstoffenOfDrank = new QCheckBox(HoofdpijnToevoegen);
        chkVoedingsstoffenOfDrank->setObjectName(QString::fromUtf8("chkVoedingsstoffenOfDrank"));

        formLayout_6->setWidget(3, QFormLayout::LabelRole, chkVoedingsstoffenOfDrank);

        chkStress = new QCheckBox(HoofdpijnToevoegen);
        chkStress->setObjectName(QString::fromUtf8("chkStress"));

        formLayout_6->setWidget(4, QFormLayout::LabelRole, chkStress);

        lblAndereTriggers = new QLabel(HoofdpijnToevoegen);
        lblAndereTriggers->setObjectName(QString::fromUtf8("lblAndereTriggers"));

        formLayout_6->setWidget(5, QFormLayout::LabelRole, lblAndereTriggers);

        inputAndereTriggers = new QLineEdit(HoofdpijnToevoegen);
        inputAndereTriggers->setObjectName(QString::fromUtf8("inputAndereTriggers"));

        formLayout_6->setWidget(5, QFormLayout::FieldRole, inputAndereTriggers);

        lblIngenomenMedicatie = new QLabel(HoofdpijnToevoegen);
        lblIngenomenMedicatie->setObjectName(QString::fromUtf8("lblIngenomenMedicatie"));
        lblIngenomenMedicatie->setMaximumSize(QSize(16777215, 70));
        lblIngenomenMedicatie->setFont(font);

        formLayout_6->setWidget(6, QFormLayout::LabelRole, lblIngenomenMedicatie);

        lblIngenomenMedicatieDetails = new QLabel(HoofdpijnToevoegen);
        lblIngenomenMedicatieDetails->setObjectName(QString::fromUtf8("lblIngenomenMedicatieDetails"));

        formLayout_6->setWidget(6, QFormLayout::FieldRole, lblIngenomenMedicatieDetails);

        lblGeneesmiddel1 = new QLabel(HoofdpijnToevoegen);
        lblGeneesmiddel1->setObjectName(QString::fromUtf8("lblGeneesmiddel1"));

        formLayout_6->setWidget(7, QFormLayout::LabelRole, lblGeneesmiddel1);

        inputGeneesmiddel1 = new QLineEdit(HoofdpijnToevoegen);
        inputGeneesmiddel1->setObjectName(QString::fromUtf8("inputGeneesmiddel1"));

        formLayout_6->setWidget(7, QFormLayout::FieldRole, inputGeneesmiddel1);

        lblGeneesmiddel2 = new QLabel(HoofdpijnToevoegen);
        lblGeneesmiddel2->setObjectName(QString::fromUtf8("lblGeneesmiddel2"));

        formLayout_6->setWidget(8, QFormLayout::LabelRole, lblGeneesmiddel2);

        inputGeneesmiddel2 = new QLineEdit(HoofdpijnToevoegen);
        inputGeneesmiddel2->setObjectName(QString::fromUtf8("inputGeneesmiddel2"));

        formLayout_6->setWidget(8, QFormLayout::FieldRole, inputGeneesmiddel2);

        lblGeneesmiddel3 = new QLabel(HoofdpijnToevoegen);
        lblGeneesmiddel3->setObjectName(QString::fromUtf8("lblGeneesmiddel3"));

        formLayout_6->setWidget(9, QFormLayout::LabelRole, lblGeneesmiddel3);

        inputGeneesmiddel3 = new QLineEdit(HoofdpijnToevoegen);
        inputGeneesmiddel3->setObjectName(QString::fromUtf8("inputGeneesmiddel3"));

        formLayout_6->setWidget(9, QFormLayout::FieldRole, inputGeneesmiddel3);

        lblGeneesmiddel4 = new QLabel(HoofdpijnToevoegen);
        lblGeneesmiddel4->setObjectName(QString::fromUtf8("lblGeneesmiddel4"));

        formLayout_6->setWidget(10, QFormLayout::LabelRole, lblGeneesmiddel4);

        inputGeneesmiddel4 = new QLineEdit(HoofdpijnToevoegen);
        inputGeneesmiddel4->setObjectName(QString::fromUtf8("inputGeneesmiddel4"));

        formLayout_6->setWidget(10, QFormLayout::FieldRole, inputGeneesmiddel4);

        lblInvloedOpDeActiviteiten = new QLabel(HoofdpijnToevoegen);
        lblInvloedOpDeActiviteiten->setObjectName(QString::fromUtf8("lblInvloedOpDeActiviteiten"));
        lblInvloedOpDeActiviteiten->setMaximumSize(QSize(16777215, 35));
        lblInvloedOpDeActiviteiten->setFont(font);

        formLayout_6->setWidget(11, QFormLayout::LabelRole, lblInvloedOpDeActiviteiten);

        label_6 = new QLabel(HoofdpijnToevoegen);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_6->setWidget(19, QFormLayout::LabelRole, label_6);

        lblTijdelijkOphoudenMetWerken = new QLabel(HoofdpijnToevoegen);
        lblTijdelijkOphoudenMetWerken->setObjectName(QString::fromUtf8("lblTijdelijkOphoudenMetWerken"));

        formLayout_6->setWidget(12, QFormLayout::LabelRole, lblTijdelijkOphoudenMetWerken);

        spnTijdelijkOphoudenMetWerken = new QSpinBox(HoofdpijnToevoegen);
        spnTijdelijkOphoudenMetWerken->setObjectName(QString::fromUtf8("spnTijdelijkOphoudenMetWerken"));
        spnTijdelijkOphoudenMetWerken->setMaximumSize(QSize(70, 16777215));
        spnTijdelijkOphoudenMetWerken->setMaximum(31);

        formLayout_6->setWidget(12, QFormLayout::FieldRole, spnTijdelijkOphoudenMetWerken);

        chkVerstoordFamiliaalLeven = new QCheckBox(HoofdpijnToevoegen);
        chkVerstoordFamiliaalLeven->setObjectName(QString::fromUtf8("chkVerstoordFamiliaalLeven"));

        formLayout_6->setWidget(13, QFormLayout::LabelRole, chkVerstoordFamiliaalLeven);

        chkVerstoordeVrijetijdsactiviteiten = new QCheckBox(HoofdpijnToevoegen);
        chkVerstoordeVrijetijdsactiviteiten->setObjectName(QString::fromUtf8("chkVerstoordeVrijetijdsactiviteiten"));

        formLayout_6->setWidget(14, QFormLayout::LabelRole, chkVerstoordeVrijetijdsactiviteiten);

        lblDuurVanDeAanval = new QLabel(HoofdpijnToevoegen);
        lblDuurVanDeAanval->setObjectName(QString::fromUtf8("lblDuurVanDeAanval"));
        lblDuurVanDeAanval->setMaximumSize(QSize(16777215, 35));
        lblDuurVanDeAanval->setFont(font);

        formLayout_6->setWidget(15, QFormLayout::LabelRole, lblDuurVanDeAanval);

        label_17 = new QLabel(HoofdpijnToevoegen);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout_6->setWidget(16, QFormLayout::LabelRole, label_17);

        inputDuurVanDeAanval = new QLineEdit(HoofdpijnToevoegen);
        inputDuurVanDeAanval->setObjectName(QString::fromUtf8("inputDuurVanDeAanval"));

        formLayout_6->setWidget(16, QFormLayout::FieldRole, inputDuurVanDeAanval);

        lblDatumVanDeAanval = new QLabel(HoofdpijnToevoegen);
        lblDatumVanDeAanval->setObjectName(QString::fromUtf8("lblDatumVanDeAanval"));

        formLayout_6->setWidget(17, QFormLayout::LabelRole, lblDatumVanDeAanval);

        dateDatumVanDeAanval = new QDateEdit(HoofdpijnToevoegen);
        dateDatumVanDeAanval->setObjectName(QString::fromUtf8("dateDatumVanDeAanval"));
        dateDatumVanDeAanval->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        dateDatumVanDeAanval->setCalendarPopup(true);

        formLayout_6->setWidget(17, QFormLayout::FieldRole, dateDatumVanDeAanval);

        textBrowser = new QTextBrowser(HoofdpijnToevoegen);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);
        textBrowser->setMinimumSize(QSize(670, 250));

        formLayout_6->setWidget(18, QFormLayout::FieldRole, textBrowser);


        gridLayout_5->addLayout(formLayout_6, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_5);

        QWidget::setTabOrder(spnbxErnstVanDeHoofdpijn, chkAanEenZijde);
        QWidget::setTabOrder(chkAanEenZijde, chkKloppendeHoofdpijn);
        QWidget::setTabOrder(chkKloppendeHoofdpijn, chkHindertDagelijkseActiviteiten);
        QWidget::setTabOrder(chkHindertDagelijkseActiviteiten, chkVerergertMetBeweging);
        QWidget::setTabOrder(chkVerergertMetBeweging, inputAndereKenmerken);
        QWidget::setTabOrder(inputAndereKenmerken, chkBraakneigingen);
        QWidget::setTabOrder(chkBraakneigingen, chkBrakenOvergeven);
        QWidget::setTabOrder(chkBrakenOvergeven, chkOvergevoeligVoorLicht);
        QWidget::setTabOrder(chkOvergevoeligVoorLicht, chkOvergevoeligVoorGeluid);
        QWidget::setTabOrder(chkOvergevoeligVoorGeluid, chkStoornissenVanHetZicht);
        QWidget::setTabOrder(chkStoornissenVanHetZicht, chkTintelingen);
        QWidget::setTabOrder(chkTintelingen, chkDoofGevoel);
        QWidget::setTabOrder(chkDoofGevoel, chkSpraakstoornissen);
        QWidget::setTabOrder(chkSpraakstoornissen, chkMaandstonden);
        QWidget::setTabOrder(chkMaandstonden, chkVerminderingVanLevensritme);
        QWidget::setTabOrder(chkVerminderingVanLevensritme, chkVoedingsstoffenOfDrank);
        QWidget::setTabOrder(chkVoedingsstoffenOfDrank, chkStress);
        QWidget::setTabOrder(chkStress, inputAndereTriggers);
        QWidget::setTabOrder(inputAndereTriggers, inputGeneesmiddel1);
        QWidget::setTabOrder(inputGeneesmiddel1, inputGeneesmiddel2);
        QWidget::setTabOrder(inputGeneesmiddel2, inputGeneesmiddel3);
        QWidget::setTabOrder(inputGeneesmiddel3, inputGeneesmiddel4);
        QWidget::setTabOrder(inputGeneesmiddel4, spnTijdelijkOphoudenMetWerken);
        QWidget::setTabOrder(spnTijdelijkOphoudenMetWerken, chkVerstoordFamiliaalLeven);
        QWidget::setTabOrder(chkVerstoordFamiliaalLeven, chkVerstoordeVrijetijdsactiviteiten);
        QWidget::setTabOrder(chkVerstoordeVrijetijdsactiviteiten, inputDuurVanDeAanval);

        retranslateUi(HoofdpijnToevoegen);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, HoofdpijnToevoegen, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, HoofdpijnToevoegen, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(HoofdpijnToevoegen);
    } // setupUi

    void retranslateUi(QDialog *HoofdpijnToevoegen)
    {
        HoofdpijnToevoegen->setWindowTitle(QCoreApplication::translate("HoofdpijnToevoegen", "Hoofdpijn Toevoegen", nullptr));
        lblKenmerken->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Kenmerken van de hoofdpijn", nullptr));
        lblErnstVanDeHoofdpijn->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Ernst van de Hoofdpijn", nullptr));
        chkAanEenZijde->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Aan \303\251\303\251n zijde (L of R)", nullptr));
        chkKloppendeHoofdpijn->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Kloppende hoofdpijn", nullptr));
        chkHindertDagelijkseActiviteiten->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Hindert de dagelijkse activiteit", nullptr));
        chkVerergertMetBeweging->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Verergert met beweging", nullptr));
        lblAndereKenmerken->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Andere (preciseer)", nullptr));
        lblSymptomenDieDeHoofdpijnBegeleiden->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Symptomen die de hoofdpijn \n"
"begeleiden", nullptr));
        chkBraakneigingen->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Braakneigingen", nullptr));
        chkBrakenOvergeven->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Braken / Overgeven", nullptr));
        chkOvergevoeligVoorLicht->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Overgevoelig voor licht", nullptr));
        chkOvergevoeligVoorGeluid->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Overgevoelig voor Geluid", nullptr));
        lblKlachtenBijHetBEGINVanDeAanval->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Klachten bij het BEGIN \n"
"van de aanval", nullptr));
        chkStoornissenVanHetZicht->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Stoornissen van het zicht (L of R)", nullptr));
        chkTintelingen->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Tintelingen (L of R)", nullptr));
        chkSpraakstoornissen->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Spraakstoornissen", nullptr));
        chkDoofGevoel->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Doof gevoel (L of R) (handen/gelaat)", nullptr));
        lblUitlokkendeFactoren->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Uitlokkende factoren", nullptr));
        chkMaandstonden->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Maandstonden", nullptr));
        chkVerminderingVanLevensritme->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Vermindering van levensritme", nullptr));
        chkVoedingsstoffenOfDrank->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Voedingsstoffen of drank", nullptr));
        chkStress->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Stress", nullptr));
        lblAndereTriggers->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Andere (preciseer)", nullptr));
        lblIngenomenMedicatie->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Ingenomen medicatie", nullptr));
        lblIngenomenMedicatieDetails->setText(QCoreApplication::translate("HoofdpijnToevoegen", "(naam, aantal, eenheden, toegediende vorm)", nullptr));
        lblGeneesmiddel1->setText(QCoreApplication::translate("HoofdpijnToevoegen", "1ste geneesmiddel", nullptr));
        lblGeneesmiddel2->setText(QCoreApplication::translate("HoofdpijnToevoegen", "2de geneesmiddel", nullptr));
        lblGeneesmiddel3->setText(QCoreApplication::translate("HoofdpijnToevoegen", "3de geneesmiddel", nullptr));
        lblGeneesmiddel4->setText(QCoreApplication::translate("HoofdpijnToevoegen", "4de geneesmiddel", nullptr));
        lblInvloedOpDeActiviteiten->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Invloed op de activiteiten", nullptr));
        label_6->setText(QString());
        lblTijdelijkOphoudenMetWerken->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Tijdelijk ophouden met werken (dagen)", nullptr));
        chkVerstoordFamiliaalLeven->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Verstoord familiaal leven", nullptr));
        chkVerstoordeVrijetijdsactiviteiten->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Verstoorde vrijetijdsactiviteiten", nullptr));
        lblDuurVanDeAanval->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Duur van de aanval", nullptr));
        label_17->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Aantal uren of dagen", nullptr));
        lblDatumVanDeAanval->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Datum van de aanval", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("HoofdpijnToevoegen", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Lijst van geneesmiddelen tegen hoofdpijn</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">AM: Mono-analgetica <span style=\" font-style:italic;\">(Aspirine</span><span style=\" font-family:'Helvetica','Nimbus Sans L','Arial','Liberation Sans','sans-serif'; font-size:16px; font-weight:600; color:#545454; background-color:#ffffff;\">\302\256</span><span style=\" font-style:italic;\">, Sedergine</span><span style=\" font-family:'Helvetica','Nimb"
                        "us Sans L','Arial','Liberation Sans','sans-serif'; font-size:16px; font-weight:600; color:#545454; background-color:#ffffff;\">\302\256</span><span style=\" font-style:italic;\">, Dafalgan</span><span style=\" font-family:'Helvetica','Nimbus Sans L','Arial','Liberation Sans','sans-serif'; font-size:16px; font-weight:600; color:#545454; background-color:#ffffff;\">\302\256</span><span style=\" font-style:italic;\">, Perdolan mono</span><span style=\" font-family:'Helvetica','Nimbus Sans L','Arial','Liberation Sans','sans-serif'; font-size:16px; font-weight:600; color:#545454; background-color:#ffffff;\">\302\256</span><span style=\" font-style:italic;\">, Panadol</span><span style=\" font-family:'Helvetica','Nimbus Sans L','Arial','Liberation Sans','sans-serif'; font-size:16px; font-weight:600; color:#545454; background-color:#ffffff;\">\302\256</span><span style=\" font-style:italic;\">, Panadol Plus</span><span style=\" font-family:'Helvetica','Nimbus Sans L','Arial','Liberation Sans','sans-serif'; font-size:"
                        "16px; font-weight:600; color:#545454; background-color:#ffffff;\">\302\256</span><span style=\" font-style:italic;\">, ...)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">AB: Combinatieanalgetica <span style=\" font-style:italic;\">(Perdolan</span><span style=\" font-family:'Helvetica','Nimbus Sans L','Arial','Liberation Sans','sans-serif'; font-size:16px; font-weight:600; color:#545454; background-color:#ffffff;\">\302\256</span><span style=\" font-style:italic;\">, Dafalgan code\303\257ne</span><span style=\" font-family:'Helvetica','Nimbus Sans L','Arial','Liberation Sans','sans-serif'; font-size:16px; font-weight:600; color:#545454; background-color:#ffffff;\">\302\256</span><span style=\" font-style:italic;\">, Saridon</span><span style=\" font-family:'Helvetica','Nimbus Sans L','Arial','Liberation Sans','sans-serif'; font-size:16px; font-weight:600; color:#545454; background-color:#ffffff;\">\302\256</span><span styl"
                        "e=\" font-style:italic;\">, Panadol code\303\257ne</span><span style=\" font-family:'Helvetica','Nimbus Sans L','Arial','Liberation Sans','sans-serif'; font-size:16px; font-weight:600; color:#545454; background-color:#ffffff;\">\302\256</span><span style=\" font-style:italic;\">,...)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">AI: Anti-inflammatoire <span style=\" font-style:italic;\">(Apranax</span><span style=\" font-family:'Helvetica','Nimbus Sans L','Arial','Liberation Sans','sans-serif'; font-size:16px; font-weight:600; color:#545454; background-color:#ffffff;\">\302\256</span><span style=\" font-style:italic;\">)</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">MK: Migraine Kranit<span style=\" font-family:'Helvetica','Nimbus Sans L','Arial','Liberation Sans','sans-serif'; font-size:16px; font-weight:600; color:#545454; backgrou"
                        "nd-color:#ffffff;\">\302\256</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">MP: Migpriv<span style=\" font-family:'Helvetica','Nimbus Sans L','Arial','Liberation Sans','sans-serif'; font-size:16px; font-weight:600; color:#545454; background-color:#ffffff;\">\302\256</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">C: Cafergot<span style=\" font-family:'Helvetica','Nimbus Sans L','Arial','Liberation Sans','sans-serif'; font-size:16px; font-weight:600; color:#545454; background-color:#ffffff;\">\302\256</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">D: Diergo Spray<span style=\" font-family:'Helvetica','Nimbus Sans L','Arial','Liberation Sans','sans-serif'; font-size:16px; font-weight:600; color:#545454; background-color:#ffffff;\">\302\256</span></p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">I: Imitrex<span style=\" font-family:'Helvetica','Nimbus Sans L','Arial','Liberation Sans','sans-serif'; font-size:16px; font-weight:600; color:#545454; background-color:#ffffff;\">\302\256</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">N: Naramig<span style=\" font-family:'Helvetica','Nimbus Sans L','Arial','Liberation Sans','sans-serif'; font-size:16px; font-weight:600; color:#545454; background-color:#ffffff;\">\302\256</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Z: Zomig<span style=\" font-family:'Helvetica','Nimbus Sans L','Arial','Liberation Sans','sans-serif'; font-size:16px; font-weight:600; color:#545454; background-color:#ffffff;\">\302\256</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0"
                        "px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HoofdpijnToevoegen: public Ui_HoofdpijnToevoegen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOOFDPIJNTOEVOEGEN_H
