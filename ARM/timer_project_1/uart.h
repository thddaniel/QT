#ifndef UART_H
#define UART_H

#include <QWidget>
#include <QtGui>
#include "posix_qextserialport.h"

class uart : public QWidget
{
     Q_OBJECT  //没有这个申明函数将无效
public:
    uart();
private:
    QTextBrowser *textBrowser;
    Posix_QextSerialPort *myCom1;
    QTimer *readTimer;
    QByteArray control_data2;
    QPushButton *BackButton;

private slots:
     void ReadCom();
     void back();

};

#endif // UART_H
