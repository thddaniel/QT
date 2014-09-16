#include "mainwindow.h"

mainwindow::mainwindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint);
    setGeometry(0,0,480,272);
    /* 界面背景 */
    QPixmap BackGroundPixmap;
    BackGroundPixmap.load("image/main_background.jpg");
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(BackGroundPixmap));
    this->setPalette(palette);

    /* 家电控制#include <QTextCodec> */
    furnitureButton = new QPushButton(this);
    furnitureButton->setIcon(QPixmap("image/jiadian.jpg"));
    furnitureButton->setIconSize(QPixmap("image/jiadian.jpg").size());
    furnitureButton->setGeometry(20,10,80,90);
    connect(furnitureButton,SIGNAL(clicked()),this,SLOT(on_furnitureButton_clicked()));

    /* 手机界面拨号 */
    PhoneButton = new QPushButton(this);
    PhoneButton->setIcon(QPixmap("image/dianhua.jpg"));
    PhoneButton->setIconSize(QPixmap("image/dianhua.jpg").size());
    PhoneButton->setGeometry(140,10,80,90);
    connect(PhoneButton,SIGNAL(clicked()),this,SLOT(on_PhoneButton_clicked()));

    /*发送短信*/
    MessageButton = new QPushButton(this);
    MessageButton->setIcon(QPixmap("image/duanxin.jpg"));
    MessageButton->setIconSize(QPixmap("image/duanxin.jpg").size());
    MessageButton->setGeometry(260,10,80,90);
    //qDebug()<<"hello world";
    message = new Message;
    connect(MessageButton,SIGNAL(clicked()),message,SLOT(show()));

    /*播放音乐*/
    MusicButton = new QPushButton(this);
    MusicButton->setIcon(QPixmap("image/yinyue.jpg"));
    MusicButton->setIconSize(QPixmap("image/yinyue.jpg").size());
    MusicButton->setGeometry(380,10,80,90);
    Musicwidget = new MusicWidget;
    Musicwidget->setGeometry(84,40,480,272);
    connect(MusicButton,SIGNAL(clicked()),Musicwidget,SLOT(show()));

    /* 串口调试 */
    uartButton = new QPushButton(this);
    uartButton->setText(tr("调试"));
    uartButton->setGeometry(435,200,45,25);
    connect(uartButton,SIGNAL(clicked()),this,SLOT(on_uartButton_clicked()));
}
void mainwindow::on_furnitureButton_clicked()
{
    Furniture.show();
}
void mainwindow::on_PhoneButton_clicked()
{
  telWidget.show();
}
void mainwindow::on_uartButton_clicked()
{
   Uart.show();
}
mainwindow::~mainwindow()
{

}
