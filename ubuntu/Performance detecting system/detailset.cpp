#include "detailset.h"

detailset::detailset(QWidget * parent,int isShowTop,int isShowCPU,int isShowMem, int x,int y) :
    QWidget(parent)
{
    topBox = new QCheckBox();topBox->setText("显示在窗体前端");
    if(isShowTop)
        topBox->setCheckState(Qt::Checked);
    connect(topBox,SIGNAL(stateChanged(int)),this,SLOT(slotshowtop(int)));

    cpubox =new QCheckBox();cpubox->setText("显示cpu信息");
    if(isShowCPU)
        cpubox->setCheckState(Qt::Checked);
    connect(cpubox,SIGNAL(stateChanged(int)),this,SLOT(slotshowcpu(int)));

    membox =new QCheckBox();membox->setText("显示内存信息");
    if(isShowMem)
        membox->setCheckState(Qt::Checked);
    connect(membox,SIGNAL(stateChanged(int)),this,SLOT(slotshowmem(int)));

    QPushButton *okButton=new QPushButton("OK");
    connect(okButton,SIGNAL(clicked()),this,SLOT(slotOK()));

    QPushButton *aboutButton =new QPushButton("About");
    connect(aboutButton,SIGNAL(clicked()),this,SLOT(slotAbout()));

    QPushButton *quitButton =new QPushButton("Quit");
    connect(quitButton,SIGNAL(clicked()),this,SLOT(slotQuit()));

    QHBoxLayout *buttonLayout=new QHBoxLayout();
    buttonLayout->addWidget(okButton);
    buttonLayout->addWidget(aboutButton);
    buttonLayout->addWidget(quitButton);

    QVBoxLayout *allLayout=new QVBoxLayout();
    allLayout->addWidget(topBox);
    allLayout->addWidget(cpubox);
    allLayout->addWidget(membox);
    allLayout->addLayout(buttonLayout);

    this->setLayout(allLayout);
    this->setWindowTitle("设置");
    this->setMinimumWidth(170);
    this->move(x+10,y-125);//获取主窗体的位置,并根据住窗体的位置设置窗口的位置
    //this->show();
}


void detailset::slotshowtop(int value)
{
    emit showtop(value);
}

void detailset::slotshowcpu(int value)
{
    emit showcpu(value);
}

void detailset::slotshowmem(int value)
{
    emit showmem(value);
}


void detailset::slotOK()
{
    this->close();
}
void detailset::slotAbout()
{
    QMessageBox message(QMessageBox::NoIcon, "关于作者", " 唐昊Daniel \n邮箱:thddaniel92@gmail.com\n职业:学生");
    message.setIconPixmap(QPixmap(":/qss/ubuntu.png"));
    message.exec();
}

void detailset::slotQuit()
{


    this->close();
    qApp->closeAllWindows();
}
