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
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_maindlg
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnPorts;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labOpenPort;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QCustomPlot *grafica;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnGSettings;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnExport;

    void setupUi(QDialog *maindlg)
    {
        if (maindlg->objectName().isEmpty())
            maindlg->setObjectName("maindlg");
        maindlg->resize(773, 367);
        widget = new QWidget(maindlg);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 230, 173));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnPorts = new QPushButton(widget);
        btnPorts->setObjectName("btnPorts");
        btnPorts->setAutoFillBackground(true);

        horizontalLayout_2->addWidget(btnPorts);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        labOpenPort = new QLabel(widget);
        labOpenPort->setObjectName("labOpenPort");

        verticalLayout->addWidget(labOpenPort);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        widget1 = new QWidget(maindlg);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(258, 14, 513, 345));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        grafica = new QCustomPlot(widget1);
        grafica->setObjectName("grafica");
        grafica->setMinimumSize(QSize(511, 301));
        horizontalLayout = new QHBoxLayout(grafica);
        horizontalLayout->setObjectName("horizontalLayout");

        verticalLayout_3->addWidget(grafica);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        btnGSettings = new QPushButton(widget1);
        btnGSettings->setObjectName("btnGSettings");

        horizontalLayout_3->addWidget(btnGSettings);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        btnExport = new QPushButton(widget1);
        btnExport->setObjectName("btnExport");

        horizontalLayout_3->addWidget(btnExport);


        verticalLayout_3->addLayout(horizontalLayout_3);


        retranslateUi(maindlg);

        QMetaObject::connectSlotsByName(maindlg);
    } // setupUi

    void retranslateUi(QDialog *maindlg)
    {
        maindlg->setWindowTitle(QCoreApplication::translate("maindlg", "maindlg", nullptr));
        btnPorts->setText(QCoreApplication::translate("maindlg", "Configure ports", nullptr));
        labOpenPort->setText(QString());
        btnGSettings->setText(QCoreApplication::translate("maindlg", "Graph options", nullptr));
        btnExport->setText(QCoreApplication::translate("maindlg", "Export data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class maindlg: public Ui_maindlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDLG_H
