/********************************************************************************
** Form generated from reading UI file 'hoofdpijntoevoegen.ui'
**
** Created by: Qt User Interface Compiler version 6.0.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOOFDPIJNTOEVOEGEN_H
#define UI_HOOFDPIJNTOEVOEGEN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_HoofdpijnToevoegen
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QFormLayout *formLayout_3;
    QLabel *lblKenmerken;
    QLabel *label_10;
    QSpinBox *spinBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QGridLayout *gridLayout_5;
    QFormLayout *formLayout_6;
    QLabel *label_4;
    QGridLayout *gridLayout_6;
    QFormLayout *formLayout_10;
    QLabel *label_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HoofdpijnToevoegen)
    {
        if (HoofdpijnToevoegen->objectName().isEmpty())
            HoofdpijnToevoegen->setObjectName(QString::fromUtf8("HoofdpijnToevoegen"));
        HoofdpijnToevoegen->setWindowModality(Qt::WindowModal);
        HoofdpijnToevoegen->resize(1440, 900);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(HoofdpijnToevoegen->sizePolicy().hasHeightForWidth());
        HoofdpijnToevoegen->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/site-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        HoofdpijnToevoegen->setWindowIcon(icon);
        HoofdpijnToevoegen->setModal(true);
        horizontalLayout = new QHBoxLayout(HoofdpijnToevoegen);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        lblKenmerken = new QLabel(HoofdpijnToevoegen);
        lblKenmerken->setObjectName(QString::fromUtf8("lblKenmerken"));
        lblKenmerken->setMaximumSize(QSize(16777215, 35));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        lblKenmerken->setFont(font);
        lblKenmerken->setCursor(QCursor(Qt::ForbiddenCursor));
        lblKenmerken->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, lblKenmerken);

        label_10 = new QLabel(HoofdpijnToevoegen);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_10);

        spinBox = new QSpinBox(HoofdpijnToevoegen);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMaximumSize(QSize(50, 35));
        spinBox->setMinimum(1);
        spinBox->setMaximum(10);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, spinBox);

        checkBox_2 = new QCheckBox(HoofdpijnToevoegen);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, checkBox_2);

        checkBox = new QCheckBox(HoofdpijnToevoegen);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, checkBox);

        checkBox_3 = new QCheckBox(HoofdpijnToevoegen);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, checkBox_3);

        checkBox_4 = new QCheckBox(HoofdpijnToevoegen);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        formLayout_3->setWidget(5, QFormLayout::LabelRole, checkBox_4);

        label = new QLabel(HoofdpijnToevoegen);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_3->setWidget(6, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(HoofdpijnToevoegen);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(250, 25));
        lineEdit->setMaximumSize(QSize(250, 16777215));

        formLayout_3->setWidget(6, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(HoofdpijnToevoegen);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sans Serif"));
        font1.setPointSize(10);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setCursor(QCursor(Qt::ForbiddenCursor));
        label_2->setLineWidth(2);
        label_2->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(7, QFormLayout::LabelRole, label_2);


        gridLayout_2->addLayout(formLayout_3, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        label_4 = new QLabel(HoofdpijnToevoegen);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_4);


        gridLayout_5->addLayout(formLayout_6, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_5);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        formLayout_10 = new QFormLayout();
        formLayout_10->setObjectName(QString::fromUtf8("formLayout_10"));
        label_5 = new QLabel(HoofdpijnToevoegen);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_10->setWidget(0, QFormLayout::LabelRole, label_5);

        buttonBox = new QDialogButtonBox(HoofdpijnToevoegen);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        formLayout_10->setWidget(1, QFormLayout::LabelRole, buttonBox);


        gridLayout_6->addLayout(formLayout_10, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout_6);


        retranslateUi(HoofdpijnToevoegen);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, HoofdpijnToevoegen, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, HoofdpijnToevoegen, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(HoofdpijnToevoegen);
    } // setupUi

    void retranslateUi(QDialog *HoofdpijnToevoegen)
    {
        HoofdpijnToevoegen->setWindowTitle(QCoreApplication::translate("HoofdpijnToevoegen", "Hoofdpijn Toevoegen", nullptr));
        lblKenmerken->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Kenmerken van de hoofdpijn", nullptr));
        label_10->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Ernst van de Hoofdpijn", nullptr));
        checkBox_2->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Aan \303\251\303\251n zijde (L of R)", nullptr));
        checkBox->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Kloppende hoofdpijn", nullptr));
        checkBox_3->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Hindert de dagelijkse activiteit", nullptr));
        checkBox_4->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Verergert met beweging", nullptr));
        label->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Andere:", nullptr));
        label_2->setText(QCoreApplication::translate("HoofdpijnToevoegen", "Symptomen die de hoofdpijn \n"
"begeleiden", nullptr));
        label_4->setText(QCoreApplication::translate("HoofdpijnToevoegen", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("HoofdpijnToevoegen", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HoofdpijnToevoegen: public Ui_HoofdpijnToevoegen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOOFDPIJNTOEVOEGEN_H
