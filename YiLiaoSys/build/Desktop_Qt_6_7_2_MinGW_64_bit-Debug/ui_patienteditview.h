/********************************************************************************
** Form generated from reading UI file 'patienteditview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTEDITVIEW_H
#define UI_PATIENTEDITVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientEditView
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *dbEditID;
    QLabel *label_2;
    QLineEdit *dbEditName;
    QLabel *label_3;
    QLineEdit *dbEditIDCard;
    QLabel *label_4;
    QComboBox *dbComboSex;
    QLabel *label_5;
    QDateEdit *dbDateEditDoB;
    QLabel *label_6;
    QSpinBox *dbSpinHeight;
    QLabel *label_7;
    QSpinBox *dbSpinWeight;
    QLabel *label_8;
    QLineEdit *dbEditMobile;
    QLabel *label_9;
    QLineEdit *dbCreatedTimeStamp;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *btnSave;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *PatientEditView)
    {
        if (PatientEditView->objectName().isEmpty())
            PatientEditView->setObjectName("PatientEditView");
        PatientEditView->resize(898, 572);
        verticalLayout_2 = new QVBoxLayout(PatientEditView);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer_3 = new QSpacerItem(20, 29, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(210, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(PatientEditView);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        dbEditID = new QLineEdit(PatientEditView);
        dbEditID->setObjectName("dbEditID");

        formLayout->setWidget(0, QFormLayout::FieldRole, dbEditID);

        label_2 = new QLabel(PatientEditView);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        dbEditName = new QLineEdit(PatientEditView);
        dbEditName->setObjectName("dbEditName");

        formLayout->setWidget(1, QFormLayout::FieldRole, dbEditName);

        label_3 = new QLabel(PatientEditView);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        dbEditIDCard = new QLineEdit(PatientEditView);
        dbEditIDCard->setObjectName("dbEditIDCard");

        formLayout->setWidget(2, QFormLayout::FieldRole, dbEditIDCard);

        label_4 = new QLabel(PatientEditView);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        dbComboSex = new QComboBox(PatientEditView);
        dbComboSex->setObjectName("dbComboSex");

        formLayout->setWidget(3, QFormLayout::FieldRole, dbComboSex);

        label_5 = new QLabel(PatientEditView);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        dbDateEditDoB = new QDateEdit(PatientEditView);
        dbDateEditDoB->setObjectName("dbDateEditDoB");

        formLayout->setWidget(4, QFormLayout::FieldRole, dbDateEditDoB);

        label_6 = new QLabel(PatientEditView);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        dbSpinHeight = new QSpinBox(PatientEditView);
        dbSpinHeight->setObjectName("dbSpinHeight");

        formLayout->setWidget(5, QFormLayout::FieldRole, dbSpinHeight);

        label_7 = new QLabel(PatientEditView);
        label_7->setObjectName("label_7");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        dbSpinWeight = new QSpinBox(PatientEditView);
        dbSpinWeight->setObjectName("dbSpinWeight");

        formLayout->setWidget(6, QFormLayout::FieldRole, dbSpinWeight);

        label_8 = new QLabel(PatientEditView);
        label_8->setObjectName("label_8");

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        dbEditMobile = new QLineEdit(PatientEditView);
        dbEditMobile->setObjectName("dbEditMobile");

        formLayout->setWidget(7, QFormLayout::FieldRole, dbEditMobile);

        label_9 = new QLabel(PatientEditView);
        label_9->setObjectName("label_9");

        formLayout->setWidget(8, QFormLayout::LabelRole, label_9);

        dbCreatedTimeStamp = new QLineEdit(PatientEditView);
        dbCreatedTimeStamp->setObjectName("dbCreatedTimeStamp");

        formLayout->setWidget(8, QFormLayout::FieldRole, dbCreatedTimeStamp);


        horizontalLayout->addLayout(formLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btnSave = new QPushButton(PatientEditView);
        btnSave->setObjectName("btnSave");

        verticalLayout->addWidget(btnSave);

        btnCancel = new QPushButton(PatientEditView);
        btnCancel->setObjectName("btnCancel");

        verticalLayout->addWidget(btnCancel);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(209, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        retranslateUi(PatientEditView);

        QMetaObject::connectSlotsByName(PatientEditView);
    } // setupUi

    void retranslateUi(QWidget *PatientEditView)
    {
        PatientEditView->setWindowTitle(QCoreApplication::translate("PatientEditView", "\346\202\243\350\200\205\344\277\241\346\201\257\347\274\226\350\276\221", nullptr));
        label->setText(QCoreApplication::translate("PatientEditView", "ID:", nullptr));
        label_2->setText(QCoreApplication::translate("PatientEditView", "\345\247\223\345\220\215:", nullptr));
        label_3->setText(QCoreApplication::translate("PatientEditView", "\350\272\253\344\273\275\350\257\201:", nullptr));
        label_4->setText(QCoreApplication::translate("PatientEditView", "\346\200\247\345\210\253\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("PatientEditView", "\345\207\272\347\224\237\346\227\245\346\234\237:", nullptr));
        label_6->setText(QCoreApplication::translate("PatientEditView", "\350\272\253\351\253\230\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("PatientEditView", "\344\275\223\351\207\215\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("PatientEditView", "\346\211\213\346\234\272\345\217\267:", nullptr));
        label_9->setText(QCoreApplication::translate("PatientEditView", "\345\210\233\345\273\272\346\227\266\351\227\264\357\274\232", nullptr));
        btnSave->setText(QCoreApplication::translate("PatientEditView", "\344\277\235\345\255\230", nullptr));
        btnCancel->setText(QCoreApplication::translate("PatientEditView", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientEditView: public Ui_PatientEditView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTEDITVIEW_H
