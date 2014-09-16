#include "display.h"

display::display(QWidget *parent)
    : QWidget(parent)
{

    isshowtop=2;isshowcpu=0;isshowmem=0;

    //lable nws
    lableNWS =new QLabel();lableNWS->setMinimumWidth(145);

    //lable mem
    lableMem =new QLabel();lableMem->setMinimumWidth(145);

    //lable cpu
    lableCPU =new QLabel();lableCPU->setMinimumWidth(145);

    buttonNWS = new QPushButton();buttonNWS->setMaximumSize(20,20);
    connect(buttonNWS,SIGNAL(clicked()),this,SLOT(showdetail()));
    QPushButton *buttonNWS2=new QPushButton();buttonNWS2->setMaximumSize(20,20);

    buttonMem = new QPushButton();buttonMem->setMaximumSize(20,20);
    //buttonMem2=new QPushButton();buttonMem2->setMaximumSize(20,20);

    buttonCPU = new QPushButton();buttonCPU->setMaximumSize(20,20);

    lableCPU->setVisible(false);
    buttonCPU->setVisible(false);

    lableMem->setVisible(false);
    buttonMem->setVisible(false);

    QResource::registerResource("resource.qrc");
    QPixmap icon1(":/qss/ubuntu.png");    //显示cpu图标
    QPixmap iconmem(":/qss/mem.png");
    QPixmap iconcpu(":/qss/cpu.png");
    buttonNWS->setIcon(icon1);
    buttonMem->setIcon(iconmem);
    buttonCPU->setIcon(iconcpu);

    QHBoxLayout *layoutsmallNWS =new QHBoxLayout();
    layoutsmallNWS->addWidget(buttonNWS);
    layoutsmallNWS->addWidget(lableNWS);
    //layoutsmallNWS->addWidget(buttonNWS2);

    QHBoxLayout *layoutsmallMem =new QHBoxLayout();
    layoutsmallMem->addWidget(buttonMem);
    layoutsmallMem->addWidget(lableMem);
    //layoutsmallMem->addWidget(buttonMem2);

    QHBoxLayout *layoutsmallCPU =new QHBoxLayout();
    layoutsmallCPU->addWidget(buttonCPU);
    layoutsmallCPU->addWidget(lableCPU);
    //layoutsmallCPU->addWidget(buttonCPU2);

    QVBoxLayout *layoutmid=new QVBoxLayout();
    layoutmid->addLayout(layoutsmallCPU);
    layoutmid->addLayout(layoutsmallMem);
    layoutmid->addLayout(layoutsmallNWS);


    speed1 = new speed();
    QTimer * timer1 =new QTimer();
    timer1->start(1000);
    connect(timer1,SIGNAL(timeout()),this,SLOT(refreshinfo()));

    this->setLayout(layoutmid);

    QPoint lLocation = getLocaTion();
    this->move(lLocation.x(),lLocation.y());

    this->setAttribute(Qt::WA_TranslucentBackground, true);
    Qt::WindowFlags flags = 0;
    flags = Qt::Window;
    flags |=Qt::FramelessWindowHint;//除去边框
    flags |= Qt::WindowStaysOnTopHint;//前端显示
    this->setWindowFlags(flags);

    this->setStyleSheet("border-radius: 0px;");



}



display::~display()
{
    QFile location("/usr/share/games/networkspeed/location.txt");
    if(location.open(QFile::WriteOnly | QFile::Truncate))
    {
        QTextStream out(&location);
        out<<this->pos().x()<<endl;
        out<<this->pos().y()<<endl;

    }
}
