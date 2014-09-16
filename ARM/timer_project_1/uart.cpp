#include "uart.h"

uart::uart()
{
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint);
    setGeometry(0,0,480,272);
    QPixmap testBackGroundPixmap;
    testBackGroundPixmap.load("image/background.jpg");
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(testBackGroundPixmap));
    this->setPalette(palette);

    textBrowser = new QTextBrowser(this);
    textBrowser->setGeometry(QRect(50, 10, 361, 241));

    BackButton = new QPushButton(this);
    BackButton->setIcon(QPixmap("image/back.jpg"));
    BackButton->setIconSize(QPixmap("image/back.jpg").size());
    BackButton->setGeometry(435,245,39,25);
    connect(BackButton,SIGNAL(clicked()),this,SLOT(back()));


    myCom1 = new Posix_QextSerialPort("/dev/tq2440_serial1",QextSerialBase::Polling);
     //定义串口对象，指定串口名和查询模式，这里使用Polling
    myCom1->setBaudRate(BAUD115200);
    //波特率设置，我们设置为115200
    myCom1->setDataBits(DATA_8);
    //数据位设置，我们设置为8位数据位
    myCom1->setParity(PAR_NONE);
    //奇偶校验设置，我们设置为无校验
    myCom1->setStopBits(STOP_1);
    //停止位设置，我们设置为1位停止位
    myCom1->setFlowControl(FLOW_OFF);
    //数据流控制设置，我们设置为无数据流控制
    myCom1->setTimeout(1);
    //延时设置，我们设置为延时1ms,
    myCom1->open(QIODevice::ReadWrite);

    readTimer = new QTimer(this);
    readTimer->start(1000);
    //设置延时为1000ms,每隔一秒读取缓冲区
    connect(readTimer,SIGNAL(timeout()),this,SLOT(ReadCom()));
    //信号和槽函数关联，延时一段时间，进行读串口操作
}
void uart::ReadCom()
{
    readTimer->stop();
   /*
    control_data2.clear();
    control_data2=myCom1->readAll();
    QString temp  = control_data2.data();
    textBrowser->insertPlainText(temp);
    //textBrowser->setSource(temp);
    myCom1->flush();*/

    QByteArray temp = myCom1->readAll();
    textBrowser->insertPlainText(temp);
    //myCom1->write("2");

    readTimer->start(1000);

}
void uart::back()
{
    this->close();
}
