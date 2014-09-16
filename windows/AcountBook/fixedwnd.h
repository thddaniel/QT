#ifndef FIXEDWND_H
#define FIXEDWND_H

#include <QDialog>
class QTableView;
class QSqlTableModel;
class QPushButton;
class QLineEdit;
class QDoubleSpinBox;
class QLabel;
class FixedWnd : public QDialog
{
    Q_OBJECT
public:
    FixedWnd(const QString &);
private slots:
      void addMember();
      void midify();
      void deleteRecords();
signals:
      void updateMember();
      void updateCost();
private:
    QString tableName;
    void set_wnd_layout();
    void createConnect();
    QTableView *view;
    QPushButton *closeBtn;
    QPushButton *submitBtn;
    QPushButton *modifyBtn;
    QPushButton *delBtn;
    QSqlTableModel *model;
    QLineEdit *edit;
    QDoubleSpinBox  *cost;
    QLabel    *totalFixedCost;
    float totalCost();
    
};

#endif // FIXEDWND_H
