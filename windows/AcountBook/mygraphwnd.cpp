#include "mygraphwnd.h"
#include<QToolButton>
#include<QToolBox>
#include<QButtonGroup>
#include<QGridLayout>
#include<QLabel>
#include<QSqlTableModel>
#include<QGraphicsView>
#include<QPalette>
#include<QBitmap>
//#include"mywidget.h"
#include<QGraphicsScene>
#include<QDebug>
#include<QGraphicsLineItem>
#include<QTableView>
#include"mytoolbutton.h"
#include<QSqlQueryModel>
#include<QDate>
#include<QGraphicsEllipseItem>
#include"mygraphicsitem.h"
#include<QSqlRelationalTableModel>
#include<QRadioButton>
#include<QPushButton>
#include<QPrinter>
#include<QPrintDialog>
MyGraphWnd::MyGraphWnd(QWidget *parent) :
    QDialog(parent)
{
    backgroundGroup = new QButtonGroup(this);
    backgroundGroup->setExclusive(false);
    familyMemberGroup = new  QButtonGroup(this);
    familyMemberGroup->setExclusive(false);

    monthGroup = new QButtonGroup(this);
    month = QDate::currentDate().month();
    member ="";


    this->setAttribute(Qt::WA_DeleteOnClose);
    createWnd();

    connect(backgroundGroup, SIGNAL(buttonClicked(int)),
            this, SLOT(backgroundButtonGroupClicked(int)));
    connect(familyMemberGroup, SIGNAL(buttonClicked(int)),
            this, SLOT(familyMemberButtonGroupClicked(int)));
    connect(monthGroup, SIGNAL(buttonClicked(int)),
            this, SLOT(monthButtonGroupClicked(int)));
    this->setWindowTitle(tr("月花费走势图"));
}
void MyGraphWnd::backgroundButtonGroupClicked(int id)
{

    QPixmap pix =backgroundGroup->button(id)->icon().pixmap(QSize(100,100));
    scene->setBackgroundBrush(pix);
    scene->update();
    view->update();

}
void MyGraphWnd::monthButtonGroupClicked(int id)
{

    month = id;
    qDebug()<<"month:"<<month;
}

void MyGraphWnd::familyMemberButtonGroupClicked(int id)
{



    QSqlQueryModel model;

    bool conditon = true;
    //找出按下的是哪一个成员
    if((qobject_cast<MyToolButton *>(familyMemberGroup->button(id)))->getID() == -1)
    {
        conditon = false;
        member=QString(tr("全部成员"));
    }
    else
    {
        conditon = true;
        model.setQuery(QString("SELECT Name FROM FamilyMember where MainID = %1")
                       .arg((qobject_cast<MyToolButton *>(familyMemberGroup->button(id)))->getID()));
        member = model.data(model.index(0,0)).toString();
    }
    //画坐标系
    QList<QGraphicsItem *> list = scene->items();
    for(int i=0; i<list.count();i++)
        scene->removeItem(list.at(i));
    drawCoordinate();



    float max=0; //找出一个月中花销的最大值
    QDate date;
    date.setDate(QDate::currentDate().year(),month,1);
    float data[date.daysInMonth()];//每天花销的总和
    float total=0;//一个月花销的总和



    //根据成员把各成员每天的数据求和，画图
    for(int i=1; i<=date.daysInMonth();i++)
    {

    date.setDate(date.year(),date.month(),i);
    //qDebug()<<"date:"<<date;
    if(conditon == false)
         model.setQuery(QString("SELECT SUM(Money) FROM Account where  date = '%1'" ).arg(date.toString(Qt::ISODate)));
    else
        model.setQuery(QString("SELECT SUM(Money) FROM Account where FamilyMember = %1 and date = '%2'" )
                   .arg((qobject_cast<MyToolButton *>(familyMemberGroup->button(id)))->getID())
                   .arg(date.toString(Qt::ISODate)));


    data[i-1] = model.data(model.index(0,0)).toFloat();
    total+=data[i-1];
    if(max < data[i-1])
        max = data[i-1];
    }
    if(total == 0)
    {
        showDefGraph();
        return;
    }
    int ID = (qobject_cast<MyToolButton *>(familyMemberGroup->button(id)))->getID();
    for(int i =0; i< date.daysInMonth();i++)
        showGraph(ID,i,data[i],max);
    showLine(data,date.daysInMonth(),max);

}
void MyGraphWnd::showGraph(int &id,int &index,float &data,float &max)//画点
{
    MyGraphicsItem *point = new MyGraphicsItem;
    connect(point,SIGNAL(clicked(int,int)),this,SLOT(showDetailData(int,int)));
    int day=index+1;
    point->setDay(day);
    point->setID(id);
    point->setZValue(5);
    float pos = -data/(max/360);
    point->setPos(index*20,pos);
    point->setFlag(QGraphicsItem::ItemIsSelectable);
    scene->addItem(point);


    if(data > 0)
    {
    QGraphicsSimpleTextItem *text = new QGraphicsSimpleTextItem;
    text->setText(QString("%1").arg(data));
    text->setPos(index*20+10,pos);
    text->setZValue(6);
    scene->addItem(text);
    scene->addLine(index*20,0,index*20,pos,QPen(Qt::darkGreen,3,Qt::DashDotLine));
    }

}
void MyGraphWnd::showLine(float data[], int num,float &max)
{
    MyGraphicsLine *line;
    //qreal pos_y = -data[i]/(max/360) - (-data[i+1]/(max/360));

    for(int i=0; i<num-1;i++)
    {
        qreal pos_y =(-data[i+1] + data[i])/(max/360);
        line = new MyGraphicsLine;
        line->setLine(0,0,20,pos_y);
        line->setPen(QPen(Qt::blue,3));
        line->setPos(i*20,-data[i]/(max/360));
        scene->addItem(line);
        //scene->addLine(i*20,-data[i]/(max/360),(i+1)*20,-data[i+1]/(max/360),QPen(Qt::blue,3));

    }
}

void MyGraphWnd::showDefGraph() //没有结果的时候，在view中显示缺省的点
{
    MyGraphicsItem *point ;
    model->setFilter("MainID = -1");
    QDate date;
    date.setDate(QDate::currentDate().year(),month,1);
    for(int i=0;i<date.daysInMonth();i++)
    {
        point = new MyGraphicsItem;
        point->setPos(i*20,0);
        scene->addItem(point);
    }
}

void MyGraphWnd::showDetailData(int id, int day)//点击点的时候，在表格中显示详细数据
{
    qDebug()<<"in showDetailData";

    QDate date;
    date.setDate(QDate::currentDate().year(),month,day);

    if(id == -1)
      model->setFilter(QString("Date = '%1'").arg(date.toString(Qt::ISODate)));
    else
      model->setFilter(QString("FamilyMember = %1 and Date = '%2'").arg(id).arg(date.toString(Qt::ISODate)));
    model->select();

}

QToolBox * MyGraphWnd::createToolBox()
{
    toolBox = new QToolBox;
    toolBox->addItem(createFamilyMember(),tr("家庭成员"));
    toolBox->addItem(createMonth(),tr("月份选择"));
    toolBox->addItem(createBackground(),tr("背景"));
    return toolBox;
}
void MyGraphWnd::createWnd()
{
    QGridLayout *layout = new QGridLayout(this);

    scene = new QGraphicsScene;

    drawCoordinate();
    view = new QGraphicsView;
    view->setScene(scene);
    view->setToolTip(tr("每点表示当天的总消费，点击每个点可以查看每笔消费情况"));
    table = new QTableView;
    model = new QSqlRelationalTableModel(this);

    model->setTable("Account");
    model->setRelation(1,QSqlRelation("FamilyMember","MainID","Name"));
    model->setHeaderData(1,Qt::Horizontal,tr("消费者"));
    model->setHeaderData(2,Qt::Horizontal,tr("花销"));
    model->setHeaderData(3,Qt::Horizontal,tr("花销说明"));
    model->setHeaderData(4,Qt::Horizontal,tr("日期"));
    model->setHeaderData(5,Qt::Horizontal,tr("填写日期"));
    model->setFilter("MainID = -1");
    table->setModel(model);
    table->hideColumn(0);
    table->setSortingEnabled(true);

    QPushButton *printBtn = new QPushButton(tr("打印图形"));
    connect(printBtn,SIGNAL(clicked()),this,SLOT(print()));
    QPushButton *closeBtn = new QPushButton(tr("关闭"));
    connect(closeBtn,SIGNAL(clicked()),this,SLOT(close()));
    QHBoxLayout *hlayout = new QHBoxLayout;
    hlayout->addStretch(12);
    hlayout->addWidget(printBtn);
    hlayout->addWidget(closeBtn);
    QVBoxLayout *vlayout = new QVBoxLayout;
    vlayout->addWidget(table);
    vlayout->addLayout(hlayout);

    layout->addWidget(createToolBox(),0,0,1,2);
    layout->addWidget(view,0,2,1,1);
    layout->addLayout(vlayout,0,3,1,1);
    this->setLayout(layout);
}
void  MyGraphWnd::drawCoordinate()
{
     QGraphicsLineItem *lineItem1 = new QGraphicsLineItem;
     QGraphicsLineItem *lineItem2 = new QGraphicsLineItem;
     lineItem1->setFlag(QGraphicsItem::ItemIsSelectable);
     lineItem2->setFlag(QGraphicsItem::ItemIsSelectable);
     lineItem1->setPen(QPen(Qt::red,3));
     lineItem2->setPen(QPen(Qt::red,3));

    lineItem1->setPos(0,0);
    lineItem2->setPos(0,0);
    lineItem1->setLine(0,0,620,0);//X轴
    lineItem2->setLine(0,0,0,-400);//Y轴


    scene->addItem(lineItem1);
    scene->addItem(lineItem2);

    QGraphicsLineItem *item;
    QGraphicsTextItem *text;
    for(int i=0; i<31;i++)
    {
        item = new QGraphicsLineItem;
        item->setLine(0,0,0,-10);
        item->setPos(20*i,0);
        item->setPen(QPen(Qt::red,3));
        scene->addItem(item);

        text = new QGraphicsTextItem(QString("%1").arg(i+1));
        text->setPos(20*i-8,6);
        scene->addItem(text);

    }

    text = new QGraphicsTextItem(QString(tr("%1年%2月份消费折线图\n消费者:")).arg(QDate::currentDate().year()).arg(month)
                                 +member);
    qDebug()<<"member:"<<member;
    text->setPos(0,-460);
    scene->addItem(text);


}

QDialog *MyGraphWnd::createBackground()
{
    QGridLayout *layout = new QGridLayout;
    QList<QString>name;
    name<<"Blue Grid"
        <<"white Grid"
        <<"Gray Grid"
        <<"No Grid";
    QList<QString>icon;
    icon<<"images/background1.png"
        <<"images/background2.png"
        <<"images/background3.png"
        <<"images/background4.png";
    for(int i=0; i<4; i++)
        layout->addWidget(createCell(name.at(i),icon.at(i),backgroundGroup),i/2,i%2,1,1);
    layout->setRowStretch(2, 10);
    layout->setColumnStretch(2, 10);

    QDialog *widget = new QDialog;
    widget->setLayout(layout);
    return widget;

}
QDialog* MyGraphWnd::createMonth()
{
    QStringList list;
    list<<tr("一月份")<<tr("二月份")<<tr("三月份")<<tr("四月份")
        <<tr("五月份")<<tr("六月份")<<tr("七月份")<<tr("八月份")
        <<tr("九月份")<<tr("十月份")<<tr("十一月份")<<tr("十二月份");
    QGridLayout *layout = new QGridLayout;
    QRadioButton *btn;
    for(int i=0; i<12;i++)
    {
        btn = new QRadioButton(list.at(i));

        layout->addWidget(btn,i/2,i%2);
        monthGroup->addButton(btn);
        monthGroup->setId(btn,i+1);

    }
     layout->setRowStretch(11,10);
     layout->setColumnStretch(1,10);
    (qobject_cast<QRadioButton *>(monthGroup->button(month)))->setChecked(true);
    QDialog *dlg = new QDialog;
    dlg->setLayout(layout);
    return dlg;
}

QDialog* MyGraphWnd::createFamilyMember()
{
    QList<QString>name;
    QList<QString>icon;
    icon<<"images/maomaoguai_01.png"
        <<"images/maomaoguai_02.png"
        <<"images/maomaoguai_03.png"
        <<"images/maomaoguai_04.png";
    QGridLayout *layout = new QGridLayout;

    QSqlTableModel model;
    model.setTable("FamilyMember");
    model.select();
    int i=0;
    for(; i<model.rowCount(); i++)
    {
        //familyMemberIndex.append(model.data(model.index(i,0)).toInt());
        name.append(model.data(model.index(i,1)).toString());
        layout->addWidget(createCell(name.at(i),icon.at(i%4),familyMemberGroup,model.data(model.index(i,0)).toInt()),
                          i/2,i%2,1,1);
    }
    //familyMemberIndex.append(-1);
    name.append(tr("全部成员"));
    layout->addWidget(createCell(name.at(i),icon.at(i%4),familyMemberGroup,-1));

    layout->setRowStretch(model.rowCount()-1, 10);
    layout->setColumnStretch(2, 10);

    QDialog *widget = new QDialog;
    widget->setLayout(layout);
    return widget;
}
QWidget* MyGraphWnd::createCell(const QString & text,const QString & iconPath,QButtonGroup *group )
{
    QToolButton *btn = new QToolButton;
    btn->setIcon(QIcon(iconPath));
    btn->setIconSize(QSize(40,40));
    btn->setCheckable(true);
    group->addButton(btn);
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(btn,0,0,Qt::AlignHCenter);
    layout->addWidget(new QLabel(text), 1, 0, Qt::AlignHCenter);
    QWidget *widget = new QWidget;
    widget->setLayout(layout);
    return widget;
}
QWidget* MyGraphWnd::createCell(const QString & text,const QString & iconPath,QButtonGroup *group,int id)
{
    MyToolButton *btn = new MyToolButton(id);
    btn->setIcon(QIcon(iconPath));
    btn->setIconSize(QSize(40,40));
    btn->setCheckable(true);
    qDebug()<<btn->getID();
    group->addButton(btn);
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(btn,0,0,Qt::AlignHCenter);
    layout->addWidget(new QLabel(text), 1, 0, Qt::AlignHCenter);
    QWidget *widget = new QWidget;
    widget->setLayout(layout);
    return widget;
}
void MyGraphWnd::print()
{
    QPrinter printer(QPrinter::HighResolution);
    printer.setPaperSize(QPrinter::A4);

    QPrintDialog printDialog(&printer,this);
    if( printDialog.exec())
    {
     QPainter painter(&printer);
    scene->render(&painter);
    }


}
