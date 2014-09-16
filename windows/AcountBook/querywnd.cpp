#include"querywnd.h"
#include<QPushButton>
#include<QDate>
#include<QComboBox>
#include<QGroupBox>
#include<QTableView>
#include<QSqlTableModel>
#include<QHBoxLayout>
#include<QDateEdit>
#include<QRadioButton>
#include<QFormLayout>
#include<QGridLayout>
#include<QDebug>
#include<QDataWidgetMapper>
#include<QSqlRelationalDelegate>
#include<QHeaderView>
#include<QMessageBox>
#include"statisticalwnd.h"
#include<QLabel>
#include"mygraphwnd.h"
#include<QPrintDialog>
#include<QTextEdit>
#include<QPrinter>
#include<QRect>
#include<QGraphicsView>
QueryWnd::QueryWnd(QWidget *parent) :
    QWidget(parent)
{
    set_wnd_layout();
    createConnect();
    createMapper();
}
void QueryWnd::statistics()
{
    this->query();
   // StatisticalWnd *staticsticalWnd = new StatisticalWnd(filter);
   // staticsticalWnd->show();
}

void QueryWnd::createConnect()
{
    connect(queryAllMember,SIGNAL(clicked()),this,SLOT(setFamilyMember()));
    connect(queryOneMember,SIGNAL(clicked()),this,SLOT(setFamilyMember()));
    connect(queryDay,SIGNAL(clicked()),this,SLOT(setDateEnable()));
    connect(queryMonth,SIGNAL(clicked()),this,SLOT(setDateEnable()));
    connect(querySomeDay,SIGNAL(clicked()),this,SLOT(setDateEnable()));
    connect(queryBtn,SIGNAL(clicked()),this,SLOT(query()));
    connect(graphBtn,SIGNAL(clicked()),this,SLOT(showGraph()));
    connect(modifyBtn,SIGNAL(clicked()),this,SLOT(modify()));
    connect(deleteBtn,SIGNAL(clicked()),this,SLOT(deleteRecords()));
    connect(printBtn,SIGNAL(clicked()),this,SLOT(print()));
    //connect(statisticalBtn,SIGNAL(clicked()),this,SLOT(statistics()));
}
void QueryWnd::setFamilyMember()
{
    qDebug()<<"clicked";
    if(queryAllMember->isChecked())
        familyMemberBox->setEnabled(false);
    else
        familyMemberBox->setEnabled(true);
}
void QueryWnd::setDateEnable()
{
    if(querySomeDay->isChecked())
    {
        fromDate->setEnabled(true);
        endDate->setEnabled(true);
    }
    else
    {
        fromDate->setEnabled(false);
        endDate->setEnabled(false);
    }
}
void QueryWnd::updateMember()
{
    model->relationModel(1)->select();
}
void QueryWnd::updateAll()
{
    model->select();
}

void QueryWnd::createMapper()
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
}
void QueryWnd::query()
{
    QString filter2;
    filter2.clear();
    filter.clear();
    QSqlTableModel familyModel;
    familyModel.setTable("FamilyMember");
    familyModel.select();
    if(queryAllMember->isChecked())
        filter += "";
    else
        filter += QString("FamilyMember = %1").
                  arg(familyModel.data(
                      familyModel.index(familyMemberBox->currentIndex(),0)).toInt());//查询某个成员

    queryAllMember->isChecked() ? filter += "" : filter +=" and ";


    if(queryDay->isChecked())
    {
        filter += QString("date = '"+ QDate::currentDate().toString(Qt::ISODate)+"'");
        filter2 +=QString("date = '"+ QDate::currentDate().toString(Qt::ISODate)+"'");
    }
    else if(queryMonth->isChecked())
        {
        QDate from_Date ;
        from_Date.setDate(QDate::currentDate().year(),QDate::currentDate().month(),1);
        QDate end_Date ;
        end_Date.setDate(QDate::currentDate().year(),QDate::currentDate().month(),QDate::currentDate().daysInMonth());

        filter+="date >= '"+ from_Date.toString(Qt::ISODate) + "'  and  date <='"
                    +end_Date.toString(Qt::ISODate) +"'";
        filter2+="date >= '"+ from_Date.toString(Qt::ISODate) + "'  and  date <='"
                 +end_Date.toString(Qt::ISODate) +"'";
        }
    else
    {
        if(fromDate->date() > endDate->date())
        {
            QMessageBox::information(NULL,tr("日期错误"),tr("开始日期大于结束日期，请输入正确的日期！"));
            return;
        }
        filter+="date >= '"+ fromDate->date().toString(Qt::ISODate) + "'  and  date <='"
                    +endDate->date().toString(Qt::ISODate) +"'";
        filter2+="date >= '"+ fromDate->date().toString(Qt::ISODate) + "'  and  date <='"
                 +endDate->date().toString(Qt::ISODate) +"'";
    }
    qDebug()<<filter;
    model->setFilter(filter);
    model->select();

    if(model->rowCount() == 0){
        QMessageBox::information(NULL,tr("无结果"),tr("未找到有效记录！"));
        showTotal(filter2);
        return;}
    showTotal(filter2);

}
void QueryWnd::showTotal(QString & filter)
{
    QList<int> list;
    QStringList str;
    QSqlTableModel familyModel;
    QString string = "";
    familyModel.setTable("FamilyMember");
    familyModel.select();
    for(int i=0; i<familyModel.rowCount();i++)
    {
        list.append(familyModel.data(familyModel.index(i,0)).toInt());
        str.append(familyModel.data(familyModel.index(i,1)).toString());
    }
    str.append(tr("总共花费"));
    QList<float> total;
    QSqlQueryModel queryModel;
    for(int i=0; i<list.count(); i++)
    {
        queryModel.setQuery(QString("SELECT SUM(Money) FROM Account where FamilyMember = %1 and %2")
                            .arg(list.at(i)).arg(filter));
        total.append(queryModel.data(queryModel.index(0,0)).toFloat());
    }
    queryModel.setQuery(QString("SELECT SUM(Money) FROM Account where %2")
                        .arg(filter));
    total.append(queryModel.data(queryModel.index(0,0)).toFloat());

    for(int i=0; i<str.count(); i++)
    {
      if(i%4 == 0) string+="<br>";
      string +=QString("%1:%2      ").arg(str.at(i)).arg(total.at(i));

    }

    label->setText(QString(tr("统计:(所选日期内的成员花费统计)"))+string);
}
void QueryWnd::showGraph()
{
    MyGraphWnd *graphWnd = new MyGraphWnd;
    graphWnd->resize(1200,600);
    graphWnd->show();
}
void QueryWnd::modify()
{
    if(model->rowCount() == 0)
        if(model->rowCount() == 0){
            QMessageBox::information(NULL,tr("修改失败"),tr("对不起，您尚未添加记录，无法修改！"));
            return ;}
        model->submitAll();
        emit updateCost();
        QMessageBox::information(NULL,tr("修改记录"),tr("修改完成，数据已保存！"),
                                         QMessageBox::Yes);
}
void QueryWnd::deleteRecords()
{
    QItemSelectionModel *select_mode=view->selectionModel();
    QModelIndexList list = select_mode->selectedRows();
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
       emit updateCost();

    }
}
void QueryWnd::print()
{
    if(model->rowCount() == 0)
    {
        QMessageBox::information(NULL,tr("无记录"),tr("没有记录可以打印！请重新查询！"));
        return;
    }
    QPrinter printer;

    printer.setPaperSize(QPrinter::A4);
    printer.setPageSize(QPrinter::A4);
    printer.setPrintRange(QPrinter::AllPages);
    int row = model->rowCount();
    int i;
    QString html;
    html+= "</td>"
    "<td width=100% >"
    "<table border=1>"
    "<tr><td align=center width=20%>"+tr("家庭成员")+"</td><td align=center width=20%>"+tr("消费数额")+"</td><td align=center width=40%>"+tr("消费说明")+"</td>"
            "<td align=center width=20%>"+tr("消费日期")+"</td>";
    for(i=0; i<row;i++)
    {
        QString item_name    = model->data(model->index(i,1)).toString();
        QString cost         = model->data(model->index(i,2)).toString();
        QString date         = model->data(model->index(i,3)).toString();
        QString inputDate    = model->data(model->index(i,4)).toString();
        html+="<tr><td align=center width=20%><font size =4>"+item_name+"</td></font><td align=center width=20%><font size =4>"+cost
              + "</td></font><td align=center width=40%><font size =4>"+date+"</td></font><td align=center width=20%><font size =4>"+inputDate+"</td></font>";


    }
    html+="</td>";
    html+= "</table>";




    html+="<p>"+label->text()+"</p>";



    QTextEdit editor ;


    QPrintDialog printDialog(&printer,this);
    if( printDialog.exec())
    {
    editor.setHtml(html);
    editor.print(&printer);
    }
}

void QueryWnd::set_wnd_layout()
{

    queryAllMember = new QRadioButton(tr("查看所有成员消费"));
    queryOneMember = new QRadioButton(tr("查看单个家庭成员消费"));
    queryAllMember->setChecked(true);
    QHBoxLayout *layout1 = new QHBoxLayout;
    layout1->addWidget(queryAllMember);
    layout1->addWidget(queryOneMember);
    box1 = new QGroupBox(tr("家庭成员选择"));
    box1->setLayout(layout1);

    queryDay = new QRadioButton(tr("查看当天消费"));
    queryDay->setChecked(true);
    queryMonth = new QRadioButton(tr("查看当月消费"));
    querySomeDay = new QRadioButton(tr("查看某时间段消费"));
    QHBoxLayout *layout2 = new QHBoxLayout;
    layout2->addWidget(queryDay);
    layout2->addWidget(queryMonth);
    layout2->addWidget(querySomeDay);
    box2 = new QGroupBox(tr("消费时间选择"));
    box2->setLayout(layout2);

    familyMemberBox = new QComboBox;
    fromDate = new QDateEdit(QDate::currentDate());
    endDate  = new QDateEdit(QDate::currentDate());
    fromDate->setCalendarPopup(true);
    endDate->setCalendarPopup(true);
    familyMemberBox->setEnabled(false);
    fromDate->setEnabled(false);
    endDate->setEnabled(false);

    QFormLayout *layout3 = new QFormLayout;
    layout3->addRow(tr("家庭成员："),familyMemberBox);
    layout3->addRow(tr("开始日期："),fromDate);
    layout3->addRow(tr("结束日期："),endDate);
    box3 = new QGroupBox(tr("查看条件"));
    box3->setLayout(layout3);

   // statisticalBtn = new QPushButton(tr("统计(所选日期内的成员花费统计)"));
    graphBtn = new QPushButton(tr("统计图"));
    queryBtn = new QPushButton(tr("查看/刷新"));

    QHBoxLayout *layout4 = new QHBoxLayout;
    layout4->addStretch(12);
    layout4->addWidget(graphBtn);
    layout4->addWidget(queryBtn);

    QVBoxLayout *layout5 = new QVBoxLayout;
    layout5->addWidget(box1);
    layout5->addWidget(box2);
    layout5->addWidget(box3);
    layout5->addLayout(layout4);

    label = new QLabel(tr("统计:(所选日期内的成员花费统计)"));
    pix = new   QLabel;
    pix->setPixmap(QPixmap("images/calculator_2.png"));

    printBtn = new QPushButton(tr("打印"));
    modifyBtn = new QPushButton(tr("保存修改数据"));
    deleteBtn = new QPushButton(tr("删除"));

    QHBoxLayout *labelLayout = new QHBoxLayout;
    labelLayout->addWidget(pix);
    labelLayout->addWidget(label);
    labelLayout->addStretch(12);
    labelLayout->addWidget(printBtn);
    labelLayout->addWidget(modifyBtn);
    labelLayout->addWidget(deleteBtn);


    view = new QTableView;
    view->setToolTip(tr("点击表头内容，可按标题排序"));
    model = new QSqlRelationalTableModel(this);
    model->setTable("Account");
    model->setFilter("MainID = -1");
    model->select();
    model->setHeaderData(1,Qt::Horizontal,tr("消费者"));
    model->setHeaderData(2,Qt::Horizontal,tr("花销"));
    model->setHeaderData(3,Qt::Horizontal,tr("花销说明"));
    model->setHeaderData(4,Qt::Horizontal,tr("日期"));
    model->setHeaderData(5,Qt::Horizontal,tr("填写日期"));
    view->setModel(model);
    view->hideColumn(0);
    view->setSortingEnabled(true);
    view->setSelectionBehavior(QAbstractItemView::SelectRows);
    view->resizeColumnsToContents();
    view->setColumnWidth(1,120);
    view->setColumnWidth(2,80);
    view->setColumnWidth(3,300);
    view->setColumnWidth(4,100);
    view->setColumnWidth(5,100);

    QVBoxLayout *layout6 = new QVBoxLayout;
    layout6->addWidget(view);
    layout6->addLayout(labelLayout);
    QGridLayout *layout7 = new QGridLayout;
    layout7->addLayout(layout5,0,0,5,3);
    layout7->addLayout(layout6,0,3,5,1);


    this->setLayout(layout7);

}
