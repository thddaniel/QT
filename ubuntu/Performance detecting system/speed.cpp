#include "speed.h"

speed::speed()
{

}

QStringList speed::getFileInfo(QString fileName)
{
    //QString fileName="/proc/meminfo";
    QFile file(fileName);
    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug()<<"Cound't opend file!";
        //return NULL;
    }
    QTextStream stream(&file);
    QApplication::setOverrideCursor(Qt::WaitCursor);
    QString fileText;
    QStringList list1;
    do {
        fileText =stream.readLine();
        list1+=fileText;
    } while (!fileText.isNull());
    QApplication::restoreOverrideCursor();
    file.close();
    return list1;
}

double dowNum=0;
double tranNUm=0;
double lasdowNum=0;
double lastranNUm=0;
QStringList speed::getNWS()
{
    dowNum=0;
    tranNUm=0;
    QString filename ="/proc/net/dev";
    QStringList strList = getFileInfo(filename);

    for(int i=0;i<strList.length();i++)
    {
        if(strList.at(i).trimmed().mid(0,3)=="eth"||strList.at(i).trimmed().mid(0,3)=="wla")
        {
            dowNum+=strList.at(i).split(" ",QString::SkipEmptyParts).at(1).toDouble();
            tranNUm+=strList.at(i).split(" ",QString::SkipEmptyParts).at(9).toDouble();
        }
    }


    int dowSpeed=(dowNum-lasdowNum)/1024;    //KB
    int tranSpeed=(tranNUm-lastranNUm)/1024; //KB

    lasdowNum=dowNum;
    lastranNUm=tranNUm;

    QString dowStr;
    QString tranStr;
    dowStr.setNum(dowSpeed);
    tranStr.setNum(tranSpeed);
    QStringList speedList;
    speedList+=dowStr;
    speedList+=tranStr;

    return speedList;
}

QStringList speed::getMem()
{
    QString filename="/proc/meminfo";
    QStringList strList = getFileInfo(filename);

    double totalNum=strList.at(0).split(" ",QString::SkipEmptyParts).at(1).toDouble();

    double freeNum = strList.at(1).split(" ",QString::SkipEmptyParts).at(1).toDouble();

    double bufferNum = strList.at(2).split(" ",QString::SkipEmptyParts).at(1).toDouble();

    double cacheNum = strList.at(3).split(" ",QString::SkipEmptyParts).at(1).toDouble();

    QString totalStr;   //total memory
    QString freeStr;    //free memory
    QString useStr;     //percentage
    totalStr.setNum(totalNum/1024);
    freeStr.setNum((freeNum+bufferNum+cacheNum)/1024);
    useStr.setNum(100*(totalNum-freeNum-bufferNum-cacheNum)/totalNum);//**%

    QStringList allList;
    allList+=totalStr;
    allList+=freeStr;
    allList+=useStr;

    return allList;
}


double totalCPUTime=0;
double lastTotalCPUTime=0;
double idleTime=0;
double lastIdleTime=0;
QString speed::getCPU()
{
    QString filename="/proc/stat";
    QStringList strList = getFileInfo(filename);
    for(int i=1;i<10;i++)
    {
        totalCPUTime+=strList.at(0).split(" ",QString::SkipEmptyParts).at(i).toDouble();
    }
    idleTime=strList.at(0).split(" ",QString::SkipEmptyParts).at(4).toDouble();

    QString usageStr;
    double allCPUTime=totalCPUTime-lastTotalCPUTime;
    double unuseCOUTime=idleTime-lastIdleTime;

    usageStr.setNum(100*(allCPUTime-unuseCOUTime)/allCPUTime);

    lastTotalCPUTime=totalCPUTime;
    lastIdleTime=idleTime;
    totalCPUTime=0;

    return usageStr;
}

QString speed::getCPUTem()
{
    return 0;
}

QString speed::getDiskTem()
{
    return 0;
}

QString speed::getMBTem()
{
    return 0;
}
