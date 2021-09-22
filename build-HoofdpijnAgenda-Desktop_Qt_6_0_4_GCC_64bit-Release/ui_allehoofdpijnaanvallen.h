/********************************************************************************
** Form generated from reading UI file 'allehoofdpijnaanvallen.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AlleHoofdpijnAanvallen
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableRecenteAanvallen;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AlleHoofdpijnAanvallen)
    {
        if (AlleHoofdpijnAanvallen->objectName().isEmpty())
            AlleHoofdpijnAanvallen->setObjectName(QString::fromUtf8("AlleHoofdpijnAanvallen"));
        AlleHoofdpijnAanvallen->resize(2130, 1370);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
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
    } // retranslateUi

};

namespace Ui {
    class AlleHoofdpijnAanvallen: public Ui_AlleHoofdpijnAanvallen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLEHOOFDPIJNAANVALLEN_H
