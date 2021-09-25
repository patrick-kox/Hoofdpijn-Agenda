/********************************************************************************
** Form generated from reading UI file 'ernstgrafiek.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERNSTGRAFIEK_H
#define UI_ERNSTGRAFIEK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ErnstGrafiek
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ErnstGrafiek)
    {
        if (ErnstGrafiek->objectName().isEmpty())
            ErnstGrafiek->setObjectName(QString::fromUtf8("ErnstGrafiek"));
        ErnstGrafiek->resize(400, 300);
        verticalLayout = new QVBoxLayout(ErnstGrafiek);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(ErnstGrafiek);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ErnstGrafiek);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ErnstGrafiek, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ErnstGrafiek, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ErnstGrafiek);
    } // setupUi

    void retranslateUi(QDialog *ErnstGrafiek)
    {
        ErnstGrafiek->setWindowTitle(QCoreApplication::translate("ErnstGrafiek", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ErnstGrafiek: public Ui_ErnstGrafiek {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERNSTGRAFIEK_H
