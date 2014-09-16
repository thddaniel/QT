#ifndef MYTOOLBUTTON_H
#define MYTOOLBUTTON_H

#include <QToolButton>
#include<QWidget>
class MyToolButton : public QToolButton
{
    Q_OBJECT
public:
    MyToolButton(int ID,QWidget *parent = 0);
    void setID(int ID);
    int  getID(void) const;
signals:

public slots:
private:
    int id;
};

#endif // MYTOOLBUTTON_H
