/********************************************************************************
** Form generated from reading UI file 'departmentview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPARTMENTVIEW_H
#define UI_DEPARTMENTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DepartmentView
{
public:

    void setupUi(QWidget *DepartmentView)
    {
        if (DepartmentView->objectName().isEmpty())
            DepartmentView->setObjectName("DepartmentView");
        DepartmentView->resize(400, 300);

        retranslateUi(DepartmentView);

        QMetaObject::connectSlotsByName(DepartmentView);
    } // setupUi

    void retranslateUi(QWidget *DepartmentView)
    {
        DepartmentView->setWindowTitle(QCoreApplication::translate("DepartmentView", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DepartmentView: public Ui_DepartmentView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPARTMENTVIEW_H
