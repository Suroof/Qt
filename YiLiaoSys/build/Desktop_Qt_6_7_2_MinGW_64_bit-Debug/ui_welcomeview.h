/********************************************************************************
** Form generated from reading UI file 'welcomeview.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEVIEW_H
#define UI_WELCOMEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeView
{
public:
    QPushButton *btDepartment;
    QPushButton *btDoctor;
    QPushButton *btPatient;

    void setupUi(QWidget *WelcomeView)
    {
        if (WelcomeView->objectName().isEmpty())
            WelcomeView->setObjectName("WelcomeView");
        WelcomeView->resize(863, 582);
        btDepartment = new QPushButton(WelcomeView);
        btDepartment->setObjectName("btDepartment");
        btDepartment->setGeometry(QRect(170, 180, 121, 121));
        btDoctor = new QPushButton(WelcomeView);
        btDoctor->setObjectName("btDoctor");
        btDoctor->setGeometry(QRect(340, 180, 121, 121));
        btPatient = new QPushButton(WelcomeView);
        btPatient->setObjectName("btPatient");
        btPatient->setGeometry(QRect(510, 180, 121, 121));

        retranslateUi(WelcomeView);

        QMetaObject::connectSlotsByName(WelcomeView);
    } // setupUi

    void retranslateUi(QWidget *WelcomeView)
    {
        WelcomeView->setWindowTitle(QCoreApplication::translate("WelcomeView", "\346\254\242\350\277\216", nullptr));
        btDepartment->setText(QCoreApplication::translate("WelcomeView", "\347\247\221\345\256\244\347\256\241\347\220\206", nullptr));
        btDoctor->setText(QCoreApplication::translate("WelcomeView", "\345\214\273\347\224\237\347\256\241\347\220\206", nullptr));
        btPatient->setText(QCoreApplication::translate("WelcomeView", "\346\202\243\350\200\205\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeView: public Ui_WelcomeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEVIEW_H
