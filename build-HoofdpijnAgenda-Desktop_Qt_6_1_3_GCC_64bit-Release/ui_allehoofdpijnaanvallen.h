/********************************************************************************
** Form generated from reading UI file 'allehoofdpijnaanvallen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLEHOOFDPIJNAANVALLEN_H
#define UI_ALLEHOOFDPIJNAANVALLEN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AlleHoofdpijnAanvallen
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableRecenteAanvallen;
    QTextBrowser *textBrowser;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AlleHoofdpijnAanvallen)
    {
        if (AlleHoofdpijnAanvallen->objectName().isEmpty())
            AlleHoofdpijnAanvallen->setObjectName(QString::fromUtf8("AlleHoofdpijnAanvallen"));
        AlleHoofdpijnAanvallen->resize(1490, 900);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AlleHoofdpijnAanvallen->sizePolicy().hasHeightForWidth());
        AlleHoofdpijnAanvallen->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Icon_new.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        AlleHoofdpijnAanvallen->setWindowIcon(icon);
        AlleHoofdpijnAanvallen->setModal(true);
        verticalLayout = new QVBoxLayout(AlleHoofdpijnAanvallen);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableRecenteAanvallen = new QTableWidget(AlleHoofdpijnAanvallen);
        tableRecenteAanvallen->setObjectName(QString::fromUtf8("tableRecenteAanvallen"));

        verticalLayout->addWidget(tableRecenteAanvallen);

        textBrowser = new QTextBrowser(AlleHoofdpijnAanvallen);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(textBrowser);

        buttonBox = new QDialogButtonBox(AlleHoofdpijnAanvallen);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AlleHoofdpijnAanvallen);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AlleHoofdpijnAanvallen, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AlleHoofdpijnAanvallen, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AlleHoofdpijnAanvallen);
    } // setupUi

    void retranslateUi(QDialog *AlleHoofdpijnAanvallen)
    {
        AlleHoofdpijnAanvallen->setWindowTitle(QCoreApplication::translate("AlleHoofdpijnAanvallen", "Alle Hoofdpijn Aanvallen", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("AlleHoofdpijnAanvallen", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Legende:								Lijst van geneesmiddelen tegen hoofdpijn:		Tablet: TAB</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">U: Aan \303\251\303\251n zijde		K: Kloppend					AM: Mono-analgetica				Zetpil: ZP</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">H: Hindert de dagelijkse activiteit	V: Verergert met beweging			AB: Combinatieanalgetica				Neusspray: NS</p>\n"
"<p style=\" margin-top:0px; margin-bottom:"
                        "0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">N: Braakneigingen		O: Braken / Overgeven				AI: Anti-inflamatoire				Injectie: INJ</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">L: Overgevoelig voor licht		B: Overgevoelig voor geluid			MK: Migraine Kranit</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">S: Stoornissen van het zicht	T: Tintelingen				MP: Migpriv</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">D: Doof gevoel		P: Spraakstoornissen				C: Cafergot</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">R: Maandstonden		C: Vermindering van levensritme			D: Diergo Spray</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -"
                        "qt-block-indent:0; text-indent:0px;\">V: Voedingsstoffen of drank	S: Stress					I: Imitrex</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">J: Tijdelijk ophouden met werken	F: Verstoord familiaal leven			N: Naramig</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">L: Verstoorde vrijetijdsactiviteiten						Z: Zomig</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlleHoofdpijnAanvallen: public Ui_AlleHoofdpijnAanvallen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLEHOOFDPIJNAANVALLEN_H
