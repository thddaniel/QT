#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

class QDoubleSpinBox;
class QComboBox;
class QLabel;
class QLineEdit;
class QGroupBox;
class QPushButton;
class QPlainTextEdit;
class QTableView;
class QSqlTableModel;
class QSqlRelationalTableModel;
class QDateEdit;
class QDataWidgetMapper;
class QTextEdit;
class InputWindow : public QWidget
{
    Q_OBJECT
public:
    explicit InputWindow(QWidget *parent = 0);
    void     updateMember();

private slots:
    void submmit();
    void deleteRecords();
    void modify();
    void myClose();
private:
    QComboBox *familyMemberBox;
    QDoubleSpinBox *moneyEdit;
    QTextEdit *desEdit;
    QDateEdit *dateEdit;
    QPushButton *submitBtn;
    QGroupBox *inputBox;
    QPushButton *deleteBtn;
    QPushButton *closeBtn;
    QPushButton *modifyBtn;
    QTableView *view;
    QSqlRelationalTableModel *model;
    QDataWidgetMapper *mapper;
    void set_window_layout();
    void CreateMapper();
    void CreateConnection();
signals:
    void updateCost();//更新状态栏的花费
};

#endif // WIDGET_H
