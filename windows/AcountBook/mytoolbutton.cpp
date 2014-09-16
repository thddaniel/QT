#include "mytoolbutton.h"

MyToolButton::MyToolButton(int ID,QWidget *parent ):id(ID),
    QToolButton(parent)
{

}

int MyToolButton::getID()const
{
    return id;
}
void MyToolButton::setID(int ID)
{
    id = ID;
}
