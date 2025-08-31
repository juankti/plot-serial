/********************************************************************************
** Form generated from reading UI file 'graphoptions.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHOPTIONS_H
#define UI_GRAPHOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_graphoptions
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_11;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboScale;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *comboRange;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QCheckBox *checkGrid;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QCheckBox *checkGrid_3;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *leTMin;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *leTMax;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_15;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_16;
    QLineEdit *leXLab;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_17;
    QLineEdit *leYLab;
    QHBoxLayout *horizontalLayout_16;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSet;

    void setupUi(QDialog *graphoptions)
    {
        if (graphoptions->objectName().isEmpty())
            graphoptions->setObjectName("graphoptions");
        graphoptions->resize(413, 281);
        widget = new QWidget(graphoptions);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(12, 10, 391, 268));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_11->addItem(verticalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(label);

        comboScale = new QComboBox(widget);
        comboScale->setObjectName("comboScale");

        horizontalLayout->addWidget(comboScale);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        comboRange = new QComboBox(widget);
        comboRange->setObjectName("comboRange");

        horizontalLayout_5->addWidget(comboRange);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(verticalLayout_2);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        checkGrid = new QCheckBox(widget);
        checkGrid->setObjectName("checkGrid");
        checkGrid->setMaximumSize(QSize(19, 20));

        horizontalLayout_2->addWidget(checkGrid);


        horizontalLayout_8->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_4->addWidget(label_4);

        checkGrid_3 = new QCheckBox(widget);
        checkGrid_3->setObjectName("checkGrid_3");
        checkGrid_3->setLayoutDirection(Qt::LayoutDirection::RightToLeft);

        horizontalLayout_4->addWidget(checkGrid_3);


        horizontalLayout_8->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_8);


        verticalLayout_11->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_2);


        gridLayout_2->addLayout(verticalLayout_11, 0, 0, 1, 1);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setMaximumSize(QSize(70, 22));
        label_6->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_3->addWidget(label_6);

        leTMin = new QLineEdit(widget);
        leTMin->setObjectName("leTMin");
        leTMin->setMaximumSize(QSize(41, 30));

        horizontalLayout_3->addWidget(leTMin);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setMaximumSize(QSize(70, 22));
        label_8->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_7->addWidget(label_8);

        leTMax = new QLineEdit(widget);
        leTMax->setObjectName("leTMax");
        leTMax->setMaximumSize(QSize(41, 30));

        horizontalLayout_7->addWidget(leTMax);


        verticalLayout_3->addLayout(horizontalLayout_7);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_12->addLayout(verticalLayout_4);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_15 = new QLabel(widget);
        label_15->setObjectName("label_15");
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_9->addWidget(label_15);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_16 = new QLabel(widget);
        label_16->setObjectName("label_16");
        label_16->setMaximumSize(QSize(70, 22));
        label_16->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_13->addWidget(label_16);

        leXLab = new QLineEdit(widget);
        leXLab->setObjectName("leXLab");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leXLab->sizePolicy().hasHeightForWidth());
        leXLab->setSizePolicy(sizePolicy);

        horizontalLayout_13->addWidget(leXLab);


        verticalLayout_10->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_17 = new QLabel(widget);
        label_17->setObjectName("label_17");
        label_17->setMaximumSize(QSize(70, 22));
        label_17->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_14->addWidget(label_17);

        leYLab = new QLineEdit(widget);
        leYLab->setObjectName("leYLab");

        horizontalLayout_14->addWidget(leYLab);


        verticalLayout_10->addLayout(horizontalLayout_14);


        verticalLayout_9->addLayout(verticalLayout_10);


        verticalLayout_12->addLayout(verticalLayout_9);


        gridLayout_2->addLayout(verticalLayout_12, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalSpacer = new QSpacerItem(338, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer);

        btnSet = new QPushButton(widget);
        btnSet->setObjectName("btnSet");
        btnSet->setMaximumSize(QSize(41, 32));

        horizontalLayout_16->addWidget(btnSet);


        gridLayout->addLayout(horizontalLayout_16, 1, 0, 1, 1);


        retranslateUi(graphoptions);

        QMetaObject::connectSlotsByName(graphoptions);
    } // setupUi

    void retranslateUi(QDialog *graphoptions)
    {
        graphoptions->setWindowTitle(QCoreApplication::translate("graphoptions", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("graphoptions", "XAxis Scale:", nullptr));
        label_5->setText(QCoreApplication::translate("graphoptions", "XAxis Range:", nullptr));
        label_2->setText(QCoreApplication::translate("graphoptions", "Grid:", nullptr));
        checkGrid->setText(QString());
        label_4->setText(QCoreApplication::translate("graphoptions", "Labels:", nullptr));
        checkGrid_3->setText(QString());
        label_3->setText(QCoreApplication::translate("graphoptions", "Time range:", nullptr));
        label_6->setText(QCoreApplication::translate("graphoptions", "t_min", nullptr));
        label_8->setText(QCoreApplication::translate("graphoptions", "t_max", nullptr));
        label_15->setText(QCoreApplication::translate("graphoptions", "Axis Labels:", nullptr));
        label_16->setText(QCoreApplication::translate("graphoptions", "X:", nullptr));
        label_17->setText(QCoreApplication::translate("graphoptions", "Y:", nullptr));
        btnSet->setText(QCoreApplication::translate("graphoptions", "Set", nullptr));
    } // retranslateUi

};

namespace Ui {
    class graphoptions: public Ui_graphoptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHOPTIONS_H
