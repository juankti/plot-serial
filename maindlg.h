#ifndef MAINDLG_H
#define MAINDLG_H

#include <QDialog>
#include "qcustomplot.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "serialcom.h"
#include "portconfig.h"
#include "graphoptions.h"

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
private slots:
    void handleData(const QByteArray&);
    void plotConfig();
    void on_btnPorts_clicked();
    void on_btnGSettings_clicked();

    void on_btnBegin_clicked();

    void on_btnStop_clicked();

private:
    float t;
    QVector<double> data;
    QVector<double> y;
    QCustomPlot*plot() const;
    Ui::maindlg *ui;
    QSerialPort port;
    portconfig*pconf; // dialog
    serialcom*com;
    graphoptions*grOpDLG;
    };
#endif // MAINDLG_H
