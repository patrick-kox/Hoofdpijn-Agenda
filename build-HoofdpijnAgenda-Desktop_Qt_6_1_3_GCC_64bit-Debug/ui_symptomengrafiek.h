/********************************************************************************
** Form generated from reading UI file 'symptomengrafiek.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYMPTOMENGRAFIEK_H
#define UI_SYMPTOMENGRAFIEK_H

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

class Ui_SymptomenGrafiek
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *horizontalFrame;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SymptomenGrafiek)
    {
        if (SymptomenGrafiek->objectName().isEmpty())
            SymptomenGrafiek->setObjectName(QString::fromUtf8("SymptomenGrafiek"));
        SymptomenGrafiek->resize(1000, 848);
        SymptomenGrafiek->setMinimumSize(QSize(1000, 848));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Icon2.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        SymptomenGrafiek->setWindowIcon(icon);
        SymptomenGrafiek->setModal(true);
        verticalLayout_2 = new QVBoxLayout(SymptomenGrafiek);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalFrame = new QFrame(SymptomenGrafiek);
        horizontalFrame->setObjectName(QString::fromUtf8("horizontalFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(horizontalFrame->sizePolicy().hasHeightForWidth());
        horizontalFrame->setSizePolicy(sizePolicy);
        horizontalFrame->setMinimumSize(QSize(980, 800));
        horizontalFrame->setMaximumSize(QSize(980, 800));
        horizontalLayout = new QHBoxLayout(horizontalFrame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        verticalLayout_2->addWidget(horizontalFrame);

        buttonBox = new QDialogButtonBox(SymptomenGrafiek);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);
        buttonBox->setCenterButtons(true);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(SymptomenGrafiek);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SymptomenGrafiek, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SymptomenGrafiek, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SymptomenGrafiek);
    } // setupUi

    void retranslateUi(QDialog *SymptomenGrafiek)
    {
        SymptomenGrafiek->setWindowTitle(QCoreApplication::translate("SymptomenGrafiek", "Grafiek met symptomen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SymptomenGrafiek: public Ui_SymptomenGrafiek {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYMPTOMENGRAFIEK_H
