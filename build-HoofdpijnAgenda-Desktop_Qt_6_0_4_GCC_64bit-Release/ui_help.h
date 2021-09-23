/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QString::fromUtf8("Help"));
        Help->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/HoofdpijnAgenda.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Help->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(Help);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        retranslateUi(Help);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Help, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Help, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QDialog *Help)
    {
        Help->setWindowTitle(QCoreApplication::translate("Help", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
