#ifndef MYGRAPHWND_H
#define MYGRAPHWND_H


#include<QDialog>
class QButtonGroup;
class QGraphicsView;
class QToolBox;
class QAbstractButton;
class QGraphicsScene;
class QTableView;
class QGraphicsItem;
class QSqlRelationalTableModel;
class MyGraphWnd : public QDialog
{
    Q_OBJECT
public:
    explicit MyGraphWnd(QWidget *parent = 0);

signals:

public slots:
    void backgroundButtonGroupClicked(int);
    void familyMemberButtonGroupClicked(int);
    void monthButtonGroupClicked(int);
    void showDetailData(int,int);
    void print();
private:
    QButtonGroup *backgroundGroup;
    QButtonGroup *familyMemberGroup;
    QButtonGroup *monthGroup;
    QGraphicsView *view;
    QTableView    *table;
    QGraphicsScene *scene;
    QDialog * createBackground();
    QDialog * createFamilyMember();
    QDialog * createMonth();
    QToolBox *toolBox;
    QToolBox* createToolBox();
    void createWnd();
    //QList<int> familyMemberIndex;
    int month;
    QWidget* createCell(const QString &,const QString &,QButtonGroup *);
    QWidget* createCell(const QString &, const QString &, QButtonGroup *,int id);
    void showGraph(int&,int &i,float &,float&);

    QSqlRelationalTableModel *model;
    QString member;
    void showDefGraph();
    void showLine(float data[],int num,float &max);
    void drawCoordinate();//»­×ø±êÏµ



};

#endif // MYGRAPHWND_H
