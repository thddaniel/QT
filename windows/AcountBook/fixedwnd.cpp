#include "fixedwnd.h"
#include<QTableView>
#include<QSqlTableModel>
#include<QLineEdit>
#include<QPushButton>
#include<QFormLayout>
#include<QVBoxLayout>
#include<QMessageBox>
#include<QItemSelectionModel>
#include<QModelIndexList>
#include<QHeaderView>
#include<QDebug>
#include<QDoubleSpinBox>
#include<QLabel>
FixedWnd::FixedWnd(const QString &str) :tableName(str)

{
    this->setAttribute(Qt::WA_DeleteOnClose);
    set_wnd_layout();
    createConnect();
    this->setWindowTitle(tr("固定支出添加"));
}
void FixedWnd::createConnect()
{
    connect(closeBtn,SIGNAL(clicked()),this,SLOT(close()));
    connect(submitBtn,SIGNAL(clicked()),this,SLOT(addMember()));
    connect(modifyBtn,SIGNAL(clicked()),this,SLOT(midify()));
    connect(delBtn,SIGNAL(clicked()),this,SLOT(deleteRecords()));
}

void FixedWnd::addMember()
{
    int row = model->rowCount();
    model->insertRow(row);
    model->setData(model->index(row,1),edit->text());
    model->setData(model->index(row,2),cost->text().toFloat());
    model->submitAll();
    model->select();
    totalFixedCost->setText(QString(tr("<font color = #FF6600 >月固定花费统计：%1</font>")).arg(totalCost()));
    emit updateCost();
    view->scrollToBottom();

}
void FixedWnd::midify()
{
    model->submitAll();
    totalFixedCost->setText(QString(tr("<font color = #FF6600 >月固定花费统计：%1</font>")).arg(totalCost()));
    emit updateCost();
    QMessageBox::information(NULL,tr("修改记录"),tr("修改完成，数据已保存！"),
                                     QMessageBox::Yes);

}
void FixedWnd::deleteRecords()
{
    QItemSelectionModel *select_mode=view->selectionModel();

    QModelIndexList list = select_mode->selectedRows();
    qDebug()<<"list:"<<list.size();
    if(0 ==  list.count())
    {
        QMessageBox::information(NULL,tr("删除记录"),tr("对不起，请选择至少一条要删除的记录！"),
                                         QMessageBox::Yes);
        return;
    }
    else
    {
        int ret=QMessageBox::information(NULL,tr("删除记录"),tr("您确定要删除该记录？"),
                                         QMessageBox::Yes,QMessageBox::No);
        if(ret==QMessageBox::No)
            return;




       model->removeRows(list.at(0).row(),list.count());
       model->submitAll();
       model->select();
       totalFixedCost->setText(QString(tr("<font color = #FF6600 >月固定花费统计：%1</font>")).arg(totalCost()));
       emit updateCost();
    }
   //通知其他窗体更新
}
float FixedWnd::totalCost()
{
    float total = 0;
    model->select();
    for(int i=0; i<model->rowCount();i++)
            total += model->data(model->index(i,2)).toFloat();
    return total;
}

void FixedWnd::set_wnd_layout()
{
    view = new QTableView;
    //view->horizontalHeader()->setStretchLastSection(true);
    view->setSelectionBehavior(QAbstractItemView::SelectRows);
    model = new QSqlTableModel(this);
    model->setTable(tableName);
    model->select();
    model->setHeaderData(1,Qt::Horizontal,tr("固定支出项目"));
    model->setHeaderData(2,Qt::Horizontal,tr("费用"));
    view->setModel(model);
    view->hideColumn(0);


    edit = new QLineEdit;
    cost = new QDoubleSpinBox;
    cost->setRange(0,9999999);
    QFormLayout *layout1 = new QFormLayout;
    layout1->addRow(tr("支出项目："),edit);
    layout1->addRow(tr("费用"),cost);

    totalFixedCost = new QLabel;
    totalFixedCost->setText(QString(tr("<font color = #FF6600 >月固定花费统计：%1</font>")).arg(totalCost()));

    submitBtn = new QPushButton(tr("添加项目"));
    submitBtn->setDefault(true);
    modifyBtn = new QPushButton(tr("修改后保存"));
    delBtn    = new QPushButton(tr("删除"));
    closeBtn = new QPushButton(tr("关闭"));

    QVBoxLayout *layout2 = new QVBoxLayout;
    layout2->addLayout(layout1);
    layout2->addWidget(totalFixedCost);
    layout2->addWidget(submitBtn);
    layout2->addWidget(modifyBtn);
    layout2->addWidget(delBtn);
    layout2->addWidget(closeBtn);

    QHBoxLayout *layout3 = new QHBoxLayout;
    layout3->addWidget(view);
    layout3->addLayout(layout2);
    this->setLayout(layout3);
}
