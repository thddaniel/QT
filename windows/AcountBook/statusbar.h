#ifndef STATUSBAR_H
#define STATUSBAR_H

#include <QWidget>
class QLabel;
class StatusBar : public QWidget
{
    Q_OBJECT
public:
    explicit StatusBar(const QString &,QWidget *parent = 0);

signals:

public slots:
    void updateInfo();
private:
    QLabel *pix;
    QLabel *label;
    QString str1;
    QString tableName;
    float sumByDay();
    float sumByMonth();
    float sumByFixedCost();
};

#endif // STATUSBAR_H
