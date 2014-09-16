/********************************************************************************
** Form generated from reading UI file 'constant.ui'
**
** Created: Fri May 17 21:53:17 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSTANT_H
#define UI_CONSTANT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_constantDialog
{
public:
    QPushButton *closePushButton;
    QPushButton *usePushButton;
    QTableWidget *tableWidget;

    void setupUi(QDialog *constantDialog)
    {
        if (constantDialog->objectName().isEmpty())
            constantDialog->setObjectName(QString::fromUtf8("constantDialog"));
        constantDialog->resize(415, 324);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/services.png"), QSize(), QIcon::Normal, QIcon::Off);
        constantDialog->setWindowIcon(icon);
        closePushButton = new QPushButton(constantDialog);
        closePushButton->setObjectName(QString::fromUtf8("closePushButton"));
        closePushButton->setGeometry(QRect(330, 280, 75, 23));
        usePushButton = new QPushButton(constantDialog);
        usePushButton->setObjectName(QString::fromUtf8("usePushButton"));
        usePushButton->setGeometry(QRect(250, 280, 75, 23));
        usePushButton->setDefault(true);
        tableWidget = new QTableWidget(constantDialog);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidget->rowCount() < 13)
            tableWidget->setRowCount(13);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(0, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(0, 1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(0, 2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setItem(0, 3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(1, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(1, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(1, 2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(2, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(2, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(2, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(2, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(3, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(3, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(3, 2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(3, 3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(4, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(4, 1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(4, 2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(4, 3, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(5, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(5, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(5, 2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(5, 3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(6, 0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(6, 1, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(6, 2, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(6, 3, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(7, 0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(7, 1, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(7, 2, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(7, 3, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(8, 0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(8, 1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(8, 2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(8, 3, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(9, 0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(9, 1, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(9, 2, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(9, 3, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        __qtablewidgetitem44->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(10, 0, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        __qtablewidgetitem45->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(10, 1, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        __qtablewidgetitem46->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(10, 2, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        __qtablewidgetitem47->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(10, 3, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        __qtablewidgetitem48->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(11, 0, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        __qtablewidgetitem49->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(11, 1, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        __qtablewidgetitem50->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(11, 2, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        __qtablewidgetitem51->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(11, 3, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        __qtablewidgetitem52->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(12, 0, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        __qtablewidgetitem53->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(12, 1, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        __qtablewidgetitem54->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(12, 2, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        __qtablewidgetitem55->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter|Qt::AlignCenter);
        tableWidget->setItem(12, 3, __qtablewidgetitem55);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 399, 251));
        tableWidget->setRowCount(13);
        tableWidget->setColumnCount(4);

        retranslateUi(constantDialog);
        QObject::connect(closePushButton, SIGNAL(clicked()), constantDialog, SLOT(close()));
        QObject::connect(usePushButton, SIGNAL(clicked()), constantDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(constantDialog);
    } // setupUi

    void retranslateUi(QDialog *constantDialog)
    {
        constantDialog->setWindowTitle(QApplication::translate("constantDialog", "Check Constants", 0, QApplication::UnicodeUTF8));
        closePushButton->setText(QApplication::translate("constantDialog", "Close", 0, QApplication::UnicodeUTF8));
        usePushButton->setText(QApplication::translate("constantDialog", "Use", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("constantDialog", "ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("constantDialog", "Depict", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("constantDialog", "Value", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("constantDialog", "Units", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("constantDialog", "1", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 0);
        ___qtablewidgetitem5->setText(QApplication::translate("constantDialog", "$pi", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 1);
        ___qtablewidgetitem6->setText(QApplication::translate("constantDialog", "\345\234\206\345\221\250\347\216\207", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 2);
        ___qtablewidgetitem7->setText(QApplication::translate("constantDialog", "3.141592653589793238", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(1, 0);
        ___qtablewidgetitem8->setText(QApplication::translate("constantDialog", "$e", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(1, 1);
        ___qtablewidgetitem9->setText(QApplication::translate("constantDialog", "\346\254\247\346\213\211\346\214\207\346\225\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(1, 2);
        ___qtablewidgetitem10->setText(QApplication::translate("constantDialog", "2.71828182845905", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(2, 0);
        ___qtablewidgetitem11->setText(QApplication::translate("constantDialog", "$g", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(2, 1);
        ___qtablewidgetitem12->setText(QApplication::translate("constantDialog", "\351\207\215\345\212\233\345\212\240\351\200\237\345\272\246", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(2, 2);
        ___qtablewidgetitem13->setText(QApplication::translate("constantDialog", "9.80665", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(2, 3);
        ___qtablewidgetitem14->setText(QApplication::translate("constantDialog", "m / s^2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(3, 0);
        ___qtablewidgetitem15->setText(QApplication::translate("constantDialog", "$c", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(3, 1);
        ___qtablewidgetitem16->setText(QApplication::translate("constantDialog", "\347\234\237\347\251\272\344\270\255\345\205\211\351\200\237", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(3, 2);
        ___qtablewidgetitem17->setText(QApplication::translate("constantDialog", "299792458", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(3, 3);
        ___qtablewidgetitem18->setText(QApplication::translate("constantDialog", "m / s", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(4, 0);
        ___qtablewidgetitem19->setText(QApplication::translate("constantDialog", "$eps0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(4, 1);
        ___qtablewidgetitem20->setText(QApplication::translate("constantDialog", "\347\234\237\347\251\272\344\273\213\347\224\265\345\270\270\346\225\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(4, 2);
        ___qtablewidgetitem21->setText(QApplication::translate("constantDialog", "8.854187817E-12", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(4, 3);
        ___qtablewidgetitem22->setText(QApplication::translate("constantDialog", "F / m", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(5, 0);
        ___qtablewidgetitem23->setText(QApplication::translate("constantDialog", "$mi0", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(5, 1);
        ___qtablewidgetitem24->setText(QApplication::translate("constantDialog", "\347\234\237\347\251\272\347\243\201\345\257\274\347\216\207", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(5, 2);
        ___qtablewidgetitem25->setText(QApplication::translate("constantDialog", "1.2566370614E-6", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(5, 3);
        ___qtablewidgetitem26->setText(QApplication::translate("constantDialog", "H / m", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(6, 0);
        ___qtablewidgetitem27->setText(QApplication::translate("constantDialog", "$en", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(6, 1);
        ___qtablewidgetitem28->setText(QApplication::translate("constantDialog", "\345\237\272\346\234\254\347\224\265\350\215\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(6, 2);
        ___qtablewidgetitem29->setText(QApplication::translate("constantDialog", "1.60217733E-19", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(6, 3);
        ___qtablewidgetitem30->setText(QApplication::translate("constantDialog", "C", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(7, 0);
        ___qtablewidgetitem31->setText(QApplication::translate("constantDialog", "$mu", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(7, 1);
        ___qtablewidgetitem32->setText(QApplication::translate("constantDialog", "\345\216\237\345\255\220\350\264\250\351\207\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(7, 2);
        ___qtablewidgetitem33->setText(QApplication::translate("constantDialog", "1.6605402E-27", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(7, 3);
        ___qtablewidgetitem34->setText(QApplication::translate("constantDialog", "kg", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(8, 0);
        ___qtablewidgetitem35->setText(QApplication::translate("constantDialog", "$me", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(8, 1);
        ___qtablewidgetitem36->setText(QApplication::translate("constantDialog", "\347\224\265\345\255\220\350\264\250\351\207\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(8, 2);
        ___qtablewidgetitem37->setText(QApplication::translate("constantDialog", "9.1093897E-31", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(8, 3);
        ___qtablewidgetitem38->setText(QApplication::translate("constantDialog", "kg", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(9, 0);
        ___qtablewidgetitem39->setText(QApplication::translate("constantDialog", "$mp", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(9, 1);
        ___qtablewidgetitem40->setText(QApplication::translate("constantDialog", "\350\264\250\345\255\220\350\264\250\351\207\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(9, 2);
        ___qtablewidgetitem41->setText(QApplication::translate("constantDialog", "1.6726231E-27", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(9, 3);
        ___qtablewidgetitem42->setText(QApplication::translate("constantDialog", "kg", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->item(10, 0);
        ___qtablewidgetitem43->setText(QApplication::translate("constantDialog", "$mn", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->item(10, 1);
        ___qtablewidgetitem44->setText(QApplication::translate("constantDialog", "\344\270\255\345\255\220\350\264\250\351\207\217", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->item(10, 2);
        ___qtablewidgetitem45->setText(QApplication::translate("constantDialog", "1.6749286E-27", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->item(10, 3);
        ___qtablewidgetitem46->setText(QApplication::translate("constantDialog", "kg", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget->item(11, 0);
        ___qtablewidgetitem47->setText(QApplication::translate("constantDialog", "$k", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget->item(11, 1);
        ___qtablewidgetitem48->setText(QApplication::translate("constantDialog", "\347\216\273\350\200\263\345\205\271\346\233\274\345\270\270\346\225\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget->item(11, 2);
        ___qtablewidgetitem49->setText(QApplication::translate("constantDialog", "1.380658E-23", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget->item(11, 3);
        ___qtablewidgetitem50->setText(QApplication::translate("constantDialog", "J/K", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget->item(12, 0);
        ___qtablewidgetitem51->setText(QApplication::translate("constantDialog", "$h", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget->item(12, 1);
        ___qtablewidgetitem52->setText(QApplication::translate("constantDialog", "\346\231\256\346\234\227\345\205\213\345\270\270\346\225\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget->item(12, 2);
        ___qtablewidgetitem53->setText(QApplication::translate("constantDialog", "6.6260693E-34", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget->item(12, 3);
        ___qtablewidgetitem54->setText(QApplication::translate("constantDialog", "J\342\200\242S", 0, QApplication::UnicodeUTF8));
        tableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class constantDialog: public Ui_constantDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSTANT_H
