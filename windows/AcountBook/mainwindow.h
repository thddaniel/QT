#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
class InputWindow;
class QTabWidget;
class QueryWnd;
class QMenu;
class QAction;
class StatusBar;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void addMember();
    void addMonthDef();
    void updateMember();
    void updateStatusBar();
    void about();
    void backup();
    void restore();
private:
    InputWindow *input;
    QueryWnd    *queryWnd;
    StatusBar    *status_bar;
    QTabWidget *tab;
    QMenu      *addMenu;
    QAction    *addMemberAction;
    QAction    *addMonthDefAction;
    QMenu      *aboutMenu;
    QAction    *aboutAction;
    QMenu      *dataMenu;
    QAction    *backupAction;
    QAction    *restoreAction;
    void createMenu();

};

#endif // MAINWINDOW_H
