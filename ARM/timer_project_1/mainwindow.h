#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QWidget>
#include <QTextCodec>
#include <QMainWindow>
#include <QtGui>
#include <QTimer>
#include <QDebug>

#include <QPushButton>
#include <QTextEdit>
#include <QLabel>

#include"alarm.h"
#include "telwidget.h"
#include "musicwidget.h"
#include "message.h"
#include "uart.h"


class mainwindow : public QWidget
{
    Q_OBJECT

public:
    mainwindow(QWidget *parent = 0);
    ~mainwindow();

private:
    Alarm Furniture;
    TelWidget telWidget;
    uart Uart;

    friend class MusicWidget;
    MusicWidget *Musicwidget;

    friend class Message;
    Message *message;
    /* 家电控制 */
    QPushButton *furnitureButton;
    /* 手机界面拨号 */
    QPushButton *PhoneButton;
      /*播放音乐*/
    QPushButton *MusicButton;
       /*发送短信*/
    QPushButton *MessageButton;

    QPushButton *uartButton;
 private slots:
    void on_furnitureButton_clicked();
    void on_PhoneButton_clicked();
    void on_uartButton_clicked();
};

#endif // MAINWINDOW_H
