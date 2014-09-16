#ifndef DETAILSET_H
#define DETAILSET_H

#include <QWidget>
#include<QCheckBox>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QDebug>
#include<QMessageBox>
#include<QApplication>
class detailset : public QWidget
{
    Q_OBJECT
public:
    explicit detailset(QWidget *parent = 0,int isShowTop=2,int isShowCPU=0,int isShowMem=0, int x=0,int y=0);
private:
    QCheckBox *topBox;                       //是否置顶
    QCheckBox *cpubox;                      //show cpu lable
    QCheckBox *membox;                      //show mem lable
signals:
    void showtop(int);
    void showcpu(int);
    void showmem(int);
public slots:
    void slotshowtop(int);
    void slotshowcpu(int);
    void slotshowmem(int);
    void slotOK();
    void slotAbout();
    void slotQuit();

};

#endif // DETAILSET_H
