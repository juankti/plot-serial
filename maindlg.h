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
    void setCursors(QMouseEvent*);
    void eraseCursors();
    void on_btnBegin_clicked();
    void on_btnStop_clicked();
    void on_checkBox_checkStateChanged(const Qt::CheckState &arg1);

private:
    Ui::maindlg *ui;
    QMetaObject::Connection cursorConnection;
    float t;
    int curs=0;
    QVector<double> data;
    QVector<double> y;
    QCustomPlot*plot() const;
    QSerialPort port;
    QCPItemStraightLine* cursors[2]={nullptr,nullptr};
    portconfig*pconf; // dialog
    serialcom*com;
    graphoptions*grOpDLG;
    };
#endif // MAINDLG_H
