#include "maindlg.h"
#include "ui_maindlg.h"

maindlg::maindlg(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::maindlg)
{
    ui->setupUi(this);
    ui->grafica->setInteraction(QCP::iRangeDrag,true);
    ui->grafica->setInteraction(QCP::iRangeZoom,true);
    ui->grafica->addGraph();
    ui->grafica->xAxis->setLabel("");
    ui->grafica->yAxis->setLabel("");
    ui->grafica->xAxis->setRange(0,1);
    ui->grafica->yAxis->setRange(0,1024);
    ui->grafica->replot();
    grOpDLG = new graphoptions(this);
    connect(grOpDLG,&graphoptions::apply,this,&maindlg::plotConfig);
    t=0;
    //
}

QCustomPlot* maindlg::plot() const {return ui->grafica;}

void maindlg::plotConfig(){
    ui->grafica->xAxis->grid()->setVisible(grOpDLG->grid());
    ui->grafica->yAxis->grid()->setVisible(grOpDLG->grid());
    if (!grOpDLG->autoFit()) {
        ui->grafica->xAxis->setRange(grOpDLG->tMin(),grOpDLG->tMax());
    }
    ui->grafica->xAxis->setLabel(grOpDLG->xLab());
    ui->grafica->yAxis->setLabel(grOpDLG->yLab());
    ui->grafica->xAxis->setScaleType(grOpDLG->scale());
    ui->grafica->replot();
}


maindlg::~maindlg()
{
    delete grOpDLG;
    delete com;
    delete pconf;
    port.close();
    delete ui;
}

void maindlg::handleData(const QByteArray& dat){
    bool ok;
    float val = dat.toFloat(&ok);
    ui->label->setText(QString::number(timer.interval()));
    if (!ok) return;
    data.push_back(t);
    y.push_back(val);
    ui->grafica->graph(0)->setData(this->data, y);
    ui->grafica->replot();
    if (grOpDLG->autoFit()) ui->grafica->xAxis->setRange(t-grOpDLG->timeWnd/2,t+grOpDLG->timeWnd/2);
    t+=0.1;
}

void maindlg::on_btnPorts_clicked()
{
    pconf=new portconfig(this,&port);
    pconf->exec();
    com = new serialcom(this,&port);
    ui->labOpenPort->setText("Opened port: "+port.portName()+"\n \t "+
                                 "Baud rate: "+
                                 QString::number(port.baudRate())+"\n \t "+
                                 "Data bits: "+
                                 QString::number(port.dataBits())+"\n \t "+
                                 "Stop bits: "+
                                 QString::number(port.stopBits())+"\n \t ");
}


void maindlg::on_btnGSettings_clicked()
{
    grOpDLG->exec();
}


void maindlg::on_btnBegin_clicked()
{
    connect(com,&serialcom::dataReceived,this,&maindlg::handleData);
}


void maindlg::on_btnStop_clicked()
{
    disconnect(com,&serialcom::dataReceived,this,&maindlg::handleData);
}

