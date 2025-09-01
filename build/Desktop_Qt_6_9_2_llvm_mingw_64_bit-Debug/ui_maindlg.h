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
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnPorts;
    QLabel *labOpenPort;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btnBegin;
    QPushButton *btnStop;
    QVBoxLayout *verticalLayout_3;
    QCustomPlot *grafica;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnGSettings;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *maindlg)
    {
        if (maindlg->objectName().isEmpty())
            maindlg->setObjectName("maindlg");
        maindlg->resize(802, 372);
        maindlg->setMinimumSize(QSize(773, 367));
        gridLayout = new QGridLayout(maindlg);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnPorts = new QPushButton(maindlg);
        btnPorts->setObjectName("btnPorts");
        btnPorts->setAutoFillBackground(true);

        horizontalLayout_2->addWidget(btnPorts);


        verticalLayout->addLayout(horizontalLayout_2);

        labOpenPort = new QLabel(maindlg);
        labOpenPort->setObjectName("labOpenPort");
        labOpenPort->setMinimumSize(QSize(181, 51));

        verticalLayout->addWidget(labOpenPort);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label = new QLabel(maindlg);
        label->setObjectName("label");

        verticalLayout->addWidget(label);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        btnBegin = new QPushButton(maindlg);
        btnBegin->setObjectName("btnBegin");

        verticalLayout_4->addWidget(btnBegin);

        btnStop = new QPushButton(maindlg);
        btnStop->setObjectName("btnStop");

        verticalLayout_4->addWidget(btnStop);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        grafica = new QCustomPlot(maindlg);
        grafica->setObjectName("grafica");
        grafica->setMinimumSize(QSize(511, 301));
        horizontalLayout = new QHBoxLayout(grafica);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);

        verticalLayout_3->addWidget(grafica);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btnGSettings = new QPushButton(maindlg);
        btnGSettings->setObjectName("btnGSettings");

        horizontalLayout_3->addWidget(btnGSettings);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);


        retranslateUi(maindlg);

        QMetaObject::connectSlotsByName(maindlg);
    } // setupUi

    void retranslateUi(QDialog *maindlg)
    {
        maindlg->setWindowTitle(QCoreApplication::translate("maindlg", "maindlg", nullptr));
        btnPorts->setText(QCoreApplication::translate("maindlg", "Configure ports", nullptr));
        labOpenPort->setText(QString());
        label->setText(QString());
        btnBegin->setText(QCoreApplication::translate("maindlg", "Start", nullptr));
        btnStop->setText(QCoreApplication::translate("maindlg", "Stop", nullptr));
        btnGSettings->setText(QCoreApplication::translate("maindlg", "Graph options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class maindlg: public Ui_maindlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDLG_H
