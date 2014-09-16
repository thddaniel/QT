#ifndef SPEED_H
#define SPEED_H
#include<QString>
#include<QTextStream>
#include<QFile>
#include<QStringList>
#include<QApplication>
#include<QDebug>

#define REFRESH_TIME 1000       //the refresh time

class speed :public QObject
{
public:

    speed();

    QStringList getNWS();           //read the network speed
    QStringList getMem();           //read memory
    QString getCPU();           //read CPU state
    QString getCPUTem();        //get cpu temperature
    QString getDiskTem();       //get harddisk temperature
    QString getMBTem();         //get Motherboard temperature

private:
    QStringList getFileInfo(QString);  //return the infomation on the file

private slots:


};

#endif // SPEED_H
