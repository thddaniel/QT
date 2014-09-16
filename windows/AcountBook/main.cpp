#include <QtGui/QApplication>
#include "mainwindow.h"
#include<QFile>
#include<QTextCodec>
#include<QDir>
#include<QPluginLoader>
#include<QSqlDatabase>
#include<QMessageBox>
#include<QDebug>






static bool createConnection(QString path) //�������ݿ�
{


    qDebug()<<path;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(path);

    if (!db.open()) {
        QMessageBox::critical(0, qApp->tr("Cannot open database"),
            qApp->tr("Unable to establish a database connection.\n"
                     "This Application needs SQLite support. \n\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);
        return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    //���ݿ⻹ԭ ���Ȱ�ѡ������ݿ⸴�Ƶ�databaseĿ¼�µ�data.bak
    //�´����������data.bak�ļ���ɾ��ԭ���ݿ⣬��������Ϊdata.db
    QFile file;
    file.setFileName(QDir::currentPath()+"/database/data.bak");
    if(file.exists())
    {
        file.remove(QDir::currentPath()+"/database/data.db");
        file.rename(QDir::currentPath()+"/database/data.db");
    }


    QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    QString path = QDir::currentPath();
    QString driverPath= path+"/sqldrivers";
    a.addLibraryPath(driverPath);
    qDebug()<<driverPath;
    QPluginLoader loader(driverPath+"/qsqlite4.dll");     //�������ݿ�����
    loader.load();
    createConnection(path+"/database/data.db");                           //�������ݿ�



    MainWindow w ;
    qDebug()<<"constractor w";
    w.show();

    return a.exec();
}
