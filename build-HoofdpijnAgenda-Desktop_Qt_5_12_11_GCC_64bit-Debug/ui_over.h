/********************************************************************************
** Form generated from reading UI file 'over.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVER_H
#define UI_OVER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Over
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_5;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Over)
    {
        if (Over->objectName().isEmpty())
            Over->setObjectName(QString::fromUtf8("Over"));
        Over->setWindowModality(Qt::ApplicationModal);
        Over->resize(609, 343);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/HoofdpijnAgenda.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Over->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(Over);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(Over);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(200, 161));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/images/HoofdpijnAgenda.jpg")));
        label_3->setScaledContents(true);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 2, 1, 1);

        label = new QLabel(Over);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(250, 0));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label_5 = new QLabel(Over);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setTextInteractionFlags(Qt::LinksAccessibleByKeyboard|Qt::LinksAccessibleByMouse);

        verticalLayout->addWidget(label_5);

        label_2 = new QLabel(Over);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        buttonBox = new QDialogButtonBox(Over);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Over);
        QObject::connect(buttonBox, SIGNAL(accepted()), Over, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Over, SLOT(reject()));

        QMetaObject::connectSlotsByName(Over);
    } // setupUi

    void retranslateUi(QDialog *Over)
    {
        Over->setWindowTitle(QApplication::translate("Over", "Over Hoofdpijnagenda Versie 3", nullptr));
        label_3->setText(QString());
        label->setText(QApplication::translate("Over", "Over Hoofdpijnagenda", nullptr));
        label_5->setText(QApplication::translate("Over", "Hoofdpijn Agenda is een persoonlijke hoofdpijn agenda gebaseerd op de Hoofdpijn Agenda van de \n"
"Belgian Headache Society (http://www.belgianheadachesociety.be) en de Belgische Hoofdpijn Liga (https://www.hoofdpijnen-belgie.be).", nullptr));
        label_2->setText(QApplication::translate("Over", "Hoofdpijn Agenda Auteursrecht (C) 2021 Patrick Kox\n"
"\n"
"Er zit ABSOLUUT GEEN GARANTIE op dit programma.\n"
"\n"
"Dit is vrije software en je bent van harte uitgenodigd om het te herdistribueren\n"
"onder bepaalde voorwaarden.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Over: public Ui_Over {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVER_H
