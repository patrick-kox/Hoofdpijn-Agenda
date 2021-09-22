/********************************************************************************
** Form generated from reading UI file 'recentehoofdpijnaanvallen.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECENTEHOOFDPIJNAANVALLEN_H
#define UI_RECENTEHOOFDPIJNAANVALLEN_H

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

class Ui_RecenteHoofdpijnaanvallen
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableRecenteAanvallen;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RecenteHoofdpijnaanvallen)
    {
        if (RecenteHoofdpijnaanvallen->objectName().isEmpty())
            RecenteHoofdpijnaanvallen->setObjectName(QString::fromUtf8("RecenteHoofdpijnaanvallen"));
        RecenteHoofdpijnaanvallen->resize(1440, 900);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RecenteHoofdpijnaanvallen->sizePolicy().hasHeightForWidth());
        RecenteHoofdpijnaanvallen->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Icon_new.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        RecenteHoofdpijnaanvallen->setWindowIcon(icon);
        RecenteHoofdpijnaanvallen->setModal(true);
        verticalLayout = new QVBoxLayout(RecenteHoofdpijnaanvallen);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableRecenteAanvallen = new QTableWidget(RecenteHoofdpijnaanvallen);
        if (tableRecenteAanvallen->columnCount() < 29)
            tableRecenteAanvallen->setColumnCount(29);
        tableRecenteAanvallen->setObjectName(QString::fromUtf8("tableRecenteAanvallen"));
        tableRecenteAanvallen->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tableRecenteAanvallen->setWordWrap(false);
        tableRecenteAanvallen->setColumnCount(29);

        verticalLayout->addWidget(tableRecenteAanvallen);

        buttonBox = new QDialogButtonBox(RecenteHoofdpijnaanvallen);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RecenteHoofdpijnaanvallen);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, RecenteHoofdpijnaanvallen, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, RecenteHoofdpijnaanvallen, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(RecenteHoofdpijnaanvallen);
    } // setupUi

    void retranslateUi(QDialog *RecenteHoofdpijnaanvallen)
    {
        RecenteHoofdpijnaanvallen->setWindowTitle(QCoreApplication::translate("RecenteHoofdpijnaanvallen", "Meest Recente Hofdpijnaanvallen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RecenteHoofdpijnaanvallen: public Ui_RecenteHoofdpijnaanvallen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECENTEHOOFDPIJNAANVALLEN_H
