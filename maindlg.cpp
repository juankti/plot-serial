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
    port.close();
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

void maindlg::on_btnPorts_clicked(){
    devices=QSerialPortInfo::availablePorts();
    ui->portsList->clear();
    for (QSerialPortInfo& ports : devices){
        ui->portsList->addItem(ports.portName()+" "+ports.description());
    }
    connect(ui->portsList,&QListWidget::itemDoubleClicked,this,&maindlg::portSelected);
}

void maindlg::portSelected(QListWidgetItem *item){
    port.setPortName(devices[ui->portsList->row(item)].portName());
    port.setBaudRate(QSerialPort::Baud115200);
    port.setDataBits(QSerialPort::Data8);
    port.setParity(QSerialPort::NoParity);
    port.setStopBits(QSerialPort::OneStop);
    port.setFlowControl(QSerialPort::NoFlowControl);
    if (port.open(QIODevice::ReadWrite)){
        QMessageBox::information(this,"",port.portName() + " opened.");
        ui->labOpenPort->setText("Open port: "+port.portName()+"\n \t"+
                                 "Baud rate: "+
                                 QString::number(port.baudRate())+"\n \t "+
                                 "Data bits: "+
                                 QString::number(port.dataBits())+"\n \t "+
                                 "Stop bits: "+
                                 QString::number(port.stopBits())+"\n \t ");
    } else{
        QMessageBox::warning(this,"","Could not open "+ port.portName()+".");
    }
}

