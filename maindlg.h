#ifndef MAINDLG_H
#define MAINDLG_H

#include <QDialog>
#include "qcustomplot.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "device.h"

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
    void portSelected(QListWidgetItem *item)    ;
    void replotting(int);

private slots:
    void on_pushButton_clicked();

    void on_btnPorts_clicked();
private:
    Ui::maindlg *ui;
    QList<QSerialPortInfo> devices;
    QSerialPort port;
    QVector<double> data;
    QVector<double> y;
};
#endif // MAINDLG_H
