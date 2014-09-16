#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QSpinBox;
class QComboBox;
class QLabel;
class QLineEdit;
class QGroupBox;
class QPushButton;
class QPlainTextEdit;
class QTableView;
class QSqlTableModel;
class QSqlRelationalTableModel;
class InputWindow : public QWidget
{
    Q_OBJECT
public:
    explicit InputWindow(QWidget *parent = 0);

signals:

public slots:
private:
    QLabel *familyMemberLabel;
    QComboBox *familyMemberBox;
    QLabel *moneyLabel;
    QLineEdit *moneyEdit;
    QLabel *desLabel;
    QPlainTextEdit *desEdit;
    QPushButton *submitBtn;
    QGroupBox *inputBox;
    QTableView *view;
    QSqlRelationalTableModel *model;
    void set_window_layout();
};

#endif // WIDGET_H
