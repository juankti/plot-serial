#ifndef MAINDLG_H
#define MAINDLG_H

#include <QDialog>
#include "qcustomplot.h"


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
    void replotting(int);

private slots:
    void on_pushButton_clicked();

private:
    Ui::maindlg *ui;
    QVector<double> data;
    QVector<double> y;
};
#endif // MAINDLG_H
