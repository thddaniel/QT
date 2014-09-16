#include "InputWindow.h"
#include<QLabel>
#include<QLineEdit>
#include<QComboBox>
#include<QPlainTextEdit>
#include<QPushButton>
#include<QTableView>
#include<QSqlRelationalTableModel>
#include<QGroupBox>
#include<QFormLayout>
#include<QDateEdit>
#include<QGridLayout>
#include<QDataWidgetMapper>
#include<QSqlRelationalDelegate>
#include<QTextEdit>
#include<QDebug>
#include<QModelIndexList>
#include<QMessageBox>
#include<QHBoxLayout>
#include<QDoubleSpinBox>
#include<QApplication>
InputWindow::InputWindow(QWidget *parent) :
    QWidget(parent)
{
    set_window_layout();
    CreateMapper();
    CreateConnection();
}
void InputWindow::modify()
{
    if(model->rowCount() == 0){
        QMessageBox::information(NULL,tr("�޸�ʧ��"),tr("�Բ�������δ��Ӽ�¼���޷��޸ģ�"));
        return ;}
    model->submitAll();
    QMessageBox::information(NULL,tr("�޸ļ�¼"),tr("�޸���ɣ������ѱ��棡"),
                                     QMessageBox::Yes);
    emit updateCost();
}

void InputWindow::deleteRecords()
{
    QItemSelectionModel *select_mode=view->selectionModel();
    QModelIndexList list = select_mode->selectedRows();
    if(0 ==  list.count())
    {
        QMessageBox::information(NULL,tr("ɾ����¼"),tr("�Բ�����ѡ������һ��Ҫɾ���ļ�¼��"),
                                         QMessageBox::Yes);
        return;
    }
    else
    {
        int ret=QMessageBox::information(NULL,tr("ɾ����¼"),tr("��ȷ��Ҫɾ���ü�¼��"),
                                         QMessageBox::Yes,QMessageBox::No);
        if(ret==QMessageBox::No)
            return;
       model->removeRows(list.at(0).row(),list.count());
       model->submitAll();
       QString date = QDate::currentDate().toString(Qt::ISODate);
       model->setFilter(QString("InputDate = '"+ date +"'"));
       model->select();
       emit updateCost();
    }
}

void InputWindow::submmit()
{

    QSqlTableModel familyModel;
    familyModel.setTable("FamilyMember");
    familyModel.select();
    int row = model->rowCount();
    model->insertRow(row);
    model->setData(model->index(row,1),familyModel.data(
          familyModel.index(familyMemberBox->currentIndex(),0)).toInt());
    model->setData(model->index(row,2),moneyEdit->text().toFloat());
    model->setData(model->index(row,3),desEdit->toPlainText());
    model->setData(model->index(row,4),dateEdit->date());
    model->setData(model->index(row,5),QDate::currentDate());
    model->submitAll();
    model->select();
    emit updateCost();
    view->scrollToBottom();
}
void InputWindow::updateMember()
{

    QString filter="InputDate = '"+ QDate::currentDate().toString(Qt::ISODate)+"'";
    model->setFilter(QString(filter));
    model->select();
    model->relationModel(1)->select();
}

void InputWindow::CreateMapper()
{

    model->setRelation(1,QSqlRelation("FamilyMember","MainID","Name"));
    model->select();
    QSqlTableModel *FamilyModel = model->relationModel(1);
    familyMemberBox->setModel(FamilyModel);
    familyMemberBox->setModelColumn(FamilyModel->fieldIndex("Name"));


    mapper = new QDataWidgetMapper(this);
    mapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);
    mapper->setModel(model);
    mapper->setItemDelegate(new QSqlRelationalDelegate(this));
    mapper->addMapping(familyMemberBox,1);
    qDebug()<<familyMemberBox->currentIndex();

}

void InputWindow::set_window_layout()
{

    familyMemberBox   = new QComboBox;
    moneyEdit         = new QDoubleSpinBox;

    moneyEdit->setRange(0,999999);
    desEdit           = new QTextEdit;
    dateEdit          = new QDateEdit;
    dateEdit->setDate(QDate::currentDate());
    dateEdit->setCalendarPopup(true);
    submitBtn         = new QPushButton(tr("�ύ"));
    submitBtn->setDefault(true);
    QFormLayout *layout1 = new QFormLayout;
    layout1->addRow(tr("�����ߣ�"),familyMemberBox);
    layout1->addRow(tr("����(Ԫ)��"),moneyEdit);
    layout1->addRow(tr("����˵����"),desEdit);
    layout1->addRow(tr("���ڣ�"),dateEdit);

    layout1->addWidget(submitBtn);
    inputBox = new QGroupBox(tr("����"));
    inputBox->setLayout(layout1);

    view = new QTableView;
    view->setSortingEnabled(true);
    modifyBtn = new QPushButton(tr("�޸ĺ󱣴�"));
    deleteBtn = new QPushButton(tr("ɾ��"));
    closeBtn  = new QPushButton(tr("�˳�"));
    QHBoxLayout *layout2 = new QHBoxLayout;
    layout2->addStretch(12);
    layout2->addWidget(modifyBtn);
    layout2->addWidget(deleteBtn);
    layout2->addWidget(closeBtn);

    QGridLayout *layout3 = new QGridLayout(this);
    layout3->addWidget(inputBox,0,0,4,3);
    layout3->addWidget(view,0,3,3,1);
    layout3->addLayout(layout2,3,3,1,4);
    this->setLayout(layout3);

    model = new QSqlRelationalTableModel(this);
    model->setTable("Account");
    QString filter="InputDate = '"+ QDate::currentDate().toString(Qt::ISODate)+"'";
    model->setFilter(QString(filter));
    model->select();

    model->setHeaderData(1,Qt::Horizontal,tr("������"));
    model->setHeaderData(2,Qt::Horizontal,tr("����"));
    model->setHeaderData(3,Qt::Horizontal,tr("����˵��"));
    model->setHeaderData(4,Qt::Horizontal,tr("����"));
    model->setHeaderData(5,Qt::Horizontal,tr("��д����"));
    view->setModel(model);
    view->hideColumn(0);
    view->setSelectionBehavior(QAbstractItemView::SelectRows);
    view->resizeColumnsToContents();
    view->setColumnWidth(1,120);
    view->setColumnWidth(2,80);
    view->setColumnWidth(3,300);
    view->setColumnWidth(4,100);
    view->setColumnWidth(5,100);
}
void InputWindow::CreateConnection()
{
    connect(submitBtn,SIGNAL(clicked()),this,SLOT(submmit()));
    connect(closeBtn,SIGNAL(clicked()),this,SLOT(myClose()));
    connect(deleteBtn,SIGNAL(clicked()),this,SLOT(deleteRecords()));
    connect(modifyBtn,SIGNAL(clicked()),this,SLOT(modify()));
}
void InputWindow::myClose()
{
    qApp->quit();
}
