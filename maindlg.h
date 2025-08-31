#ifndef MAINDLG_H
#define MAINDLG_H

#include <QDialog>
#include "qcustomplot.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "serialcom.h"
#include "portconfig.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class maindlg;
}
QT_END_NAMESPACE

class maindlg : public QDialog
{
    Q_OBJECT

public:
    maindlg(QWidget *parent = nullptr);
    ~maindlg();
    float agrega();
private slots:
    void handleData(const QByteArray&);
    void on_btnPorts_clicked();

private:
    float t;
    Ui::maindlg *ui;
    int interval;
    QSerialPort port;
    portconfig*pconf; // dialog
    serialcom*com;
    QVector<double> data;
    QVector<double> y;
};
#endif // MAINDLG_H
