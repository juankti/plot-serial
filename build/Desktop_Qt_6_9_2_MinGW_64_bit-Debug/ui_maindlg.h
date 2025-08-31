/********************************************************************************
** Form generated from reading UI file 'maindlg.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINDLG_H
#define UI_MAINDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_maindlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnPorts;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labOpenPort;
    QCustomPlot *grafica;
    QHBoxLayout *horizontalLayout;

    void setupUi(QDialog *maindlg)
    {
        if (maindlg->objectName().isEmpty())
            maindlg->setObjectName("maindlg");
        maindlg->resize(773, 327);
        verticalLayout = new QVBoxLayout(maindlg);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnPorts = new QPushButton(maindlg);
        btnPorts->setObjectName("btnPorts");
        btnPorts->setAutoFillBackground(true);

        horizontalLayout_2->addWidget(btnPorts);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        labOpenPort = new QLabel(maindlg);
        labOpenPort->setObjectName("labOpenPort");
        labOpenPort->setMinimumSize(QSize(226, 111));

        verticalLayout_2->addWidget(labOpenPort);


        horizontalLayout_3->addLayout(verticalLayout_2);

        grafica = new QCustomPlot(maindlg);
        grafica->setObjectName("grafica");
        grafica->setMinimumSize(QSize(511, 301));
        horizontalLayout = new QHBoxLayout(grafica);
        horizontalLayout->setObjectName("horizontalLayout");

        horizontalLayout_3->addWidget(grafica);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(maindlg);

        QMetaObject::connectSlotsByName(maindlg);
    } // setupUi

    void retranslateUi(QDialog *maindlg)
    {
        maindlg->setWindowTitle(QCoreApplication::translate("maindlg", "maindlg", nullptr));
        btnPorts->setText(QCoreApplication::translate("maindlg", "Configure ports", nullptr));
        labOpenPort->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class maindlg: public Ui_maindlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDLG_H
