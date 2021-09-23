/********************************************************************************
** Form generated from reading UI file 'over.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVER_H
#define UI_OVER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_Over
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Over)
    {
        if (Over->objectName().isEmpty())
            Over->setObjectName(QString::fromUtf8("Over"));
        Over->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/HoofdpijnAgenda.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Over->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(Over);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        retranslateUi(Over);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Over, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Over, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Over);
    } // setupUi

    void retranslateUi(QDialog *Over)
    {
        Over->setWindowTitle(QCoreApplication::translate("Over", "Over Hoofdpijnagenda", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Over: public Ui_Over {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVER_H
