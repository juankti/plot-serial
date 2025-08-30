#include "maindlg.h"
#include "ui_maindlg.h"


maindlg::maindlg(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::maindlg)
{
    ui->setupUi(this);
    ui->grafica->addGraph();
    ui->grafica->xAxis->setLabel("x");
    ui->grafica->yAxis->setLabel("y");
    ui->grafica->xAxis->setRange(-1,10);
    ui->grafica->yAxis->setRange(0,2);
    ui->grafica->replot();
}


float maindlg::agrega(){
    return 1;
}

maindlg::~maindlg()
{
    delete ui;
}

void maindlg::replotting(int i){
    data.push_back(i);
    y.push_back(maindlg::agrega());
    ui->grafica->graph(0)->setData(data,y);
    ui->grafica->replot();
}

void maindlg::on_pushButton_clicked()
{
    for (int i=0;i<10;i++){
        QTimer::singleShot(100*i,[this,i](){
            this->replotting(i);
        });
    }
    }


