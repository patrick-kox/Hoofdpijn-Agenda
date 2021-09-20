/********************************************************************************
** Form generated from reading UI file 'gebruikersgegevens.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEBRUIKERSGEGEVENS_H
#define UI_GEBRUIKERSGEGEVENS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GebruikersGegevens
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *lblVoornaam;
    QLineEdit *inputVoornaam;
    QLabel *lblAchternaam;
    QLineEdit *inputAchternaam;
    QLabel *label;
    QLineEdit *inputGeslacht;
    QLabel *label_2;
    QLineEdit *inputStraat;
    QLabel *label_3;
    QLineEdit *inputNummer;
    QLabel *label_4;
    QLineEdit *inputGemeente;
    QLabel *label_5;
    QLineEdit *inputPostcode;
    QLabel *label_6;
    QLineEdit *inputLeeftijd;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GebruikersGegevens)
    {
        if (GebruikersGegevens->objectName().isEmpty())
            GebruikersGegevens->setObjectName(QString::fromUtf8("GebruikersGegevens"));
        GebruikersGegevens->setWindowModality(Qt::WindowModal);
        GebruikersGegevens->resize(550, 401);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/site-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        GebruikersGegevens->setWindowIcon(icon);
        GebruikersGegevens->setModal(true);
        verticalLayout = new QVBoxLayout(GebruikersGegevens);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(20, 20, 20, 20);
        lblVoornaam = new QLabel(GebruikersGegevens);
        lblVoornaam->setObjectName(QString::fromUtf8("lblVoornaam"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lblVoornaam);

        inputVoornaam = new QLineEdit(GebruikersGegevens);
        inputVoornaam->setObjectName(QString::fromUtf8("inputVoornaam"));
        inputVoornaam->setMinimumSize(QSize(100, 0));
        inputVoornaam->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, inputVoornaam);

        lblAchternaam = new QLabel(GebruikersGegevens);
        lblAchternaam->setObjectName(QString::fromUtf8("lblAchternaam"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lblAchternaam);

        inputAchternaam = new QLineEdit(GebruikersGegevens);
        inputAchternaam->setObjectName(QString::fromUtf8("inputAchternaam"));
        inputAchternaam->setMinimumSize(QSize(100, 0));
        inputAchternaam->setMaximumSize(QSize(100, 16777215));

        formLayout->setWidget(1, QFormLayout::FieldRole, inputAchternaam);

        label = new QLabel(GebruikersGegevens);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        inputGeslacht = new QLineEdit(GebruikersGegevens);
        inputGeslacht->setObjectName(QString::fromUtf8("inputGeslacht"));
        inputGeslacht->setMinimumSize(QSize(25, 30));
        inputGeslacht->setMaximumSize(QSize(25, 30));
        inputGeslacht->setMaxLength(1);

        formLayout->setWidget(2, QFormLayout::FieldRole, inputGeslacht);

        label_2 = new QLabel(GebruikersGegevens);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        inputStraat = new QLineEdit(GebruikersGegevens);
        inputStraat->setObjectName(QString::fromUtf8("inputStraat"));
        inputStraat->setMinimumSize(QSize(250, 0));
        inputStraat->setMaximumSize(QSize(250, 16777215));
        inputStraat->setMaxLength(250);

        formLayout->setWidget(3, QFormLayout::FieldRole, inputStraat);

        label_3 = new QLabel(GebruikersGegevens);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        inputNummer = new QLineEdit(GebruikersGegevens);
        inputNummer->setObjectName(QString::fromUtf8("inputNummer"));
        inputNummer->setMinimumSize(QSize(25, 0));
        inputNummer->setMaximumSize(QSize(50, 16777215));
        inputNummer->setMaxLength(10);

        formLayout->setWidget(4, QFormLayout::FieldRole, inputNummer);

        label_4 = new QLabel(GebruikersGegevens);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_4);

        inputGemeente = new QLineEdit(GebruikersGegevens);
        inputGemeente->setObjectName(QString::fromUtf8("inputGemeente"));
        inputGemeente->setMinimumSize(QSize(250, 0));
        inputGemeente->setMaximumSize(QSize(250, 16777215));
        inputGemeente->setMaxLength(250);

        formLayout->setWidget(5, QFormLayout::FieldRole, inputGemeente);

        label_5 = new QLabel(GebruikersGegevens);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_5);

        inputPostcode = new QLineEdit(GebruikersGegevens);
        inputPostcode->setObjectName(QString::fromUtf8("inputPostcode"));
        inputPostcode->setMinimumSize(QSize(50, 0));
        inputPostcode->setMaximumSize(QSize(50, 16777215));
        inputPostcode->setMaxLength(25);

        formLayout->setWidget(6, QFormLayout::FieldRole, inputPostcode);

        label_6 = new QLabel(GebruikersGegevens);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_6);

        inputLeeftijd = new QLineEdit(GebruikersGegevens);
        inputLeeftijd->setObjectName(QString::fromUtf8("inputLeeftijd"));
        inputLeeftijd->setMinimumSize(QSize(25, 0));
        inputLeeftijd->setMaximumSize(QSize(25, 16777215));
        inputLeeftijd->setSizeIncrement(QSize(25, 0));
        inputLeeftijd->setMaxLength(3);

        formLayout->setWidget(7, QFormLayout::FieldRole, inputLeeftijd);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(GebruikersGegevens);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(inputVoornaam, inputAchternaam);
        QWidget::setTabOrder(inputAchternaam, inputGeslacht);
        QWidget::setTabOrder(inputGeslacht, inputStraat);
        QWidget::setTabOrder(inputStraat, inputNummer);
        QWidget::setTabOrder(inputNummer, inputGemeente);
        QWidget::setTabOrder(inputGemeente, inputPostcode);
        QWidget::setTabOrder(inputPostcode, inputLeeftijd);

        retranslateUi(GebruikersGegevens);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, GebruikersGegevens, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, GebruikersGegevens, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(GebruikersGegevens);
    } // setupUi

    void retranslateUi(QDialog *GebruikersGegevens)
    {
        GebruikersGegevens->setWindowTitle(QCoreApplication::translate("GebruikersGegevens", "Gebruikers Gegevens", nullptr));
        lblVoornaam->setText(QCoreApplication::translate("GebruikersGegevens", "Voornaam:", nullptr));
        lblAchternaam->setText(QCoreApplication::translate("GebruikersGegevens", "Achternaam:", nullptr));
        label->setText(QCoreApplication::translate("GebruikersGegevens", "Gerslacht:", nullptr));
        label_2->setText(QCoreApplication::translate("GebruikersGegevens", "Straat:", nullptr));
        label_3->setText(QCoreApplication::translate("GebruikersGegevens", "Nummer:", nullptr));
        label_4->setText(QCoreApplication::translate("GebruikersGegevens", "Gemeente:", nullptr));
        label_5->setText(QCoreApplication::translate("GebruikersGegevens", "Postcode:", nullptr));
        label_6->setText(QCoreApplication::translate("GebruikersGegevens", "Leeftijd:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GebruikersGegevens: public Ui_GebruikersGegevens {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEBRUIKERSGEGEVENS_H
