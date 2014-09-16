#include"alarm.h"
#include<QtGui>

Alarm::Alarm(QWidget * parent)
	:QDialog(parent)
{
	init();
	layout();
	con();
};

//  ******
//  初始化
//  ******

void Alarm::init()
{
	setWindowTitle("Alarm clock");	//设置标题
	setFixedSize(QSize(300,80));	//固定大小
	
	timer=new QTimer;		//控制lcd的时间刷新
	uptimer=new QTimer;		//控制对话框上升
	dtimer=new QTimer;		//控制对话框下降
	itimer=new QTimer;

	lcdNumber=new QLCDNumber;						//显示当前时间
	lcdNumber->setFixedSize(QSize(150,50));			//固定大小
	lcdNumber->setNumDigits(8);						//显示八个数字，默认是显示5个数字
	lcdNumber->setSegmentStyle(QLCDNumber::Flat);	//填充颜色，默认是白色的
	lcdNumber->display(QTime::currentTime().toString("hh:mm:ss"));	//设置格式，还有其他形式的


	label=new QLabel(QString::fromLocal8Bit("闹钟"));	//提示设置下个闹钟
	timeEdit=new QTimeEdit;								//设置下个闹钟
	timeEdit->setDisplayFormat("hh:mm:ss");
	
	button=new QPushButton(QString::fromLocal8Bit("确定"));

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
	rightTopLay->addWidget(label);
	rightTopLay->addWidget(timeEdit);
	
	QHBoxLayout * rightButtomLay=new QHBoxLayout;//
	rightButtomLay->addStretch();
	rightButtomLay->addWidget(button);

	QVBoxLayout * rightLay=new QVBoxLayout;//
	rightLay->addLayout(rightTopLay);
	rightLay->addLayout(rightButtomLay);
	rightLay->addStretch();

	QHBoxLayout * main=new QHBoxLayout;//
	main->addWidget(lcdNumber);
	main->addLayout(rightLay);
	setLayout(main);

	rect=QApplication::desktop()->rect();//
	x=rect.right()-width()-2;//
	y=rect.bottom()+30;//
	setGeometry(x,y,width(),height());//
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
	uptimer->start(20);
	if(y>=rect.bottom()-height()-50)
	{
		y-=2;
	}
	else
	{
		uptimer->stop();
	}
	setGeometry(x,y,width(),height());
};


//  *************************
//  确定后，下降,然后隐藏起来
//  *************************
void Alarm::down()
{
	dtimer->start(20);
	if(y<rect.bottom())
	{
		y+=height()+20;
	}
	else
	{
		dtimer->stop();
	}
	setGeometry(x,y,width(),height());
};


//  ************
//  最小化到托盘
//  ************
void Alarm::mini()
{
	hide();

};


//  ***********
//  close Event
//  ***********
void Alarm::closeEvent(QCloseEvent *event)
{
	QMessageBox::information(0,"Quit","Are you sure exit the Application!");
};


//  ****************************
//  对比现在时间，与所设置的时间
//  ****************************
void Alarm::comToCur()
{
	if( QVariant(QTime::currentTime()).toString() == QVariant(timeEdit->time()).toString() )
	{
		QApplication::beep();
		emit isCurrentTime();
	}
};
