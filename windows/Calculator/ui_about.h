/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created: Tue Sep 16 23:15:30 2014
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_aboutDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *OkPushButton;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *frame;

    void setupUi(QDialog *aboutDialog)
    {
        if (aboutDialog->objectName().isEmpty())
            aboutDialog->setObjectName(QString::fromUtf8("aboutDialog"));
        aboutDialog->resize(420, 290);
        aboutDialog->setMinimumSize(QSize(420, 290));
        aboutDialog->setMaximumSize(QSize(420, 290));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/services.png"), QSize(), QIcon::Normal, QIcon::Off);
        aboutDialog->setWindowIcon(icon);
        label = new QLabel(aboutDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 60, 61, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(aboutDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 100, 101, 16));
        label_2->setFont(font);
        label_3 = new QLabel(aboutDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 150, 111, 16));
        label_3->setFont(font);
        OkPushButton = new QPushButton(aboutDialog);
        OkPushButton->setObjectName(QString::fromUtf8("OkPushButton"));
        OkPushButton->setGeometry(QRect(330, 260, 75, 23));
        OkPushButton->setFlat(false);
        label_4 = new QLabel(aboutDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(260, 60, 101, 16));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_5 = new QLabel(aboutDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(260, 100, 121, 16));
        label_5->setFont(font1);
        label_6 = new QLabel(aboutDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 150, 151, 20));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        label_6->setFont(font2);
        frame = new QFrame(aboutDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 131, 301));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        retranslateUi(aboutDialog);
        QObject::connect(OkPushButton, SIGNAL(clicked()), aboutDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(aboutDialog);
    } // setupUi

    void retranslateUi(QDialog *aboutDialog)
    {
        aboutDialog->setWindowTitle(QApplication::translate("aboutDialog", "About Calculator/2012/08", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("aboutDialog", "author", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("aboutDialog", "Publish Time:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("aboutDialog", "Contact Author:", 0, QApplication::UnicodeUTF8));
        OkPushButton->setText(QApplication::translate("aboutDialog", "OK", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("aboutDialog", "Tang Hao", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("aboutDialog", "2012/07/21", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("aboutDialog", "thddanil92@gmail", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class aboutDialog: public Ui_aboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
