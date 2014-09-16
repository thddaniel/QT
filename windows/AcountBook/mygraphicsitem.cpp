#include "mygraphicsitem.h"
#include<QPainter>
#include<QDebug>
#include<QGraphicsScene>
MyGraphicsItem::MyGraphicsItem( QGraphicsItem *parent , QGraphicsScene *scene )

{
    flag =0;
    this->setAcceptHoverEvents(true);
}

QRectF MyGraphicsItem::boundingRect() const
{
    qreal adjust = 2;
    return QRectF(-6 - adjust, -6 - adjust,
                  12 + adjust, 12+ adjust);
}
void MyGraphicsItem::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    //qDebug()<<"in hover enter";
    flag = 1;
    this->update(this->boundingRect());
}
void MyGraphicsItem::hoverLeaveEvent(QGraphicsSceneHoverEvent *event)
{
    flag=0;
    this->update(this->boundingRect());
}

void MyGraphicsItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    // Body
   // painter->setPen(QPen(Qt::darkYellow,2,Qt::DashLine));
    painter->setRenderHint(QPainter::Antialiasing);
    if(flag == 0)
    {
    painter->setBrush(QColor(137,187,222));
    painter->drawEllipse(-6, -6, 12, 12);
    }
    else if(flag == 1)
    {
        painter->setPen(QPen(Qt::red,2));
        painter->setBrush(QColor(143,212,82));
        painter->drawEllipse(-6, -6, 12, 12);
    }
}
void MyGraphicsItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

    qDebug()<<"mouse press:";
    emit clicked(id,day);

}

void MyGraphicsItem::setID(int &ID)
{
    id = ID;
}
int MyGraphicsItem::getID() const
{
    return id;
}
void MyGraphicsItem::setDay(int &Day)
{
    day = Day;
}
int MyGraphicsItem::getDay() const
{
    return day;
}

void MyGraphicsLine::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setRenderHint(QPainter::Antialiasing);
    QGraphicsLineItem::paint(painter,option,widget);
}
