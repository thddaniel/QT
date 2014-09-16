/********************************************************************************
** Form generated from reading UI file 'variable.ui'
**
** Created: Fri May 17 21:53:17 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VARIABLE_H
#define UI_VARIABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_variableDialog
{
public:
    QTableWidget *tableWidget;
    QPushButton *clearButton;
    QPushButton *calcButton;

    void setupUi(QDialog *variableDialog)
    {
        if (variableDialog->objectName().isEmpty())
            variableDialog->setObjectName(QString::fromUtf8("variableDialog"));
        variableDialog->resize(241, 254);
        tableWidget = new QTableWidget(variableDialog);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 3)
            tableWidget->setRowCount(3);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font);
        __qtablewidgetitem2->setFlags(Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget->setItem(0, 0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem3->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget->setItem(0, 1, __qtablewidgetitem3);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem4->setFont(font1);
        __qtablewidgetitem4->setFlags(Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget->setItem(1, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem5->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget->setItem(1, 1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem6->setFont(font1);
        __qtablewidgetitem6->setFlags(Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget->setItem(2, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        __qtablewidgetitem7->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsDragEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget->setItem(2, 1, __qtablewidgetitem7);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 0, 221, 192));
        tableWidget->setRowCount(3);
        tableWidget->setColumnCount(2);
        clearButton = new QPushButton(variableDialog);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(80, 200, 75, 23));
        calcButton = new QPushButton(variableDialog);
        calcButton->setObjectName(QString::fromUtf8("calcButton"));
        calcButton->setGeometry(QRect(160, 200, 75, 23));
        calcButton->setDefault(true);

        retranslateUi(variableDialog);
        QObject::connect(clearButton, SIGNAL(clicked()), variableDialog, SLOT(clearVariables()));
        QObject::connect(tableWidget, SIGNAL(itemChanged(QTableWidgetItem*)), variableDialog, SLOT(updateVariables(QTableWidgetItem*)));
        QObject::connect(calcButton, SIGNAL(clicked()), variableDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(variableDialog);
    } // setupUi

    void retranslateUi(QDialog *variableDialog)
    {
        variableDialog->setWindowTitle(QApplication::translate("variableDialog", "Check Variables", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("variableDialog", "Variables", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("variableDialog", "Value", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->item(0, 0);
        ___qtablewidgetitem2->setText(QApplication::translate("variableDialog", "X", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->item(1, 0);
        ___qtablewidgetitem3->setText(QApplication::translate("variableDialog", "Y", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(2, 0);
        ___qtablewidgetitem4->setText(QApplication::translate("variableDialog", "Z", 0, QApplication::UnicodeUTF8));
        tableWidget->setSortingEnabled(__sortingEnabled);

        clearButton->setText(QApplication::translate("variableDialog", "Clear", 0, QApplication::UnicodeUTF8));
        calcButton->setText(QApplication::translate("variableDialog", "Calculate", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class variableDialog: public Ui_variableDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VARIABLE_H
