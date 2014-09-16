#include "memberdlg.h"
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
MemberDlg::MemberDlg(const QString &str):tableName(str)
{
    this->setAttribute(Qt::WA_DeleteOnClose);
    set_wnd_layout();
    createConnect();
    this->setWindowTitle(tr("家庭成员添加"));
}
void MemberDlg::createConnect()
{
    connect(closeBtn,SIGNAL(clicked()),this,SLOT(close()));
    connect(submitBtn,SIGNAL(clicked()),this,SLOT(addMember()));
    connect(modifyBtn,SIGNAL(clicked()),this,SLOT(midify()));
    connect(delBtn,SIGNAL(clicked()),this,SLOT(deleteRecords()));
}

void MemberDlg::addMember()
{
    int row = model->rowCount();
    model->insertRow(row);
    model->setData(model->index(row,1),edit->text());
    model->setData(model->index(row,2),1);
    model->submitAll();
    model->select();
    view->scrollToBottom();
    emit updateFamilyMember();
}
void MemberDlg::midify()
{
    model->submitAll();
    QMessageBox::information(NULL,tr("修改记录"),tr("修改完成，数据已保存！"),
                                     QMessageBox::Yes);
    emit updateFamilyMember();
}
void MemberDlg::deleteRecords()
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

       QSqlTableModel tableModel;
       tableModel.setTable("Account");
       for(int i=0; i<list.count();i++)
       {
           int MainID = model->data(model->index(list.at(i).row(),0)).toInt();
           tableModel.setFilter(QString("FamilyMember = %1").arg(MainID));
           tableModel.select();
           tableModel.removeRows(0,tableModel.rowCount()); //先删除Account与该成员关联的记录
       }

       model->removeRows(list.at(0).row(),list.count());
       model->submitAll();
       model->select();
    }
    emit updateFamilyMember();//通知其他窗体更新
}

void MemberDlg::set_wnd_layout()
{
    view = new QTableView;
    view->horizontalHeader()->setStretchLastSection(true);
    view->setSelectionBehavior(QAbstractItemView::SelectRows);
    model = new QSqlTableModel(this);
    model->setTable(tableName);
    model->select();
    model->setHeaderData(1,Qt::Horizontal,tr("成员"));
    view->setModel(model);
    view->hideColumn(0);
    view->setColumnWidth(1,150);

    edit = new QLineEdit;
    QFormLayout *layout1 = new QFormLayout;
    layout1->addRow(tr("家庭成员："),edit);
    submitBtn = new QPushButton(tr("添加成员"));
    submitBtn->setDefault(true);
    modifyBtn = new QPushButton(tr("修改后保存"));
    delBtn    = new QPushButton(tr("删除"));
    closeBtn = new QPushButton(tr("关闭"));

    QVBoxLayout *layout2 = new QVBoxLayout;
    layout2->addLayout(layout1);
    layout2->addWidget(submitBtn);
    layout2->addWidget(modifyBtn);
    layout2->addWidget(delBtn);
    layout2->addWidget(closeBtn);

    QHBoxLayout *layout3 = new QHBoxLayout;
    layout3->addWidget(view);
    layout3->addLayout(layout2);
    this->setLayout(layout3);
}
