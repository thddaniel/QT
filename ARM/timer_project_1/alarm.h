

#ifndef ALARM_H
#define ALARM_H

#include<QDialog>
#include<QSystemTrayIcon>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <error.h>
#include <time.h>
#include <fcntl.h>



class QTimer;
class QHBoxLayout;
class QVBoxLayout;
class QPushButton;
class QLabel;
class QTimeEdit;
class QLCDNumber;
class QVariant;
class QTime;
class QAction;

class Alarm:public QDialog
{
	Q_OBJECT
	signals:
		void isCurrentTime();
	public:
		Alarm(QWidget * parent=0);
	private slots:
		void clockChange();//更新时间
		void dialogUp();//闹钟到了，提示框显示
		void mini();//最小化到托盘
		void down();//隐藏
		void comToCur();//比较所时间跟标准之间
                void ButtonClock_show();
                void on_ButtonLed_clicked();
                void on_ButtonLed2_clicked();
                void on_ButtonLed3_clicked();
                void on_ButtonLed4_clicked();

	protected:
                //void closeEvent(QCloseEvent * event);
	private:
		void init();//初始化
		void layout();//布局
		void con();//connect

		QLCDNumber * lcdNumber;//显示当前时间
		QLabel * label;//提示设置下个闹钟
		QTimeEdit * timeEdit;//设置小个闹钟
		QPushButton * button;//确定
                QPushButton *ButtonClock;

		QTimer  * timer;
		QTimer  * uptimer;
		QTimer  * dtimer;
		QTimer  * itimer;
                //QRect rect;
		int x;
		int y;
		double du;

		QSystemTrayIcon * trayIcon;

		QAction * restoreAct;
		QAction * quitAct;
		QMenu * trayIconMenu;
                QDialog dialog;

                QPushButton *ButtonLed;
                QPushButton *ButtonLed2;
                QPushButton *ButtonLed3;
                QPushButton *ButtonLed4;
};
#endif
