#ifndef QUERYWND_H
#define QUERYWND_H

#include<QWidget>
class   QRadioButton;
class   QComboBox;
class   QGroupBox;
class   QDateEdit;
class   QPushButton;
class   QTableView;
class   QSqlTableModel;
class   QDataWidgetMapper;
class   QSqlRelationalTableModel ;
class   QLabel;
class QueryWnd : public QWidget
{
    Q_OBJECT
public:
    explicit QueryWnd(QWidget *parent = 0);
    void     updateMember();
    void     updateAll();
signals:
    void updateCost();
private slots:
    void setFamilyMember();
    void setDateEnable();
    void query();
    void statistics();
    void showGraph();
    void modify();
    void deleteRecords();
    void print();
private:
       QRadioButton *queryAllMember;
       QRadioButton *queryOneMember;
       QRadioButton *queryDay;
       QRadioButton *queryMonth;
       QRadioButton *querySomeDay;
       QGroupBox *box1;
       QGroupBox *box2;
       QGroupBox *box3;
       QComboBox *familyMemberBox;
       QDateEdit *fromDate;
       QDateEdit *endDate;
       QPushButton *statisticalBtn;
       QPushButton *queryBtn;
       QTableView  *view;
       QSqlRelationalTableModel *model;
       QDataWidgetMapper *mapper;
       QLabel *label;
       QLabel *pix;
       QString filter;
       QPushButton *graphBtn;
       QPushButton *printBtn;
       QPushButton *modifyBtn;
       QPushButton *deleteBtn;
       void set_wnd_layout();
       void createConnect();
       void createMapper();
       void showTotal(QString &);


};

#endif // QUERYWND_H
