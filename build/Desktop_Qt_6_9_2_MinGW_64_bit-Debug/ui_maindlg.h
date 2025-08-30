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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_maindlg
{
public:
    QLabel *labOpenPort;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QCustomPlot *grafica;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnPorts;
    QListWidget *portsList;

    void setupUi(QDialog *maindlg)
    {
        if (maindlg->objectName().isEmpty())
            maindlg->setObjectName("maindlg");
        maindlg->resize(671, 360);
        labOpenPort = new QLabel(maindlg);
        labOpenPort->setObjectName("labOpenPort");
        labOpenPort->setGeometry(QRect(40, 200, 181, 141));
        widget = new QWidget(maindlg);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(250, 10, 411, 341));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        grafica = new QCustomPlot(widget);
        grafica->setObjectName("grafica");
        horizontalLayout = new QHBoxLayout(grafica);
        horizontalLayout->setObjectName("horizontalLayout");

        verticalLayout->addWidget(grafica);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(99, 32));

        verticalLayout->addWidget(pushButton);

        widget1 = new QWidget(maindlg);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(40, 20, 171, 160));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnPorts = new QPushButton(widget1);
        btnPorts->setObjectName("btnPorts");
        btnPorts->setAutoFillBackground(true);

        verticalLayout_2->addWidget(btnPorts);

        portsList = new QListWidget(widget1);
        portsList->setObjectName("portsList");
        portsList->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        portsList->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        portsList->setUniformItemSizes(true);
        portsList->setWordWrap(true);
        portsList->setItemAlignment(Qt::AlignmentFlag::AlignLeading);

        verticalLayout_2->addWidget(portsList);


        retranslateUi(maindlg);

        QMetaObject::connectSlotsByName(maindlg);
    } // setupUi

    void retranslateUi(QDialog *maindlg)
    {
        maindlg->setWindowTitle(QCoreApplication::translate("maindlg", "maindlg", nullptr));
        labOpenPort->setText(QString());
        pushButton->setText(QCoreApplication::translate("maindlg", "PushButton", nullptr));
        btnPorts->setText(QCoreApplication::translate("maindlg", "Search for \n"
"available ports", nullptr));
    } // retranslateUi

};

namespace Ui {
    class maindlg: public Ui_maindlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINDLG_H
