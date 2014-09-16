#include"display.h"

QPoint display::getLocaTion()
{
    QString fileText;
    QStringList list1;

    //QString fileName="/proc/meminfo";
    QFile file("/usr/share/games/networkspeed/location.txt");
    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug()<<"Cound't opend file!";
        //return NULL;
    }
    QTextStream stream(&file);
    QApplication::setOverrideCursor(Qt::WaitCursor);

    do {
        fileText =stream.readLine();
        list1+=fileText;
    } while (!fileText.isNull());
    QApplication::restoreOverrideCursor();
    file.close();

    QPoint lLocation(list1.at(0).toInt(),list1.at(1).toInt());

    return lLocation;
}

void display::refreshinfo()
{
    //千万不能同时调用speed1->getNWS()
    //因为会造成lasdownum被第二次调用时刷新到当前值，那样的话就起不到缓存的作用

    QStringList strListNWS=speed1->getNWS();
    QStringList strListMem=speed1->getMem();

    lableNWS->setText("↓ "+strListNWS.at(0)+" KB/S"+" ↑ "+ strListNWS.at(1)+" KB/S");

    QString strMem="MemUsage: "+strListMem.at(2)+"%";
    lableMem->setText(strMem);

    QString strCPU="CpuUsage: "+speed1->getCPU()+"%";
    lableCPU->setText(strCPU);

}

void display::showdetail()
{
    QPoint buttonpos = this->pos();
    detailset *detailwin=new detailset(0,isshowtop,isshowcpu,isshowmem,buttonpos.x(),buttonpos.y());
    connect(detailwin,SIGNAL(showtop(int)),this,SLOT(showtop(int)));
    connect(detailwin,SIGNAL(showcpu(int)),this,SLOT(showcpu(int)));
    connect(detailwin,SIGNAL(showmem(int)),this,SLOT(showmem(int)));

    detailwin->show();
}

void display::showcpu(int value)
{
    this->update();
    if(value)
    {
        this->setFixedHeight(this->height()+25);
        isshowcpu=2;
        lableCPU->setVisible(true);
        buttonCPU->setVisible(true);
        //buttonCPU2->setVisible(true);
    }
    else
    {
        this->setFixedHeight(this->height()-25);
        isshowcpu=0;
        lableCPU->setVisible(false);
        buttonCPU->setVisible(false);
        //buttonCPU2->setVisible(false);
    }
}

void display::showmem(int value)
{
    if(value)
    {
        this->setFixedHeight(this->height()+25);
        isshowmem=2;
        lableMem->setVisible(true);
        buttonMem->setVisible(true);
    }
    else
    {
        this->setFixedHeight(this->height()-25);
        isshowmem=0;
        lableMem->setVisible(false);
        buttonMem->setVisible(false);
    }
}


void display::showtop(int value)
{

    Qt::WindowFlags flags = 0;
    if(value)
    {
        isshowtop=2;
        flags = Qt::Window;
        flags |=Qt::FramelessWindowHint;//除去边框
        flags |= Qt::WindowStaysOnTopHint;//前端显示
    }
    else
    {
        isshowtop=0;
        flags = Qt::Window;
        flags |=Qt::FramelessWindowHint;//除去边框
    }
    this->setWindowFlags(flags);
    this->show();
}


void display::mousePressEvent(QMouseEvent *event)
{
    this->windowPos = this->pos();
    this->mousePos = event->globalPos();
    this->dPos = mousePos - windowPos;
}
void display::mouseMoveEvent(QMouseEvent *event)
{
    this->move(event->globalPos() - this->dPos);


}
void display::changeEvent(QEvent *e)
{
//    QWidget::changeEvent(e);
//    switch (e->type())
//    {
//        case QEvent::LanguageChange:
//        break;
//        default:
//        break;
//    }
}
