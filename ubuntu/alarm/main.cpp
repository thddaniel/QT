#include"alarm.h"
#include<QApplication>

int main(int argc,char *argv[])
{
	QApplication app(argc,argv);
	Alarm alarm;
	alarm.show();
	return app.exec();
};
