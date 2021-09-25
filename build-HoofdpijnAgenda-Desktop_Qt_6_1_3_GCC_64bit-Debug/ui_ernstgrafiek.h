/********************************************************************************
** Form generated from reading UI file 'ernstgrafiek.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERNSTGRAFIEK_H
#define UI_ERNSTGRAFIEK_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ErnstGrafiek
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ErnstGrafiek)
    {
        if (ErnstGrafiek->objectName().isEmpty())
            ErnstGrafiek->setObjectName(QString::fromUtf8("ErnstGrafiek"));
        ErnstGrafiek->resize(500, 500);
        ErnstGrafiek->setMinimumSize(QSize(500, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Icon1.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        ErnstGrafiek->setWindowIcon(icon);
        ErnstGrafiek->setModal(true);
        verticalLayout = new QVBoxLayout(ErnstGrafiek);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalFrame = new QFrame(ErnstGrafiek);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout->addWidget(horizontalFrame);

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
        ErnstGrafiek->setWindowTitle(QCoreApplication::translate("ErnstGrafiek", "Grafiek Ernst van de hoofdpijnen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ErnstGrafiek: public Ui_ErnstGrafiek {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERNSTGRAFIEK_H
