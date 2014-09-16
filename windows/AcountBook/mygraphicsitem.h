#ifndef MYGRAPHICSITEM_H
#define MYGRAPHICSITEM_H

#include <QGraphicsItem>
#include<QGraphicsObject>
#include<QMouseEvent>
#include<QGraphicsLineItem>
class MyGraphicsItem : public QGraphicsObject
{
    Q_OBJECT
public:
     MyGraphicsItem(QGraphicsItem *parent = 0, QGraphicsScene *scene = 0);
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget);
    void setID(int &);
    int getID() const;
    void setDay(int &);
    int getDay() const;
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
signals:
    void  clicked(int,int);
public slots:
private:
    int id;
    int day;
    int flag;
};
class MyGraphicsLine:public QGraphicsLineItem
{

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget);
};

#endif // MYGRAPHICSITEM_H
