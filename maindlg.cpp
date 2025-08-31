#include "maindlg.h"
#include "ui_maindlg.h"

maindlg::maindlg(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::maindlg)
{
    ui->setupUi(this);;
    t=0;
    ui->grafica->addGraph();
    ui->grafica->xAxis->setLabel("Time (s)");
    ui->grafica->yAxis->setLabel("Analog Read (0-1023)");
    ui->grafica->xAxis->setRange(0,1);
    ui->grafica->yAxis->setRange(0,1024);
    ui->grafica->replot();
}


float maindlg::agrega(){
    return 1;
}

maindlg::~maindlg()
{
    delete com;
    delete pconf;
    port.close();
    delete ui;
}

void maindlg::handleData(const QByteArray& dat){
    bool ok;
    float val = dat.toFloat(&ok);
    if (!ok) return;
    data.push_back(t);
    y.push_back(val);
    ui->grafica->graph(0)->setData(this->data, y);
    if(t>1) ui->grafica->xAxis->setRange(t-1,t+1);
    ui->grafica->replot();
    t+=0.1;
}



void maindlg::on_btnPorts_clicked()
{
    pconf=new portconfig(this,&port);
    pconf->exec();
    com = new serialcom(this,&port);
    connect(com,&serialcom::dataReceived,this,&maindlg::handleData);
    ui->labOpenPort->setText("Opened port: "+port.portName()+"\n \t "+
                                 "Baud rate: "+
                                 QString::number(port.baudRate())+"\n \t "+
                                 "Data bits: "+
                                 QString::number(port.dataBits())+"\n \t "+
                                 "Stop bits: "+
                                 QString::number(port.stopBits())+"\n \t ");
}

