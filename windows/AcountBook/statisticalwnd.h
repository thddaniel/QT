#ifndef STATISTICALWND_H
#define STATISTICALWND_H

#include <QDialog>
class QTableWidget;
class QTableWidgetItem;
class QSqlTableModel;
class QPushButton;
class StatisticalWnd : public QDialog
{
    Q_OBJECT
public:
    explicit StatisticalWnd(QString &);
    
signals:
    
public slots:
private:
    QTableWidget *widget;
    QSqlTableModel *model;
    QPushButton *closeBtn;
    QString filter;

    void statistics();
};

#endif // STATISTICALWND_H
