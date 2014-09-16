#include "statusbar.h"
#include<QLabel>
#include<QHBoxLayout>
#include<QPixmap>
#include<QTransform>
#include<QTimer>
#include<QSqlTableModel>
#include<QDate>
#include<QDebug>
StatusBar::StatusBar(const QString & str,QWidget *parent) :
    QWidget(parent),tableName(str)
{

    pix = new QLabel;
    QPixmap pixmap("images/dollar.png");
    QTransform transform;
    transform.scale(0.4,0.4);

    pix->setPixmap(pixmap.transformed(transform));
    label = new QLabel;
    //label->setText(tr("今天的总花费：%1").arg(str1));
    QHBoxLayout *layout1 = new QHBoxLayout(this);
    layout1->addStretch(12);
    layout1->addWidget(pix);
    layout1->addWidget(label);
    this->setLayout(layout1);
    this->updateInfo();

}
float StatusBar::sumByDay()
{
    QSqlTableModel model;
    QString str="date = '"+ QDate::currentDate().toString(Qt::ISODate)+"'";
    model.setTable(tableName);
    model.setFilter(str);
    model.select();
    int row = model.rowCount();

    float total_day = 0;
    for(int i=0; i<row; i++)
    {
        total_day += model.data(model.index(i,2)).toFloat();
    }
    return total_day;
}
float StatusBar::sumByMonth()
{
    QSqlTableModel model;
    QDate fromDate ;
    fromDate.setDate(QDate::currentDate().year(),QDate::currentDate().month(),1);
    QDate endDate ;
    endDate.setDate(QDate::currentDate().year(),QDate::currentDate().month(),QDate::currentDate().daysInMonth());

    QString str="date >= '"+ fromDate.toString(Qt::ISODate) + "'  and  date <='"
                +endDate.toString(Qt::ISODate) +"'";
    model.setTable(tableName);
    model.setFilter(str);
    model.select();
    int row = model.rowCount();
    float total_month = 0;
    for(int i=0; i<row; i++)
    {
        total_month += model.data(model.index(i,2)).toFloat();
    }
    return total_month;
}
float StatusBar::sumByFixedCost()
{
    QSqlTableModel model;
    model.setTable("Fixed");
    model.select();
    int row = model.rowCount();
    float total_fix_cost = 0;
    for(int i=0; i< row ; i++)
        total_fix_cost +=model.data(model.index(i,2)).toFloat();
    return total_fix_cost;

}

void StatusBar::updateInfo()
{

    label->setText(tr("今天的总花费：%1   该月的花费：%2   该月的固定花费 %3   该月的实际总花费 %4").arg(sumByDay())
                   .arg(sumByMonth()).arg(sumByFixedCost()).arg(sumByMonth()+ sumByFixedCost()));
}
