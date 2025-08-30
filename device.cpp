#include "device.h"
#include <iostream>
#include <QDebug>

device::device(){
    QList lista = QSerialPortInfo::availablePorts();
    QString nombres;
    for (int i =0;i<=lista.length();i++){
        nombres + lista.at(i).portName();
        qDebug() << nombres;
    }
}
