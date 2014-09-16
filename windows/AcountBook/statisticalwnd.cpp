#include "statisticalwnd.h"
#include<QSqlTableModel>
#include<QTableWidget>
#include<QTableWidgetItem>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QDebug>
#include<QSqlQueryModel>
StatisticalWnd::StatisticalWnd(QString &str) : filter(str)
{
    this->setAttribute(Qt::WA_DeleteOnClose);

    widget = new QTableWidget;
    model = new QSqlTableModel(this);

    closeBtn = new QPushButton(tr("¹Ø±Õ"));
    connect(closeBtn,SIGNAL(clicked()),this,SLOT(close()));
    QHBoxLayout *layout1 = new QHBoxLayout;
    layout1->addStretch(12);
    layout1->addWidget(closeBtn);

    QVBoxLayout *layout2 = new QVBoxLayout;
    layout2->addWidget(widget);
    layout2->addLayout(layout1);
    this->setLayout(layout2);
    statistics();

}

void StatisticalWnd::statistics()
{
    QList<int> list;
    QList<QString>list_str;
    QList<float> cost;
    model->setTable("FamilyMember");
    model->select();
    for(int i=0; i<model->rowCount(); i++){
        list += model->data(model->index(i,0)).toInt();            //MainID
        list_str += model->data(model->index(i,1)).toString();     //FamilyMember
    }

    for(int ii =0; ii<list.count();ii++)
    {
        QSqlQueryModel queryModel;
        queryModel.setQuery(QString("SELECT SUM(Money) FROM Account where %1").arg(filter));
        cost.append(queryModel.data(queryModel.index(0,0)).toFloat());
        qDebug()<<"filter:"<<filter;
        qDebug()<<cost[ii];


//    for(int ii =0; ii<list.count(); ii++)
//    {
//    qDebug()<<(filter + QString(" and MainID = %1").arg(list.at(ii)));
//    model->setFilter(filter + QString(" and MainID = %1").arg(list.at(ii)));
//    model->select();
//    for(int iii=0; iii<model->rowCount();iii++)
//    {
//        cost[ii] += model->data(model->index(3,iii)).toFloat();
//    }
    QTableWidgetItem *item1 = new QTableWidgetItem;
    item1->setData(Qt::DisplayRole,list_str.at(ii));
    QTableWidgetItem *item2 = new QTableWidgetItem;
    item2->setData(Qt::DisplayRole,cost[ii]);
    widget->setItem(ii,0,item1);
    widget->setItem(ii,1,item2);
    }


}
