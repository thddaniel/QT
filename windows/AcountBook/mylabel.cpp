#include "mylabel.h"
#include<QMouseEvent>
#include<QDebug>
MyLabel::MyLabel(QWidget *parent) :
    QLabel(parent)
{
}
void MyLabel::mousePressEvent(QMouseEvent *ev)
{
    if(ev->button() == Qt::LeftButton)
        emit CloseSignal();
    qDebug()<<"clicked!";
    ev->accept();
}


