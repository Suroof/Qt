/********************************************************************************
** Form generated from reading UI file 'patientview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATIENTVIEW_H
#define UI_PATIENTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PatientView
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtSearch;
    QPushButton *btSearch;
    QPushButton *btAdd;
    QPushButton *btDelete;
    QPushButton *btEdit;
    QTableView *tableView;

    void setupUi(QWidget *PatientView)
    {
        if (PatientView->objectName().isEmpty())
            PatientView->setObjectName("PatientView");
        PatientView->resize(717, 618);
        verticalLayout = new QVBoxLayout(PatientView);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        txtSearch = new QLineEdit(PatientView);
        txtSearch->setObjectName("txtSearch");

        horizontalLayout->addWidget(txtSearch);

        btSearch = new QPushButton(PatientView);
        btSearch->setObjectName("btSearch");

        horizontalLayout->addWidget(btSearch);

        btAdd = new QPushButton(PatientView);
        btAdd->setObjectName("btAdd");

        horizontalLayout->addWidget(btAdd);

        btDelete = new QPushButton(PatientView);
        btDelete->setObjectName("btDelete");

        horizontalLayout->addWidget(btDelete);

        btEdit = new QPushButton(PatientView);
        btEdit->setObjectName("btEdit");

        horizontalLayout->addWidget(btEdit);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(PatientView);
        tableView->setObjectName("tableView");

        verticalLayout->addWidget(tableView);


        retranslateUi(PatientView);

        QMetaObject::connectSlotsByName(PatientView);
    } // setupUi

    void retranslateUi(QWidget *PatientView)
    {
        PatientView->setWindowTitle(QCoreApplication::translate("PatientView", "\346\202\243\350\200\205\347\256\241\347\220\206", nullptr));
        btSearch->setText(QCoreApplication::translate("PatientView", "\346\237\245\346\211\276", nullptr));
        btAdd->setText(QCoreApplication::translate("PatientView", "\346\267\273\345\212\240", nullptr));
        btDelete->setText(QCoreApplication::translate("PatientView", "\345\210\240\351\231\244", nullptr));
        btEdit->setText(QCoreApplication::translate("PatientView", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PatientView: public Ui_PatientView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATIENTVIEW_H
