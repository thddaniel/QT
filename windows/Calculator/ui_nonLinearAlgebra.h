/********************************************************************************
** Form generated from reading UI file 'nonLinearAlgebra.ui'
**
** Created: Fri May 17 21:53:17 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NONLINEARALGEBRA_H
#define UI_NONLINEARALGEBRA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nonLinearAlgebra
{
public:
    QGroupBox *groupBox;
    QPushButton *multiplyPushButton;
    QPushButton *addPushButton;
    QPushButton *backspacePushButton;
    QPushButton *powerPushButton;
    QGroupBox *numGroupBox;
    QPushButton *num7PushButton;
    QPushButton *num8PushButton;
    QPushButton *num9PushButton;
    QPushButton *num4PushButton;
    QPushButton *num5PushButton;
    QPushButton *num6PushButton;
    QPushButton *num1PushButton;
    QPushButton *num2PushButton;
    QPushButton *num3PushButton;
    QPushButton *num0PushButton;
    QPushButton *pointPushButton;
    QPushButton *iPushButton;
    QPushButton *clearPushButton;
    QPushButton *rightbracketPushButton;
    QPushButton *leftbracketPushButton;
    QPushButton *rootsPushButton;
    QPushButton *variablePushButton;
    QPushButton *subtractPushButton;
    QPushButton *cancelPushButton;
    QPushButton *valuesPushButton;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *nonLinearAlgebra)
    {
        if (nonLinearAlgebra->objectName().isEmpty())
            nonLinearAlgebra->setObjectName(QString::fromUtf8("nonLinearAlgebra"));
        nonLinearAlgebra->resize(365, 214);
        nonLinearAlgebra->setMinimumSize(QSize(365, 214));
        nonLinearAlgebra->setMaximumSize(QSize(365, 214));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/services.png"), QSize(), QIcon::Normal, QIcon::Off);
        nonLinearAlgebra->setWindowIcon(icon);
        groupBox = new QGroupBox(nonLinearAlgebra);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setEnabled(true);
        groupBox->setGeometry(QRect(10, 80, 351, 131));
        multiplyPushButton = new QPushButton(groupBox);
        multiplyPushButton->setObjectName(QString::fromUtf8("multiplyPushButton"));
        multiplyPushButton->setEnabled(false);
        multiplyPushButton->setGeometry(QRect(220, 40, 51, 23));
        QPalette palette;
        QBrush brush(QColor(255, 0, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        multiplyPushButton->setPalette(palette);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        multiplyPushButton->setFont(font);
        multiplyPushButton->setAutoDefault(true);
        addPushButton = new QPushButton(groupBox);
        addPushButton->setObjectName(QString::fromUtf8("addPushButton"));
        addPushButton->setEnabled(false);
        addPushButton->setGeometry(QRect(165, 10, 51, 23));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        addPushButton->setPalette(palette1);
        addPushButton->setFont(font);
        addPushButton->setAutoDefault(true);
        backspacePushButton = new QPushButton(groupBox);
        backspacePushButton->setObjectName(QString::fromUtf8("backspacePushButton"));
        backspacePushButton->setEnabled(false);
        backspacePushButton->setGeometry(QRect(275, 10, 71, 23));
        QPalette palette2;
        QBrush brush2(QColor(0, 0, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        backspacePushButton->setPalette(palette2);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        backspacePushButton->setFont(font1);
        backspacePushButton->setAutoDefault(true);
        powerPushButton = new QPushButton(groupBox);
        powerPushButton->setObjectName(QString::fromUtf8("powerPushButton"));
        powerPushButton->setEnabled(false);
        powerPushButton->setGeometry(QRect(220, 10, 51, 23));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        powerPushButton->setPalette(palette3);
        powerPushButton->setFont(font);
        powerPushButton->setAutoDefault(true);
        numGroupBox = new QGroupBox(groupBox);
        numGroupBox->setObjectName(QString::fromUtf8("numGroupBox"));
        numGroupBox->setGeometry(QRect(0, 0, 161, 131));
        num7PushButton = new QPushButton(numGroupBox);
        num7PushButton->setObjectName(QString::fromUtf8("num7PushButton"));
        num7PushButton->setGeometry(QRect(10, 10, 41, 23));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        num7PushButton->setPalette(palette4);
        num7PushButton->setFont(font);
        num7PushButton->setAutoDefault(true);
        num8PushButton = new QPushButton(numGroupBox);
        num8PushButton->setObjectName(QString::fromUtf8("num8PushButton"));
        num8PushButton->setGeometry(QRect(60, 10, 41, 23));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        num8PushButton->setPalette(palette5);
        num8PushButton->setFont(font);
        num8PushButton->setAutoDefault(true);
        num9PushButton = new QPushButton(numGroupBox);
        num9PushButton->setObjectName(QString::fromUtf8("num9PushButton"));
        num9PushButton->setGeometry(QRect(110, 10, 41, 23));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        num9PushButton->setPalette(palette6);
        num9PushButton->setFont(font);
        num9PushButton->setAutoDefault(true);
        num4PushButton = new QPushButton(numGroupBox);
        num4PushButton->setObjectName(QString::fromUtf8("num4PushButton"));
        num4PushButton->setGeometry(QRect(10, 40, 41, 23));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        num4PushButton->setPalette(palette7);
        num4PushButton->setFont(font);
        num4PushButton->setAutoDefault(true);
        num5PushButton = new QPushButton(numGroupBox);
        num5PushButton->setObjectName(QString::fromUtf8("num5PushButton"));
        num5PushButton->setGeometry(QRect(60, 40, 41, 23));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        num5PushButton->setPalette(palette8);
        num5PushButton->setFont(font);
        num5PushButton->setAutoDefault(true);
        num6PushButton = new QPushButton(numGroupBox);
        num6PushButton->setObjectName(QString::fromUtf8("num6PushButton"));
        num6PushButton->setGeometry(QRect(110, 40, 41, 23));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        num6PushButton->setPalette(palette9);
        num6PushButton->setFont(font);
        num6PushButton->setAutoDefault(true);
        num1PushButton = new QPushButton(numGroupBox);
        num1PushButton->setObjectName(QString::fromUtf8("num1PushButton"));
        num1PushButton->setGeometry(QRect(10, 70, 41, 23));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        num1PushButton->setPalette(palette10);
        num1PushButton->setFont(font);
        num1PushButton->setAutoDefault(true);
        num2PushButton = new QPushButton(numGroupBox);
        num2PushButton->setObjectName(QString::fromUtf8("num2PushButton"));
        num2PushButton->setGeometry(QRect(60, 70, 41, 23));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        num2PushButton->setPalette(palette11);
        num2PushButton->setFont(font);
        num2PushButton->setAutoDefault(true);
        num3PushButton = new QPushButton(numGroupBox);
        num3PushButton->setObjectName(QString::fromUtf8("num3PushButton"));
        num3PushButton->setGeometry(QRect(110, 70, 41, 23));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        num3PushButton->setPalette(palette12);
        num3PushButton->setFont(font);
        num3PushButton->setAutoDefault(true);
        num0PushButton = new QPushButton(numGroupBox);
        num0PushButton->setObjectName(QString::fromUtf8("num0PushButton"));
        num0PushButton->setGeometry(QRect(10, 100, 41, 23));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        num0PushButton->setPalette(palette13);
        num0PushButton->setFont(font1);
        num0PushButton->setAutoDefault(true);
        pointPushButton = new QPushButton(numGroupBox);
        pointPushButton->setObjectName(QString::fromUtf8("pointPushButton"));
        pointPushButton->setGeometry(QRect(60, 100, 41, 23));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        pointPushButton->setPalette(palette14);
        pointPushButton->setFont(font);
        pointPushButton->setAutoDefault(true);
        iPushButton = new QPushButton(numGroupBox);
        iPushButton->setObjectName(QString::fromUtf8("iPushButton"));
        iPushButton->setEnabled(true);
        iPushButton->setGeometry(QRect(110, 100, 41, 23));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        iPushButton->setPalette(palette15);
        iPushButton->setFont(font);
        iPushButton->setAutoDefault(true);
        clearPushButton = new QPushButton(groupBox);
        clearPushButton->setObjectName(QString::fromUtf8("clearPushButton"));
        clearPushButton->setEnabled(false);
        clearPushButton->setGeometry(QRect(275, 40, 71, 23));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        clearPushButton->setPalette(palette16);
        clearPushButton->setFont(font1);
        clearPushButton->setAutoDefault(true);
        rightbracketPushButton = new QPushButton(groupBox);
        rightbracketPushButton->setObjectName(QString::fromUtf8("rightbracketPushButton"));
        rightbracketPushButton->setEnabled(false);
        rightbracketPushButton->setGeometry(QRect(220, 70, 51, 23));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        rightbracketPushButton->setPalette(palette17);
        rightbracketPushButton->setFont(font);
        rightbracketPushButton->setAutoDefault(true);
        leftbracketPushButton = new QPushButton(groupBox);
        leftbracketPushButton->setObjectName(QString::fromUtf8("leftbracketPushButton"));
        leftbracketPushButton->setGeometry(QRect(165, 70, 51, 23));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        leftbracketPushButton->setPalette(palette18);
        leftbracketPushButton->setFont(font);
        leftbracketPushButton->setAutoDefault(true);
        rootsPushButton = new QPushButton(groupBox);
        rootsPushButton->setObjectName(QString::fromUtf8("rootsPushButton"));
        rootsPushButton->setEnabled(false);
        rootsPushButton->setGeometry(QRect(275, 100, 71, 23));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        rootsPushButton->setPalette(palette19);
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        rootsPushButton->setFont(font2);
        rootsPushButton->setAutoDefault(true);
        rootsPushButton->setDefault(true);
        variablePushButton = new QPushButton(groupBox);
        variablePushButton->setObjectName(QString::fromUtf8("variablePushButton"));
        variablePushButton->setGeometry(QRect(165, 100, 51, 23));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        variablePushButton->setPalette(palette20);
        variablePushButton->setFont(font);
        variablePushButton->setAutoDefault(true);
        subtractPushButton = new QPushButton(groupBox);
        subtractPushButton->setObjectName(QString::fromUtf8("subtractPushButton"));
        subtractPushButton->setEnabled(true);
        subtractPushButton->setGeometry(QRect(165, 40, 51, 23));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        subtractPushButton->setPalette(palette21);
        subtractPushButton->setFont(font);
        subtractPushButton->setAutoDefault(true);
        cancelPushButton = new QPushButton(groupBox);
        cancelPushButton->setObjectName(QString::fromUtf8("cancelPushButton"));
        cancelPushButton->setGeometry(QRect(275, 70, 71, 23));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        cancelPushButton->setPalette(palette22);
        cancelPushButton->setFont(font2);
        cancelPushButton->setAutoDefault(true);
        valuesPushButton = new QPushButton(groupBox);
        valuesPushButton->setObjectName(QString::fromUtf8("valuesPushButton"));
        valuesPushButton->setEnabled(false);
        valuesPushButton->setGeometry(QRect(220, 100, 51, 23));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        valuesPushButton->setPalette(palette23);
        valuesPushButton->setFont(font2);
        valuesPushButton->setAutoDefault(true);
        valuesPushButton->setDefault(true);
        plainTextEdit = new QPlainTextEdit(nonLinearAlgebra);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 10, 351, 61));
        QWidget::setTabOrder(num7PushButton, num8PushButton);
        QWidget::setTabOrder(num8PushButton, num9PushButton);
        QWidget::setTabOrder(num9PushButton, num4PushButton);
        QWidget::setTabOrder(num4PushButton, num5PushButton);
        QWidget::setTabOrder(num5PushButton, num6PushButton);
        QWidget::setTabOrder(num6PushButton, num1PushButton);
        QWidget::setTabOrder(num1PushButton, num2PushButton);
        QWidget::setTabOrder(num2PushButton, num3PushButton);
        QWidget::setTabOrder(num3PushButton, num0PushButton);
        QWidget::setTabOrder(num0PushButton, pointPushButton);
        QWidget::setTabOrder(pointPushButton, iPushButton);
        QWidget::setTabOrder(iPushButton, addPushButton);
        QWidget::setTabOrder(addPushButton, powerPushButton);
        QWidget::setTabOrder(powerPushButton, subtractPushButton);
        QWidget::setTabOrder(subtractPushButton, multiplyPushButton);
        QWidget::setTabOrder(multiplyPushButton, leftbracketPushButton);
        QWidget::setTabOrder(leftbracketPushButton, rightbracketPushButton);
        QWidget::setTabOrder(rightbracketPushButton, variablePushButton);
        QWidget::setTabOrder(variablePushButton, rootsPushButton);
        QWidget::setTabOrder(rootsPushButton, backspacePushButton);
        QWidget::setTabOrder(backspacePushButton, clearPushButton);
        QWidget::setTabOrder(clearPushButton, cancelPushButton);
        QWidget::setTabOrder(cancelPushButton, plainTextEdit);

        retranslateUi(nonLinearAlgebra);
        QObject::connect(cancelPushButton, SIGNAL(clicked()), nonLinearAlgebra, SLOT(close()));

        QMetaObject::connectSlotsByName(nonLinearAlgebra);
    } // setupUi

    void retranslateUi(QWidget *nonLinearAlgebra)
    {
        nonLinearAlgebra->setWindowTitle(QApplication::translate("nonLinearAlgebra", "Polynomial for Roots Tool", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        multiplyPushButton->setText(QApplication::translate("nonLinearAlgebra", "*", 0, QApplication::UnicodeUTF8));
        addPushButton->setText(QApplication::translate("nonLinearAlgebra", "+", 0, QApplication::UnicodeUTF8));
        backspacePushButton->setText(QApplication::translate("nonLinearAlgebra", "Backspace", 0, QApplication::UnicodeUTF8));
        powerPushButton->setText(QApplication::translate("nonLinearAlgebra", "^", 0, QApplication::UnicodeUTF8));
        numGroupBox->setTitle(QString());
        num7PushButton->setText(QApplication::translate("nonLinearAlgebra", "7", 0, QApplication::UnicodeUTF8));
        num8PushButton->setText(QApplication::translate("nonLinearAlgebra", "8", 0, QApplication::UnicodeUTF8));
        num9PushButton->setText(QApplication::translate("nonLinearAlgebra", "9", 0, QApplication::UnicodeUTF8));
        num4PushButton->setText(QApplication::translate("nonLinearAlgebra", "4", 0, QApplication::UnicodeUTF8));
        num5PushButton->setText(QApplication::translate("nonLinearAlgebra", "5", 0, QApplication::UnicodeUTF8));
        num6PushButton->setText(QApplication::translate("nonLinearAlgebra", "6", 0, QApplication::UnicodeUTF8));
        num1PushButton->setText(QApplication::translate("nonLinearAlgebra", "1", 0, QApplication::UnicodeUTF8));
        num2PushButton->setText(QApplication::translate("nonLinearAlgebra", "2", 0, QApplication::UnicodeUTF8));
        num3PushButton->setText(QApplication::translate("nonLinearAlgebra", "3", 0, QApplication::UnicodeUTF8));
        num0PushButton->setText(QApplication::translate("nonLinearAlgebra", "0", 0, QApplication::UnicodeUTF8));
        pointPushButton->setText(QApplication::translate("nonLinearAlgebra", ".", 0, QApplication::UnicodeUTF8));
        iPushButton->setText(QApplication::translate("nonLinearAlgebra", "i", 0, QApplication::UnicodeUTF8));
        clearPushButton->setText(QApplication::translate("nonLinearAlgebra", "Clear", 0, QApplication::UnicodeUTF8));
        rightbracketPushButton->setText(QApplication::translate("nonLinearAlgebra", "\357\274\211", 0, QApplication::UnicodeUTF8));
        leftbracketPushButton->setText(QApplication::translate("nonLinearAlgebra", "\357\274\210", 0, QApplication::UnicodeUTF8));
        rootsPushButton->setText(QApplication::translate("nonLinearAlgebra", "Roots", 0, QApplication::UnicodeUTF8));
        variablePushButton->setText(QApplication::translate("nonLinearAlgebra", "x", 0, QApplication::UnicodeUTF8));
        subtractPushButton->setText(QApplication::translate("nonLinearAlgebra", "-", 0, QApplication::UnicodeUTF8));
        cancelPushButton->setText(QApplication::translate("nonLinearAlgebra", "Cancel", 0, QApplication::UnicodeUTF8));
        valuesPushButton->setText(QApplication::translate("nonLinearAlgebra", "Value", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class nonLinearAlgebra: public Ui_nonLinearAlgebra {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NONLINEARALGEBRA_H
