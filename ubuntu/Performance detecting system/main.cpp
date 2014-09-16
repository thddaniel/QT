#include <QtGui/QApplication>
#include "display.h"
#include<QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTextCodec *codec = QTextCodec::codecForName("system");    //获取系统编码
    QTextCodec::setCodecForCStrings(codec);
    QTextCodec::setCodecForLocale(codec);
    QTextCodec::setCodecForTr(codec);
    // 以上部分解决中文乱码
    QFile file(":/qss/Style3.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    qApp->setStyleSheet(styleSheet);
    file.close();


    display w;

    w.show();

    return a.exec();
}
