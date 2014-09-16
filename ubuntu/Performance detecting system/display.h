#ifndef DISPLAY_H
#define DISPLAY_H

#include <QtGui/QWidget>
#include<QTimer>
#include"speed.h"
#include<QLabel>
#include<QPushButton>
#include<QVBoxLayout>
#include<QHBoxLayout>
#include<QResource>
#include<QMouseEvent>

#include"detailset.h"

class display : public QWidget
{
    Q_OBJECT

public:
    display(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void changeEvent(QEvent *);
    ~display();
private:
    QPoint getLocaTion();
private:
    QLabel *lableNWS;
    QLabel *lableMem;
    QLabel *lableCPU;

    QPushButton *buttonNWS;
    QPushButton *buttonMem;
    QPushButton *buttonCPU;


    speed *speed1;

    QPoint windowPos;
    QPoint mousePos;
    QPoint dPos;

    int isshowtop;
    int isshowcpu;
    int isshowmem;
private slots:
    void refreshinfo();
    void showdetail();
    void showcpu(int);
    void showmem(int);
    void showtop(int);
};

#endif // DISPLAY_H
