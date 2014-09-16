#include "mainwindow.h"
#include"inputwindow.h"
#include<QStatusBar>
#include"statusbar.h"
#include"querywnd.h"
#include<QTabWidget>
#include<QMenu>
#include<QAction>
#include<QMenuBar>
#include<QApplication>
#include"memberdlg.h"
#include"fixedwnd.h"
#include<QDesktopWidget>
#include<QLabel>
#include<QMessageBox>
#include<QHBoxLayout>
#include<QToolButton>
#include<QFile>
#include<QDir>
#include<QDateTime>
#include<QDebug>
#include<QFileDialog>
#include<QSqlDatabase>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setWindowTitle(tr("���˱�"));


    input = new InputWindow;
    connect(input,SIGNAL(updateCost()),this,SLOT(updateStatusBar()));
    queryWnd = new QueryWnd;
    connect(queryWnd,SIGNAL(updateCost()),this,SLOT(updateStatusBar()));

    tab = new QTabWidget;
    tab->addTab(input,QIcon("images/input.png"),tr("����"));
    tab->addTab(queryWnd,tr("�鿴��ϸ"));
    this->setCentralWidget(tab);
    this->setGeometry((qApp->desktop()->width()-1150)/2,(qApp->desktop()->height()-600)/2,1150,600);

    status_bar = new StatusBar("Account");
    statusBar()->addWidget(status_bar,12);
    statusBar()->setMaximumHeight(80);
    createMenu();

}
void MainWindow::backup()
{
    QDateTime date = QDateTime::currentDateTime();
    QString path = QDir::currentPath()+"/database/";
    QString path2 = QDir::currentPath() + "/backup/";
    QFile file1(path+"data.db");
    if(!file1.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(NULL,tr("�����ݿ�ʧ��"),tr("�޷������ݿ⣡"));
        return;
    }
    QString fileName = QDateTime::currentDateTime().toString(Qt::ISODate);
    for(int i=0;i<fileName.size();i++)
    {
       if(fileName.at(i) == ':' || fileName.at(i) == '-')
          fileName.remove(fileName.at(i));
   }
    QString name =path2+fileName+".db";


   qDebug()<<"data name:"<<name;
   if( file1.copy(name))
   {
       QMessageBox::information(NULL,tr("���ݳɹ�"),QString(tr("���ݿ��ѱ�����%1�ļ�����.\n�ļ���Ϊ%2.db"))
                                .arg(path2).arg(fileName));
   }
   else
       QMessageBox::information(NULL,tr("����"),tr("����ʧ�ܣ�"));
   if(file1.isOpen())
       file1.close();

}

void MainWindow::restore()
{
    QString path = QDir::currentPath() + "/backup/";
    QStringList filters;
    QStringList filename;
    filters<<tr("���ݿ�(*.db)");
    QFileDialog dialog(this);
    dialog.setNameFilters(filters);
    dialog.setDirectory(path);

    if(dialog.exec())
        filename=dialog.selectedFiles();
    if(filename.isEmpty())
        return;


    QFile file(filename.at(0));
    file.copy(QDir::currentPath()+"/database/data.bak");
    QMessageBox::information(NULL,tr("��ԭ�ɹ�"),tr("��رճ����������������û�ԭ�����ݿ�!"));
}

void MainWindow::createMenu()
{
    addMenu = new QMenu(this);
    addMenu = this->menuBar()->addMenu(tr("���"));
    addMemberAction = new QAction(tr("���/�޸ļ�ͥ��Ա"),this);
    connect(addMemberAction,SIGNAL(triggered()),this,SLOT(addMember()));
    addMonthDefAction = new QAction(tr("���/�޸��¹̶�֧��"),this);
    connect(addMonthDefAction,SIGNAL(triggered()),this,SLOT(addMonthDef()));
    addMenu->addAction(addMemberAction);
    addMenu->addAction(addMonthDefAction);

    dataMenu = new QMenu(this);
    dataMenu = this->menuBar()->addMenu(tr("���ݿ����"));
    backupAction = new QAction(tr("���ݿⱸ��"),this);
    connect(backupAction,SIGNAL(triggered()),this,SLOT(backup()));
    restoreAction = new QAction(tr("���ݿ⻹ԭ"),this);
    connect(restoreAction,SIGNAL(triggered()),this,SLOT(restore()));
    dataMenu->addAction(backupAction);
    dataMenu->addAction(restoreAction);

    aboutMenu = new QMenu(this);
    aboutMenu = this->menuBar()->addMenu(tr("����"));
    aboutAction = new QAction(tr("�����Ϣ"),this);
    connect(aboutAction,SIGNAL(triggered()),this,SLOT(about()));
    aboutMenu->addAction(aboutAction);


}
void MainWindow::addMember()
{
    MemberDlg *memberDlg = new MemberDlg("FamilyMember");
    connect(memberDlg,SIGNAL(updateFamilyMember()),this,SLOT(updateMember()));
    memberDlg->show();
}
void MainWindow::addMonthDef()
{
    FixedWnd *FixedDlg  = new FixedWnd("Fixed");
    connect(FixedDlg,SIGNAL(updateCost()),this,SLOT(updateStatusBar()));
    FixedDlg->show();
}

void MainWindow::updateMember()
{
    input->updateMember();
    queryWnd->updateMember();
}
void MainWindow::updateStatusBar()
{
    input->updateMember();
    status_bar->updateInfo();

}
void MainWindow::about()
{
    QLabel *label = new QLabel;
    QLabel *pix   = new QLabel;
    label->setText(tr("<p><b>����</b></p> "
                      "<p>�汾:    1.0</p>"
                      "<p>��:      Qt 4.8.1</p>"
                      "<p>���ݿ�:  Sqlite</p>"
                      "<p>����:    ���</p> "
                      "<p>Email:thddaniel92gmail.com</p>"));
    pix->setPixmap(QPixmap("images/money.png"));
    QToolButton *btn = new QToolButton;
    btn->setMinimumSize(60,40);
    btn->setText(tr("�ر�"));
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(pix);
    layout->addWidget(label);
    QHBoxLayout *layout2 = new QHBoxLayout;
    //layout2->addStretch(12);
    layout2->addWidget(btn,Qt::AlignHCenter);
    //layout2->addStretch(12);
    QVBoxLayout *layout3 = new QVBoxLayout;
    layout3->addLayout(layout);
    layout3->addLayout(layout2);
    QDialog *dlg = new QDialog;
    connect(btn,SIGNAL(clicked()),dlg,SLOT(close()));
    dlg->setWindowTitle(tr("����"));
    dlg->setAttribute(Qt::WA_DeleteOnClose);
    dlg->setLayout(layout3);
    dlg->exec();


}

MainWindow::~MainWindow()
{

}
