/*   ************************
**   by dengroj qq:915984846*
**	 邓荣健                 *
**	 2009年10月31日 晚上    *
**   ************************
**   功能：显示时间，闹钟
*/

#ifndef ALARM_H
#define ALARM_H

#include<QDialog>
#include<QSystemTrayIcon>

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
	protected:
		void closeEvent(QCloseEvent * event);
	private:
		void init();//初始化
		void layout();//布局
		void con();//connect

		QLCDNumber * lcdNumber;//显示当前时间
		QLabel * label;//提示设置下个闹钟
		QTimeEdit * timeEdit;//设置小个闹钟
		QPushButton * button;//确定

		QTimer  * timer;
		QTimer  * uptimer;
		QTimer  * dtimer;
		QTimer  * itimer;
		QRect rect;
		int x;
		int y;
		double du;

		QSystemTrayIcon * trayIcon;

		QAction * restoreAct;
		QAction * quitAct;
		QMenu * trayIconMenu;
};
#endif
