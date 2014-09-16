/********************************************************************************
** Form generated from reading UI file 'history.ui'
**
** Created: Fri May 17 21:53:16 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORY_H
#define UI_HISTORY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_history_Dialog
{
public:
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *clearPushButton;
    QPushButton *copyPushButton;
    QPushButton *deletePushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *usePushButton;
    QLineEdit *lineEdit;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *history_Dialog)
    {
        if (history_Dialog->objectName().isEmpty())
            history_Dialog->setObjectName(QString::fromUtf8("history_Dialog"));
        history_Dialog->resize(422, 308);
        gridLayout_4 = new QGridLayout(history_Dialog);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        clearPushButton = new QPushButton(history_Dialog);
        clearPushButton->setObjectName(QString::fromUtf8("clearPushButton"));
        clearPushButton->setEnabled(false);
        clearPushButton->setAutoDefault(true);

        horizontalLayout->addWidget(clearPushButton);

        copyPushButton = new QPushButton(history_Dialog);
        copyPushButton->setObjectName(QString::fromUtf8("copyPushButton"));
        copyPushButton->setEnabled(false);
        copyPushButton->setAutoDefault(true);

        horizontalLayout->addWidget(copyPushButton);

        deletePushButton = new QPushButton(history_Dialog);
        deletePushButton->setObjectName(QString::fromUtf8("deletePushButton"));
        deletePushButton->setEnabled(false);
        deletePushButton->setAutoDefault(true);

        horizontalLayout->addWidget(deletePushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        usePushButton = new QPushButton(history_Dialog);
        usePushButton->setObjectName(QString::fromUtf8("usePushButton"));
        usePushButton->setEnabled(false);
        usePushButton->setDefault(true);

        horizontalLayout->addWidget(usePushButton);


        gridLayout_4->addLayout(horizontalLayout, 2, 0, 1, 1);

        lineEdit = new QLineEdit(history_Dialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setAutoFillBackground(true);
        lineEdit->setReadOnly(true);

        gridLayout_4->addWidget(lineEdit, 1, 0, 1, 1);

        plainTextEdit = new QPlainTextEdit(history_Dialog);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        plainTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);
        plainTextEdit->setReadOnly(true);
        plainTextEdit->setOverwriteMode(false);

        gridLayout_4->addWidget(plainTextEdit, 0, 0, 1, 1);

        QWidget::setTabOrder(usePushButton, clearPushButton);
        QWidget::setTabOrder(clearPushButton, copyPushButton);
        QWidget::setTabOrder(copyPushButton, deletePushButton);
        QWidget::setTabOrder(deletePushButton, plainTextEdit);
        QWidget::setTabOrder(plainTextEdit, lineEdit);

        retranslateUi(history_Dialog);

        QMetaObject::connectSlotsByName(history_Dialog);
    } // setupUi

    void retranslateUi(QDialog *history_Dialog)
    {
        history_Dialog->setWindowTitle(QApplication::translate("history_Dialog", "History Record", 0, QApplication::UnicodeUTF8));
        clearPushButton->setText(QApplication::translate("history_Dialog", "Clear", 0, QApplication::UnicodeUTF8));
        copyPushButton->setText(QApplication::translate("history_Dialog", "Copy", 0, QApplication::UnicodeUTF8));
        deletePushButton->setText(QApplication::translate("history_Dialog", "Delete", 0, QApplication::UnicodeUTF8));
        deletePushButton->setShortcut(QApplication::translate("history_Dialog", "Del", 0, QApplication::UnicodeUTF8));
        usePushButton->setText(QApplication::translate("history_Dialog", "Use", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class history_Dialog: public Ui_history_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORY_H
