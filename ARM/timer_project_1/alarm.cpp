#include"alarm.h"
#include<QtGui>
static int val;
static int fd;
Alarm::Alarm(QWidget * parent)
	:QDialog(parent)
{

    setWindowFlags(Qt::Window|Qt::FramelessWindowHint);
    setGeometry(0,0,480,272);
    QPixmap testBackGroundPixmap;
    testBackGroundPixmap.load("image/background.jpg");
    QPalette palette;
    palette.setBrush(this->backgroundRole(), QBrush(testBackGroundPixmap));
    this->setPalette(palette);

    ButtonClock = new QPushButton(this);
    ButtonClock->setIcon(QPixmap("image/dianfanbao.jpg"));
    ButtonClock->setIconSize(QPixmap("image/dianfanbao.jpg").size());
    ButtonClock->setGeometry(300,80,150,154);
    connect(ButtonClock,SIGNAL(clicked()),this,SLOT(ButtonClock_show()));
/*
    fd = ::open("/dev/firstled", O_RDWR);
    if(fd < 0)
    {
         perror("can't open device leds");
         exit(1);
    }
*/
    ButtonLed = new QPushButton(this);
    ButtonLed->setIcon(QPixmap("image/led1on.jpg"));
    ButtonLed->setIconSize(QPixmap("image/led1on.jpg").size());
    ButtonLed->setGeometry(90,80,60,49);
    connect(ButtonLed,SIGNAL(clicked()),this,SLOT(on_ButtonLed_clicked()));

    ButtonLed2 = new QPushButton(this);
    ButtonLed2->setIcon(QPixmap("image/led1on.jpg"));
    ButtonLed2->setIconSize(QPixmap("image/led1on.jpg").size());
    ButtonLed2->setGeometry(200,80,60,49);
    connect(ButtonLed2,SIGNAL(clicked()),this,SLOT(on_ButtonLed2_clicked()));

    ButtonLed3 = new QPushButton(this);
    ButtonLed3->setIcon(QPixmap("image/led1on.jpg"));
    ButtonLed3->setIconSize(QPixmap("image/led1on.jpg").size());
    ButtonLed3->setGeometry(90,180,60,49);
    connect(ButtonLed3,SIGNAL(clicked()),this,SLOT(on_ButtonLed3_clicked()));

    ButtonLed4 = new QPushButton(this);
    ButtonLed4->setIcon(QPixmap("image/led1on.jpg"));
    ButtonLed4->setIconSize(QPixmap("image/led1on.jpg").size());
    ButtonLed4->setGeometry(200,180,60,49);
    connect(ButtonLed4,SIGNAL(clicked()),this,SLOT(on_ButtonLed4_clicked()));


};
void Alarm::on_ButtonLed_clicked()
{
    static char flag = 0;
    flag = !flag;
    if ( flag == 1 )
    {
        val = 1;
        ButtonLed->setIcon(QPixmap("image/led1off.jpg"));
    }
    else
    {
        val = 5;
        ButtonLed->setIcon(QPixmap("image/led1on.jpg"));
    }

   // ::write(fd, &val, 4);
}

void Alarm::on_ButtonLed2_clicked()
{
    static char flag = 0;
    flag = !flag;
    if ( flag == 1 )
    {
        val = 2;
        ButtonLed2->setIcon(QPixmap("image/led1off.jpg"));
    }
    else
    {
        val = 6;
        ButtonLed2->setIcon(QPixmap("image/led1on.jpg"));
    }

   // ::write(fd, &val, 4);
}
void Alarm::on_ButtonLed3_clicked()
{
    static char flag = 0;
    flag = !flag;
    if ( flag == 1 )
    {
        val = 3;
        ButtonLed3->setIcon(QPixmap("image/led1off.jpg"));
    }
    else
    {
        val = 7;
        ButtonLed3->setIcon(QPixmap("image/led1on.jpg"));
    }

   // ::write(fd, &val, 4);
}
void Alarm::on_ButtonLed4_clicked()
{
    static char flag = 0;
    flag = !flag;
    if ( flag == 1 )
    {
        val = 4;
        ButtonLed4->setIcon(QPixmap("image/led1off.jpg"));
    }
    else
    {
        val = 8;
        ButtonLed4->setIcon(QPixmap("image/led1on.jpg"));
    }

   // ::write(fd, &val, 4);
}



void Alarm::ButtonClock_show()
{
    static bool flag = 1;
    if (flag == 1)
    {
    init();
    layout();
    con();
    setWindowFlags(Qt::Window|Qt::FramelessWindowHint);
    flag = 0;
    }
}

//  ******
//  初始化
//  ******

void Alarm::init()
{
        //setWindowTitle(tr("电饭煲"));	//设置标题
        //setFixedSize(QSize(420,80));	//固定大小

        //dialog.setWindowTitle(tr("电饭煲"));
        //dialog.setFixedSize(QSize(420,80));
        //dialog.show();
	timer=new QTimer;		//控制lcd的时间刷新
	uptimer=new QTimer;		//控制对话框上升
	dtimer=new QTimer;		//控制对话框下降
	itimer=new QTimer;

	lcdNumber=new QLCDNumber;						//显示当前时间
        lcdNumber->setFixedSize(QSize(200,60));			//固定大小
	lcdNumber->setNumDigits(8);						//显示八个数字，默认是显示5个数字
	lcdNumber->setSegmentStyle(QLCDNumber::Flat);	//填充颜色，默认是白色的
	lcdNumber->display(QTime::currentTime().toString("hh:mm:ss"));	//设置格式，还有其他形式的


        label=new QLabel(tr("预定时间"));	//提示设置下个闹钟
        //label->setFont(18);
        timeEdit=new QTimeEdit;								//设置下个闹钟
        timeEdit->setDisplayFormat("hh:mm:ss");
	
        button=new QPushButton(tr("确定"));

	trayIcon=new QSystemTrayIcon;						//托盘icon
	trayIcon->setIcon(QIcon("./images/qme.ico"));
	trayIcon->show();
	setWindowIcon(QIcon("./images/qme.ico"));

	restoreAct=new QAction(QString::fromLocal8Bit("显示"),this);
	quitAct=new QAction(QString::fromLocal8Bit("退出"),this);

	trayIconMenu=new QMenu;
	trayIconMenu->addAction(restoreAct);
	trayIconMenu->addAction(quitAct);

	trayIcon->setContextMenu(trayIconMenu);

	setWindowFlags(Qt::WindowStaysOnTopHint);
};

//  ****
//  布局
//  ****

void Alarm::layout()
{
	QHBoxLayout * rightTopLay=new QHBoxLayout;//
        rightTopLay->addWidget(lcdNumber);
	rightTopLay->addWidget(label);
	rightTopLay->addWidget(timeEdit);
        rightTopLay->addWidget(button);

	
        /*QHBoxLayout * rightButtomLay=new QHBoxLayout;//
	rightButtomLay->addStretch();
        rightButtomLay->addWidget(button);*/

        QVBoxLayout * rightLay=new QVBoxLayout;//
        rightLay->addLayout(rightTopLay);
        //rightLay->addLayout(rightButtomLay);
        rightLay->addStretch();
        rightLay->addStretch();
        rightLay->addStretch();
        rightLay->addStretch();
        setLayout(rightLay);

      /*  QHBoxLayout * main=new QHBoxLayout;//

	main->addLayout(rightLay);
        setLayout(main);*/

        /*rect=QApplication::desktop()->rect();//
	x=rect.right()-width()-2;//
	y=rect.bottom()+30;//
        setGeometry(x,y,width(),height());//*/
        setGeometry(0,0,width(),height());
};

//  ****************
//  connect 信号与槽
//  ****************

void Alarm::con()
{
	connect(timer,SIGNAL(timeout()),this,SLOT(clockChange()));
	timer->start(1000);

	connect(uptimer,SIGNAL(timeout()),this,SLOT(dialogUp()));
        uptimer->start(20);

	connect(dtimer,SIGNAL(timeout()),this,SLOT(down()));
	dtimer->start(20);

	connect(button,SIGNAL(clicked()),dtimer,SIGNAL(timeout()));

	connect(button,SIGNAL(clicked()),this,SLOT(mini()));
	
	connect(itimer,SIGNAL(timeout()),this,SLOT(comToCur()));
	itimer->start(20);

	connect(restoreAct,SIGNAL(triggered(bool)),uptimer,SIGNAL(timeout()));
	
	connect(this,SIGNAL(isCurrentTime()),uptimer,SIGNAL(timeout()));

	connect(itimer,SIGNAL(timeout()),this,SLOT(comToCur()));
	itimer->start(10);

	connect(quitAct,SIGNAL(triggered(bool)),this,SLOT(close()));
};

//  **************
//  显示变化的时间
//  **************
void Alarm::clockChange()
{
	lcdNumber->display(QTime::currentTime().toString("hh:mm:ss"));
};


//  **************************
//  闹钟到了，提示框慢慢升起来
//  **************************
void Alarm::dialogUp()
{
	show();
        /*uptimer->start(20);
	if(y>=rect.bottom()-height()-50)
	{
		y-=2;
	}
	else
	{
		uptimer->stop();
        }*/
        uptimer->stop();
        setGeometry(0,0,width(),height());
};


//  *************************
//  确定后，下降,然后隐藏起来
//  *************************
void Alarm::down()
{
        /*dtimer->start(20);
	if(y<rect.bottom())
	{
		y+=height()+20;
	}
	else
	{
		dtimer->stop();
	}
        setGeometry(x,y,width(),height());*/
};


//  ************
//  最小化到托盘
//  ************
void Alarm::mini()
{
	hide();
        ButtonClock->setIcon(QPixmap("image/dianfanbao.jpg"));
        ButtonClock->setIconSize(QPixmap("image/dianfanbao.jpg").size());

};


//  ***********
//   Event
//  ***********
/*void Alarm::closeEvent(QCloseEvent *event)
{
	QMessageBox::information(0,"Quit","Are you sure exit the Application!");
};
*/

//  ****************************
//  对比现在时间，与所设置的时间
//  ****************************
void Alarm::comToCur()
{
	if( QVariant(QTime::currentTime()).toString() == QVariant(timeEdit->time()).toString() )
	{
		QApplication::beep();
                ButtonClock->setIcon(QPixmap("image/dianfanbao_2.jpg"));
                ButtonClock->setIconSize(QPixmap("image/dianfanbao_2.jpg").size());
		emit isCurrentTime();
	}
};
