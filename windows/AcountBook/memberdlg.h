#ifndef MEMBERDLG_H
#define MEMBERDLG_H

#include <QDialog>
class QTableView;
class QSqlTableModel;
class QPushButton;
class QLineEdit;
class MemberDlg : public QDialog
{
    Q_OBJECT
public:
    MemberDlg(const QString &);
private slots:
      void addMember();
      void midify();
      void deleteRecords();
signals:
      void updateFamilyMember();
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
};

#endif // MEMBERDLG_H
