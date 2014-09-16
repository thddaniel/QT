/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created: Fri May 17 21:53:16 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QAction *linearAlgebraAction;
    QAction *HugeCalcAction;
    QAction *exitAction;
    QAction *historyAction;
    QAction *helpAction;
    QAction *aboutAction;
    QAction *suggestAction;
    QAction *noLinearAlgebraAction;
    QAction *System_Calculator_Action;
    QAction *Geometers_Sketchpad_Action;
    QAction *actionChinese;
    QAction *actionEnglish;
    QAction *topHintAction;
    QAction *actionDefault_Settings;
    QAction *actionExpression_s_Font;
    QAction *variableAction;
    QAction *constantAction;
    QAction *actionWindows_Color;
    QAction *actionTextViews_Color;
    QWidget *centralwidget;
    QLineEdit *express_lineEdit;
    QGroupBox *function_groupBox;
    QPushButton *fun_Lg_pushButton;
    QPushButton *fun_Abs_pushButton;
    QPushButton *fun_Ln_pushButton;
    QPushButton *fun_Log_pushButton;
    QPushButton *fun_Arcsin_pushButton;
    QPushButton *fun_Sin_pushButton;
    QPushButton *fun_Cos_pushButton;
    QPushButton *fun_Tan_pushButton;
    QPushButton *fun_Cot_pushButton;
    QPushButton *fun_Arccos_pushButton;
    QPushButton *fun_Arctan_pushButton;
    QPushButton *fun_Arccot_pushButton;
    QPushButton *operCur_pushButton;
    QPushButton *operXYsqrt_pushButton;
    QPushButton *operSqr_pushButton;
    QPushButton *operCub_pushButton;
    QPushButton *operExp10_pushButton;
    QPushButton *MS_pushButton;
    QPushButton *ANS_pushButton;
    QPushButton *constPi_pushButton;
    QPushButton *constEuler_pushButton;
    QPushButton *fun_Pow_pushButton;
    QPushButton *constGravity_pushButton;
    QPushButton *MR_pushButton;
    QPushButton *fun_Lcm_pushButton;
    QPushButton *fun_Gcd_pushButton;
    QPushButton *operSqrt_pushButton;
    QPushButton *operComb_pushButton;
    QPushButton *operMod_pushButton;
    QPushButton *operExpE_pushButton;
    QGroupBox *number_groupBox;
    QPushButton *numSeven_pushButton;
    QPushButton *numEight_pushButton;
    QPushButton *numNine_pushButton;
    QPushButton *numFour_pushButton;
    QPushButton *numFive_pushButton;
    QPushButton *numSix_pushButton;
    QPushButton *numOne_pushButton;
    QPushButton *numTwo_pushButton;
    QPushButton *numThree_pushButton;
    QPushButton *numZero_pushButton;
    QPushButton *point_pushButton;
    QPushButton *numE_pushButton;
    QPushButton *leftBack_pushButton;
    QPushButton *operPercent_pushButton;
    QPushButton *operMultiply_pushButton;
    QPushButton *operSubtract_pushButton;
    QPushButton *result_pushButton;
    QPushButton *operAdd_pushButton;
    QPushButton *operDivide_pushButton;
    QPushButton *numA_pushButton;
    QPushButton *numB_pushButton;
    QPushButton *numF_pushButton;
    QPushButton *numD_pushButton;
    QPushButton *numC_pushButton;
    QPushButton *operFact_pushButton;
    QPushButton *operDiv_pushButton;
    QPushButton *operPower_pushButton;
    QPushButton *NumI_pushButton;
    QPushButton *numEi_pushButton;
    QPushButton *rightBack_pushButton;
    QCheckBox *checkBox_1;
    QCheckBox *checkBox_2;
    QSpinBox *spinBox;
    QLabel *label;
    QGroupBox *groupBox;
    QRadioButton *Real_radioButton;
    QRadioButton *Complex_radioButton;
    QGroupBox *groupBox_2;
    QRadioButton *Deg_radioButton;
    QRadioButton *Rad_radioButton;
    QGroupBox *groupBox_3;
    QRadioButton *Dec_radioButton;
    QRadioButton *Oct_radioButton;
    QRadioButton *Hex_radioButton;
    QRadioButton *Bin_radioButton;
    QLineEdit *result_lineEdit;
    QLineEdit *memory_lineEdit;
    QPushButton *undo_pushButton;
    QPushButton *backspace_pushButton;
    QPushButton *redo_pushButton;
    QPushButton *clear_pushButton;
    QPushButton *fold_pushButton;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *toolsMenu;
    QMenu *menuElse_Tools;
    QMenu *supervisorMenu;
    QMenu *helpMenu;
    QMenu *menuSettings;
    QMenu *menuLanguage;
    QMenu *menuBackground_Color;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(660, 370);
        Calculator->setMinimumSize(QSize(660, 370));
        Calculator->setMaximumSize(QSize(660, 370));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/services.png"), QSize(), QIcon::Normal, QIcon::Off);
        Calculator->setWindowIcon(icon);
        Calculator->setIconSize(QSize(24, 24));
        linearAlgebraAction = new QAction(Calculator);
        linearAlgebraAction->setObjectName(QString::fromUtf8("linearAlgebraAction"));
        HugeCalcAction = new QAction(Calculator);
        HugeCalcAction->setObjectName(QString::fromUtf8("HugeCalcAction"));
        exitAction = new QAction(Calculator);
        exitAction->setObjectName(QString::fromUtf8("exitAction"));
        historyAction = new QAction(Calculator);
        historyAction->setObjectName(QString::fromUtf8("historyAction"));
        helpAction = new QAction(Calculator);
        helpAction->setObjectName(QString::fromUtf8("helpAction"));
        aboutAction = new QAction(Calculator);
        aboutAction->setObjectName(QString::fromUtf8("aboutAction"));
        suggestAction = new QAction(Calculator);
        suggestAction->setObjectName(QString::fromUtf8("suggestAction"));
        noLinearAlgebraAction = new QAction(Calculator);
        noLinearAlgebraAction->setObjectName(QString::fromUtf8("noLinearAlgebraAction"));
        System_Calculator_Action = new QAction(Calculator);
        System_Calculator_Action->setObjectName(QString::fromUtf8("System_Calculator_Action"));
        System_Calculator_Action->setCheckable(true);
        Geometers_Sketchpad_Action = new QAction(Calculator);
        Geometers_Sketchpad_Action->setObjectName(QString::fromUtf8("Geometers_Sketchpad_Action"));
        Geometers_Sketchpad_Action->setCheckable(true);
        actionChinese = new QAction(Calculator);
        actionChinese->setObjectName(QString::fromUtf8("actionChinese"));
        actionChinese->setCheckable(true);
        actionChinese->setChecked(true);
        actionEnglish = new QAction(Calculator);
        actionEnglish->setObjectName(QString::fromUtf8("actionEnglish"));
        actionEnglish->setCheckable(true);
        topHintAction = new QAction(Calculator);
        topHintAction->setObjectName(QString::fromUtf8("topHintAction"));
        topHintAction->setCheckable(true);
        actionDefault_Settings = new QAction(Calculator);
        actionDefault_Settings->setObjectName(QString::fromUtf8("actionDefault_Settings"));
        actionExpression_s_Font = new QAction(Calculator);
        actionExpression_s_Font->setObjectName(QString::fromUtf8("actionExpression_s_Font"));
        variableAction = new QAction(Calculator);
        variableAction->setObjectName(QString::fromUtf8("variableAction"));
        constantAction = new QAction(Calculator);
        constantAction->setObjectName(QString::fromUtf8("constantAction"));
        actionWindows_Color = new QAction(Calculator);
        actionWindows_Color->setObjectName(QString::fromUtf8("actionWindows_Color"));
        actionTextViews_Color = new QAction(Calculator);
        actionTextViews_Color->setObjectName(QString::fromUtf8("actionTextViews_Color"));
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        express_lineEdit = new QLineEdit(centralwidget);
        express_lineEdit->setObjectName(QString::fromUtf8("express_lineEdit"));
        express_lineEdit->setGeometry(QRect(10, 60, 641, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        express_lineEdit->setFont(font);
        express_lineEdit->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Arial\";"));
        express_lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        function_groupBox = new QGroupBox(centralwidget);
        function_groupBox->setObjectName(QString::fromUtf8("function_groupBox"));
        function_groupBox->setGeometry(QRect(10, 160, 331, 161));
        fun_Lg_pushButton = new QPushButton(function_groupBox);
        fun_Lg_pushButton->setObjectName(QString::fromUtf8("fun_Lg_pushButton"));
        fun_Lg_pushButton->setGeometry(QRect(175, 10, 50, 23));
        QPalette palette;
        QBrush brush(QColor(85, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        fun_Lg_pushButton->setPalette(palette);
        fun_Lg_pushButton->setAutoDefault(true);
        fun_Abs_pushButton = new QPushButton(function_groupBox);
        fun_Abs_pushButton->setObjectName(QString::fromUtf8("fun_Abs_pushButton"));
        fun_Abs_pushButton->setGeometry(QRect(280, 70, 45, 23));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        fun_Abs_pushButton->setPalette(palette1);
        fun_Abs_pushButton->setAutoDefault(true);
        fun_Ln_pushButton = new QPushButton(function_groupBox);
        fun_Ln_pushButton->setObjectName(QString::fromUtf8("fun_Ln_pushButton"));
        fun_Ln_pushButton->setGeometry(QRect(230, 10, 45, 23));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        fun_Ln_pushButton->setPalette(palette2);
        fun_Ln_pushButton->setAutoDefault(true);
        fun_Log_pushButton = new QPushButton(function_groupBox);
        fun_Log_pushButton->setObjectName(QString::fromUtf8("fun_Log_pushButton"));
        fun_Log_pushButton->setGeometry(QRect(115, 10, 55, 23));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        fun_Log_pushButton->setPalette(palette3);
        fun_Log_pushButton->setAutoDefault(true);
        fun_Arcsin_pushButton = new QPushButton(function_groupBox);
        fun_Arcsin_pushButton->setObjectName(QString::fromUtf8("fun_Arcsin_pushButton"));
        fun_Arcsin_pushButton->setGeometry(QRect(60, 10, 50, 23));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        fun_Arcsin_pushButton->setPalette(palette4);
        fun_Arcsin_pushButton->setAutoDefault(true);
        fun_Sin_pushButton = new QPushButton(function_groupBox);
        fun_Sin_pushButton->setObjectName(QString::fromUtf8("fun_Sin_pushButton"));
        fun_Sin_pushButton->setGeometry(QRect(10, 10, 45, 23));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        fun_Sin_pushButton->setPalette(palette5);
        fun_Sin_pushButton->setAutoDefault(true);
        fun_Cos_pushButton = new QPushButton(function_groupBox);
        fun_Cos_pushButton->setObjectName(QString::fromUtf8("fun_Cos_pushButton"));
        fun_Cos_pushButton->setGeometry(QRect(10, 40, 45, 23));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        fun_Cos_pushButton->setPalette(palette6);
        fun_Cos_pushButton->setAutoDefault(true);
        fun_Tan_pushButton = new QPushButton(function_groupBox);
        fun_Tan_pushButton->setObjectName(QString::fromUtf8("fun_Tan_pushButton"));
        fun_Tan_pushButton->setGeometry(QRect(10, 70, 45, 23));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        fun_Tan_pushButton->setPalette(palette7);
        fun_Tan_pushButton->setAutoDefault(true);
        fun_Cot_pushButton = new QPushButton(function_groupBox);
        fun_Cot_pushButton->setObjectName(QString::fromUtf8("fun_Cot_pushButton"));
        fun_Cot_pushButton->setGeometry(QRect(10, 100, 45, 23));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        fun_Cot_pushButton->setPalette(palette8);
        fun_Cot_pushButton->setAutoDefault(true);
        fun_Arccos_pushButton = new QPushButton(function_groupBox);
        fun_Arccos_pushButton->setObjectName(QString::fromUtf8("fun_Arccos_pushButton"));
        fun_Arccos_pushButton->setGeometry(QRect(60, 40, 50, 23));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        fun_Arccos_pushButton->setPalette(palette9);
        fun_Arccos_pushButton->setAutoDefault(true);
        fun_Arctan_pushButton = new QPushButton(function_groupBox);
        fun_Arctan_pushButton->setObjectName(QString::fromUtf8("fun_Arctan_pushButton"));
        fun_Arctan_pushButton->setGeometry(QRect(60, 70, 50, 23));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        fun_Arctan_pushButton->setPalette(palette10);
        fun_Arctan_pushButton->setAutoDefault(true);
        fun_Arccot_pushButton = new QPushButton(function_groupBox);
        fun_Arccot_pushButton->setObjectName(QString::fromUtf8("fun_Arccot_pushButton"));
        fun_Arccot_pushButton->setGeometry(QRect(60, 100, 50, 23));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        fun_Arccot_pushButton->setPalette(palette11);
        fun_Arccot_pushButton->setAutoDefault(true);
        operCur_pushButton = new QPushButton(function_groupBox);
        operCur_pushButton->setObjectName(QString::fromUtf8("operCur_pushButton"));
        operCur_pushButton->setGeometry(QRect(175, 70, 50, 23));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        operCur_pushButton->setPalette(palette12);
        operCur_pushButton->setAutoDefault(true);
        operXYsqrt_pushButton = new QPushButton(function_groupBox);
        operXYsqrt_pushButton->setObjectName(QString::fromUtf8("operXYsqrt_pushButton"));
        operXYsqrt_pushButton->setGeometry(QRect(175, 100, 50, 23));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        operXYsqrt_pushButton->setPalette(palette13);
        operXYsqrt_pushButton->setAutoDefault(true);
        operSqr_pushButton = new QPushButton(function_groupBox);
        operSqr_pushButton->setObjectName(QString::fromUtf8("operSqr_pushButton"));
        operSqr_pushButton->setGeometry(QRect(230, 70, 45, 23));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        operSqr_pushButton->setPalette(palette14);
        operSqr_pushButton->setAutoDefault(true);
        operCub_pushButton = new QPushButton(function_groupBox);
        operCub_pushButton->setObjectName(QString::fromUtf8("operCub_pushButton"));
        operCub_pushButton->setGeometry(QRect(230, 100, 45, 23));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        operCub_pushButton->setPalette(palette15);
        operCub_pushButton->setAutoDefault(true);
        operExp10_pushButton = new QPushButton(function_groupBox);
        operExp10_pushButton->setObjectName(QString::fromUtf8("operExp10_pushButton"));
        operExp10_pushButton->setGeometry(QRect(280, 100, 45, 23));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        operExp10_pushButton->setPalette(palette16);
        operExp10_pushButton->setAutoDefault(true);
        MS_pushButton = new QPushButton(function_groupBox);
        MS_pushButton->setObjectName(QString::fromUtf8("MS_pushButton"));
        MS_pushButton->setGeometry(QRect(230, 130, 45, 23));
        QPalette palette17;
        QBrush brush2(QColor(0, 0, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        MS_pushButton->setPalette(palette17);
        MS_pushButton->setAutoDefault(true);
        ANS_pushButton = new QPushButton(function_groupBox);
        ANS_pushButton->setObjectName(QString::fromUtf8("ANS_pushButton"));
        ANS_pushButton->setGeometry(QRect(175, 130, 50, 23));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        ANS_pushButton->setPalette(palette18);
        ANS_pushButton->setAutoDefault(true);
        constPi_pushButton = new QPushButton(function_groupBox);
        constPi_pushButton->setObjectName(QString::fromUtf8("constPi_pushButton"));
        constPi_pushButton->setGeometry(QRect(115, 130, 55, 23));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        constPi_pushButton->setPalette(palette19);
        constPi_pushButton->setAutoDefault(true);
        constEuler_pushButton = new QPushButton(function_groupBox);
        constEuler_pushButton->setObjectName(QString::fromUtf8("constEuler_pushButton"));
        constEuler_pushButton->setGeometry(QRect(60, 130, 50, 23));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        constEuler_pushButton->setPalette(palette20);
        constEuler_pushButton->setAutoDefault(true);
        fun_Pow_pushButton = new QPushButton(function_groupBox);
        fun_Pow_pushButton->setObjectName(QString::fromUtf8("fun_Pow_pushButton"));
        fun_Pow_pushButton->setGeometry(QRect(115, 40, 55, 23));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        fun_Pow_pushButton->setPalette(palette21);
        fun_Pow_pushButton->setAutoDefault(true);
        constGravity_pushButton = new QPushButton(function_groupBox);
        constGravity_pushButton->setObjectName(QString::fromUtf8("constGravity_pushButton"));
        constGravity_pushButton->setGeometry(QRect(10, 130, 45, 23));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        constGravity_pushButton->setPalette(palette22);
        constGravity_pushButton->setAutoDefault(true);
        MR_pushButton = new QPushButton(function_groupBox);
        MR_pushButton->setObjectName(QString::fromUtf8("MR_pushButton"));
        MR_pushButton->setGeometry(QRect(280, 130, 45, 23));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        MR_pushButton->setPalette(palette23);
        MR_pushButton->setAutoDefault(true);
        fun_Lcm_pushButton = new QPushButton(function_groupBox);
        fun_Lcm_pushButton->setObjectName(QString::fromUtf8("fun_Lcm_pushButton"));
        fun_Lcm_pushButton->setGeometry(QRect(115, 100, 55, 23));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        fun_Lcm_pushButton->setPalette(palette24);
        fun_Gcd_pushButton = new QPushButton(function_groupBox);
        fun_Gcd_pushButton->setObjectName(QString::fromUtf8("fun_Gcd_pushButton"));
        fun_Gcd_pushButton->setGeometry(QRect(115, 70, 55, 23));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        fun_Gcd_pushButton->setPalette(palette25);
        operSqrt_pushButton = new QPushButton(function_groupBox);
        operSqrt_pushButton->setObjectName(QString::fromUtf8("operSqrt_pushButton"));
        operSqrt_pushButton->setGeometry(QRect(175, 40, 50, 23));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        operSqrt_pushButton->setPalette(palette26);
        operSqrt_pushButton->setAutoDefault(true);
        operComb_pushButton = new QPushButton(function_groupBox);
        operComb_pushButton->setObjectName(QString::fromUtf8("operComb_pushButton"));
        operComb_pushButton->setGeometry(QRect(280, 40, 45, 23));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        operComb_pushButton->setPalette(palette27);
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        operComb_pushButton->setFont(font1);
        operComb_pushButton->setAutoDefault(true);
        operMod_pushButton = new QPushButton(function_groupBox);
        operMod_pushButton->setObjectName(QString::fromUtf8("operMod_pushButton"));
        operMod_pushButton->setGeometry(QRect(280, 10, 45, 23));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        operMod_pushButton->setPalette(palette28);
        operMod_pushButton->setFont(font1);
        operMod_pushButton->setAutoDefault(true);
        operExpE_pushButton = new QPushButton(function_groupBox);
        operExpE_pushButton->setObjectName(QString::fromUtf8("operExpE_pushButton"));
        operExpE_pushButton->setGeometry(QRect(230, 40, 45, 23));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        operExpE_pushButton->setPalette(palette29);
        operExpE_pushButton->setAutoDefault(true);
        number_groupBox = new QGroupBox(centralwidget);
        number_groupBox->setObjectName(QString::fromUtf8("number_groupBox"));
        number_groupBox->setGeometry(QRect(340, 160, 311, 161));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        number_groupBox->setFont(font2);
        numSeven_pushButton = new QPushButton(number_groupBox);
        numSeven_pushButton->setObjectName(QString::fromUtf8("numSeven_pushButton"));
        numSeven_pushButton->setGeometry(QRect(60, 10, 40, 23));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette30.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette30.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        numSeven_pushButton->setPalette(palette30);
        numSeven_pushButton->setAutoFillBackground(true);
        numSeven_pushButton->setAutoDefault(true);
        numEight_pushButton = new QPushButton(number_groupBox);
        numEight_pushButton->setObjectName(QString::fromUtf8("numEight_pushButton"));
        numEight_pushButton->setGeometry(QRect(110, 10, 40, 23));
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette31.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette31.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        numEight_pushButton->setPalette(palette31);
        numEight_pushButton->setAutoDefault(true);
        numNine_pushButton = new QPushButton(number_groupBox);
        numNine_pushButton->setObjectName(QString::fromUtf8("numNine_pushButton"));
        numNine_pushButton->setGeometry(QRect(160, 10, 40, 23));
        QPalette palette32;
        palette32.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette32.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette32.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        numNine_pushButton->setPalette(palette32);
        numNine_pushButton->setAutoDefault(true);
        numFour_pushButton = new QPushButton(number_groupBox);
        numFour_pushButton->setObjectName(QString::fromUtf8("numFour_pushButton"));
        numFour_pushButton->setGeometry(QRect(60, 40, 40, 23));
        QPalette palette33;
        palette33.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette33.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette33.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        numFour_pushButton->setPalette(palette33);
        numFour_pushButton->setAutoDefault(true);
        numFive_pushButton = new QPushButton(number_groupBox);
        numFive_pushButton->setObjectName(QString::fromUtf8("numFive_pushButton"));
        numFive_pushButton->setGeometry(QRect(110, 40, 40, 23));
        QPalette palette34;
        palette34.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette34.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette34.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        numFive_pushButton->setPalette(palette34);
        numFive_pushButton->setAutoDefault(true);
        numSix_pushButton = new QPushButton(number_groupBox);
        numSix_pushButton->setObjectName(QString::fromUtf8("numSix_pushButton"));
        numSix_pushButton->setGeometry(QRect(160, 40, 40, 23));
        QPalette palette35;
        palette35.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette35.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette35.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        numSix_pushButton->setPalette(palette35);
        numSix_pushButton->setAutoDefault(true);
        numOne_pushButton = new QPushButton(number_groupBox);
        numOne_pushButton->setObjectName(QString::fromUtf8("numOne_pushButton"));
        numOne_pushButton->setGeometry(QRect(60, 70, 40, 23));
        QPalette palette36;
        palette36.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette36.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette36.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        numOne_pushButton->setPalette(palette36);
        numOne_pushButton->setAutoDefault(true);
        numTwo_pushButton = new QPushButton(number_groupBox);
        numTwo_pushButton->setObjectName(QString::fromUtf8("numTwo_pushButton"));
        numTwo_pushButton->setGeometry(QRect(110, 70, 40, 23));
        QPalette palette37;
        palette37.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette37.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette37.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        numTwo_pushButton->setPalette(palette37);
        numTwo_pushButton->setAutoDefault(true);
        numThree_pushButton = new QPushButton(number_groupBox);
        numThree_pushButton->setObjectName(QString::fromUtf8("numThree_pushButton"));
        numThree_pushButton->setGeometry(QRect(160, 70, 40, 23));
        QPalette palette38;
        palette38.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette38.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette38.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        numThree_pushButton->setPalette(palette38);
        numThree_pushButton->setAutoDefault(true);
        numZero_pushButton = new QPushButton(number_groupBox);
        numZero_pushButton->setObjectName(QString::fromUtf8("numZero_pushButton"));
        numZero_pushButton->setGeometry(QRect(60, 100, 40, 23));
        QPalette palette39;
        palette39.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette39.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette39.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        numZero_pushButton->setPalette(palette39);
        numZero_pushButton->setAutoDefault(true);
        point_pushButton = new QPushButton(number_groupBox);
        point_pushButton->setObjectName(QString::fromUtf8("point_pushButton"));
        point_pushButton->setGeometry(QRect(110, 100, 40, 23));
        QPalette palette40;
        palette40.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette40.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette40.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        point_pushButton->setPalette(palette40);
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        point_pushButton->setFont(font3);
        point_pushButton->setAutoDefault(true);
        numE_pushButton = new QPushButton(number_groupBox);
        numE_pushButton->setObjectName(QString::fromUtf8("numE_pushButton"));
        numE_pushButton->setEnabled(false);
        numE_pushButton->setGeometry(QRect(10, 130, 40, 23));
        QPalette palette41;
        palette41.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette41.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette41.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        numE_pushButton->setPalette(palette41);
        numE_pushButton->setAutoDefault(true);
        leftBack_pushButton = new QPushButton(number_groupBox);
        leftBack_pushButton->setObjectName(QString::fromUtf8("leftBack_pushButton"));
        leftBack_pushButton->setGeometry(QRect(210, 10, 40, 23));
        QPalette palette42;
        palette42.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette42.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette42.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        leftBack_pushButton->setPalette(palette42);
        leftBack_pushButton->setFont(font2);
        leftBack_pushButton->setAutoDefault(true);
        operPercent_pushButton = new QPushButton(number_groupBox);
        operPercent_pushButton->setObjectName(QString::fromUtf8("operPercent_pushButton"));
        operPercent_pushButton->setGeometry(QRect(210, 130, 40, 23));
        QPalette palette43;
        QBrush brush3(QColor(255, 0, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette43.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette43.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette43.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        operPercent_pushButton->setPalette(palette43);
        QFont font4;
        font4.setPointSize(9);
        font4.setBold(true);
        font4.setWeight(75);
        operPercent_pushButton->setFont(font4);
        operPercent_pushButton->setCheckable(false);
        operPercent_pushButton->setAutoDefault(true);
        operMultiply_pushButton = new QPushButton(number_groupBox);
        operMultiply_pushButton->setObjectName(QString::fromUtf8("operMultiply_pushButton"));
        operMultiply_pushButton->setGeometry(QRect(160, 100, 40, 23));
        QPalette palette44;
        palette44.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette44.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette44.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        operMultiply_pushButton->setPalette(palette44);
        operMultiply_pushButton->setFont(font2);
        operMultiply_pushButton->setAutoDefault(true);
        operSubtract_pushButton = new QPushButton(number_groupBox);
        operSubtract_pushButton->setObjectName(QString::fromUtf8("operSubtract_pushButton"));
        operSubtract_pushButton->setGeometry(QRect(210, 70, 40, 23));
        QPalette palette45;
        palette45.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette45.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette45.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        operSubtract_pushButton->setPalette(palette45);
        operSubtract_pushButton->setFont(font2);
        operSubtract_pushButton->setAutoDefault(true);
        result_pushButton = new QPushButton(number_groupBox);
        result_pushButton->setObjectName(QString::fromUtf8("result_pushButton"));
        result_pushButton->setGeometry(QRect(260, 130, 40, 23));
        QPalette palette46;
        QBrush brush4(QColor(0, 170, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette46.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette46.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette46.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        result_pushButton->setPalette(palette46);
        result_pushButton->setFont(font2);
        result_pushButton->setAutoDefault(true);
        result_pushButton->setDefault(false);
        operAdd_pushButton = new QPushButton(number_groupBox);
        operAdd_pushButton->setObjectName(QString::fromUtf8("operAdd_pushButton"));
        operAdd_pushButton->setGeometry(QRect(210, 100, 40, 23));
        QPalette palette47;
        palette47.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette47.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette47.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        operAdd_pushButton->setPalette(palette47);
        operAdd_pushButton->setFont(font2);
        operAdd_pushButton->setAutoDefault(true);
        operDivide_pushButton = new QPushButton(number_groupBox);
        operDivide_pushButton->setObjectName(QString::fromUtf8("operDivide_pushButton"));
        operDivide_pushButton->setGeometry(QRect(260, 100, 40, 23));
        QPalette palette48;
        palette48.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette48.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette48.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        operDivide_pushButton->setPalette(palette48);
        operDivide_pushButton->setFont(font2);
        operDivide_pushButton->setAutoDefault(true);
        numA_pushButton = new QPushButton(number_groupBox);
        numA_pushButton->setObjectName(QString::fromUtf8("numA_pushButton"));
        numA_pushButton->setEnabled(false);
        numA_pushButton->setGeometry(QRect(10, 10, 40, 23));
        QPalette palette49;
        palette49.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette49.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette49.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        numA_pushButton->setPalette(palette49);
        numA_pushButton->setAutoDefault(true);
        numB_pushButton = new QPushButton(number_groupBox);
        numB_pushButton->setObjectName(QString::fromUtf8("numB_pushButton"));
        numB_pushButton->setEnabled(false);
        numB_pushButton->setGeometry(QRect(10, 40, 40, 23));
        QPalette palette50;
        palette50.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette50.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette50.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        numB_pushButton->setPalette(palette50);
        numB_pushButton->setAutoDefault(true);
        numF_pushButton = new QPushButton(number_groupBox);
        numF_pushButton->setObjectName(QString::fromUtf8("numF_pushButton"));
        numF_pushButton->setEnabled(false);
        numF_pushButton->setGeometry(QRect(60, 130, 40, 23));
        QPalette palette51;
        palette51.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette51.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette51.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        numF_pushButton->setPalette(palette51);
        numF_pushButton->setAutoDefault(true);
        numD_pushButton = new QPushButton(number_groupBox);
        numD_pushButton->setObjectName(QString::fromUtf8("numD_pushButton"));
        numD_pushButton->setEnabled(false);
        numD_pushButton->setGeometry(QRect(10, 100, 40, 23));
        QPalette palette52;
        palette52.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette52.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette52.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        numD_pushButton->setPalette(palette52);
        numD_pushButton->setAutoDefault(true);
        numC_pushButton = new QPushButton(number_groupBox);
        numC_pushButton->setObjectName(QString::fromUtf8("numC_pushButton"));
        numC_pushButton->setEnabled(false);
        numC_pushButton->setGeometry(QRect(10, 70, 40, 23));
        QPalette palette53;
        palette53.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette53.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette53.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        numC_pushButton->setPalette(palette53);
        numC_pushButton->setAutoDefault(true);
        operFact_pushButton = new QPushButton(number_groupBox);
        operFact_pushButton->setObjectName(QString::fromUtf8("operFact_pushButton"));
        operFact_pushButton->setGeometry(QRect(210, 40, 40, 23));
        QPalette palette54;
        palette54.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette54.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette54.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        operFact_pushButton->setPalette(palette54);
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setWeight(75);
        operFact_pushButton->setFont(font5);
        operFact_pushButton->setAutoDefault(true);
        operDiv_pushButton = new QPushButton(number_groupBox);
        operDiv_pushButton->setObjectName(QString::fromUtf8("operDiv_pushButton"));
        operDiv_pushButton->setGeometry(QRect(260, 40, 40, 23));
        QPalette palette55;
        palette55.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette55.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette55.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        operDiv_pushButton->setPalette(palette55);
        operDiv_pushButton->setFont(font2);
        operDiv_pushButton->setAutoDefault(true);
        operPower_pushButton = new QPushButton(number_groupBox);
        operPower_pushButton->setObjectName(QString::fromUtf8("operPower_pushButton"));
        operPower_pushButton->setGeometry(QRect(260, 70, 40, 23));
        QPalette palette56;
        palette56.setBrush(QPalette::Active, QPalette::ButtonText, brush3);
        palette56.setBrush(QPalette::Inactive, QPalette::ButtonText, brush3);
        palette56.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        operPower_pushButton->setPalette(palette56);
        QFont font6;
        font6.setPointSize(6);
        font6.setBold(true);
        font6.setWeight(75);
        operPower_pushButton->setFont(font6);
        operPower_pushButton->setAutoDefault(true);
        NumI_pushButton = new QPushButton(number_groupBox);
        NumI_pushButton->setObjectName(QString::fromUtf8("NumI_pushButton"));
        NumI_pushButton->setEnabled(false);
        NumI_pushButton->setGeometry(QRect(110, 130, 40, 23));
        QPalette palette57;
        palette57.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette57.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette57.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        NumI_pushButton->setPalette(palette57);
        NumI_pushButton->setFont(font2);
        NumI_pushButton->setAutoDefault(true);
        numEi_pushButton = new QPushButton(number_groupBox);
        numEi_pushButton->setObjectName(QString::fromUtf8("numEi_pushButton"));
        numEi_pushButton->setEnabled(false);
        numEi_pushButton->setGeometry(QRect(160, 130, 40, 23));
        QPalette palette58;
        palette58.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette58.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette58.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        numEi_pushButton->setPalette(palette58);
        numEi_pushButton->setFont(font2);
        numEi_pushButton->setAutoDefault(true);
        rightBack_pushButton = new QPushButton(number_groupBox);
        rightBack_pushButton->setObjectName(QString::fromUtf8("rightBack_pushButton"));
        rightBack_pushButton->setGeometry(QRect(260, 10, 40, 23));
        QPalette palette59;
        palette59.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        palette59.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette59.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        rightBack_pushButton->setPalette(palette59);
        rightBack_pushButton->setFont(font2);
        rightBack_pushButton->setAutoDefault(true);
        checkBox_1 = new QCheckBox(centralwidget);
        checkBox_1->setObjectName(QString::fromUtf8("checkBox_1"));
        checkBox_1->setGeometry(QRect(20, 130, 81, 21));
        checkBox_1->setAcceptDrops(false);
        checkBox_1->setChecked(false);
        checkBox_1->setAutoRepeat(false);
        checkBox_1->setAutoExclusive(false);
        checkBox_1->setTristate(false);
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(110, 130, 81, 21));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(280, 130, 51, 20));
        QPalette palette60;
        QBrush brush5(QColor(204, 232, 207, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette60.setBrush(QPalette::Active, QPalette::Base, brush5);
        QBrush brush6(QColor(0, 255, 0, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette60.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette60.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        palette60.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette60.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette60.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        spinBox->setPalette(palette60);
        spinBox->setMinimum(0);
        spinBox->setMaximum(16);
        spinBox->setValue(6);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 128, 41, 21));
        QFont font7;
        font7.setPointSize(10);
        label->setFont(font7);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 141, 41));
        QPalette palette61;
        palette61.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        palette61.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
        palette61.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
        groupBox->setPalette(palette61);
        Real_radioButton = new QRadioButton(groupBox);
        Real_radioButton->setObjectName(QString::fromUtf8("Real_radioButton"));
        Real_radioButton->setGeometry(QRect(10, 20, 51, 16));
        Real_radioButton->setChecked(true);
        Complex_radioButton = new QRadioButton(groupBox);
        Complex_radioButton->setObjectName(QString::fromUtf8("Complex_radioButton"));
        Complex_radioButton->setGeometry(QRect(70, 20, 71, 16));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(170, 10, 161, 41));
        Deg_radioButton = new QRadioButton(groupBox_2);
        Deg_radioButton->setObjectName(QString::fromUtf8("Deg_radioButton"));
        Deg_radioButton->setGeometry(QRect(10, 20, 61, 16));
        Deg_radioButton->setChecked(true);
        Rad_radioButton = new QRadioButton(groupBox_2);
        Rad_radioButton->setObjectName(QString::fromUtf8("Rad_radioButton"));
        Rad_radioButton->setGeometry(QRect(90, 20, 61, 16));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(340, 10, 211, 41));
        Dec_radioButton = new QRadioButton(groupBox_3);
        Dec_radioButton->setObjectName(QString::fromUtf8("Dec_radioButton"));
        Dec_radioButton->setGeometry(QRect(110, 20, 45, 20));
        Dec_radioButton->setChecked(true);
        Oct_radioButton = new QRadioButton(groupBox_3);
        Oct_radioButton->setObjectName(QString::fromUtf8("Oct_radioButton"));
        Oct_radioButton->setEnabled(true);
        Oct_radioButton->setGeometry(QRect(60, 20, 45, 20));
        Hex_radioButton = new QRadioButton(groupBox_3);
        Hex_radioButton->setObjectName(QString::fromUtf8("Hex_radioButton"));
        Hex_radioButton->setGeometry(QRect(160, 20, 45, 20));
        Bin_radioButton = new QRadioButton(groupBox_3);
        Bin_radioButton->setObjectName(QString::fromUtf8("Bin_radioButton"));
        Bin_radioButton->setEnabled(true);
        Bin_radioButton->setGeometry(QRect(10, 20, 45, 20));
        result_lineEdit = new QLineEdit(centralwidget);
        result_lineEdit->setObjectName(QString::fromUtf8("result_lineEdit"));
        result_lineEdit->setGeometry(QRect(210, 90, 441, 31));
        result_lineEdit->setFont(font);
        result_lineEdit->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Arial\";"));
        result_lineEdit->setFrame(true);
        result_lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        result_lineEdit->setDragEnabled(false);
        result_lineEdit->setReadOnly(true);
        memory_lineEdit = new QLineEdit(centralwidget);
        memory_lineEdit->setObjectName(QString::fromUtf8("memory_lineEdit"));
        memory_lineEdit->setGeometry(QRect(10, 90, 201, 31));
        memory_lineEdit->setFont(font);
        memory_lineEdit->setStyleSheet(QString::fromUtf8("font: 75 10pt \"Arial\";"));
        memory_lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        memory_lineEdit->setReadOnly(true);
        undo_pushButton = new QPushButton(centralwidget);
        undo_pushButton->setObjectName(QString::fromUtf8("undo_pushButton"));
        undo_pushButton->setGeometry(QRect(350, 130, 61, 25));
        QPalette palette62;
        QBrush brush7(QColor(0, 0, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette62.setBrush(QPalette::Active, QPalette::ButtonText, brush7);
        palette62.setBrush(QPalette::Inactive, QPalette::ButtonText, brush7);
        palette62.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        undo_pushButton->setPalette(palette62);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        undo_pushButton->setIcon(icon1);
        undo_pushButton->setAutoDefault(true);
        undo_pushButton->setDefault(false);
        backspace_pushButton = new QPushButton(centralwidget);
        backspace_pushButton->setObjectName(QString::fromUtf8("backspace_pushButton"));
        backspace_pushButton->setGeometry(QRect(570, 130, 81, 25));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/go-previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        backspace_pushButton->setIcon(icon2);
        backspace_pushButton->setIconSize(QSize(16, 16));
        backspace_pushButton->setAutoDefault(true);
        redo_pushButton = new QPushButton(centralwidget);
        redo_pushButton->setObjectName(QString::fromUtf8("redo_pushButton"));
        redo_pushButton->setGeometry(QRect(420, 130, 60, 25));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        redo_pushButton->setIcon(icon3);
        redo_pushButton->setAutoDefault(true);
        clear_pushButton = new QPushButton(centralwidget);
        clear_pushButton->setObjectName(QString::fromUtf8("clear_pushButton"));
        clear_pushButton->setGeometry(QRect(500, 130, 60, 25));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        clear_pushButton->setIcon(icon4);
        clear_pushButton->setAutoDefault(true);
        fold_pushButton = new QPushButton(centralwidget);
        fold_pushButton->setObjectName(QString::fromUtf8("fold_pushButton"));
        fold_pushButton->setGeometry(QRect(600, 17, 49, 20));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/fold.png"), QSize(), QIcon::Normal, QIcon::Off);
        fold_pushButton->setIcon(icon5);
        fold_pushButton->setIconSize(QSize(55, 100));
        fold_pushButton->setCheckable(true);
        fold_pushButton->setAutoDefault(true);
        Calculator->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 660, 23));
        toolsMenu = new QMenu(menubar);
        toolsMenu->setObjectName(QString::fromUtf8("toolsMenu"));
        menuElse_Tools = new QMenu(toolsMenu);
        menuElse_Tools->setObjectName(QString::fromUtf8("menuElse_Tools"));
        supervisorMenu = new QMenu(menubar);
        supervisorMenu->setObjectName(QString::fromUtf8("supervisorMenu"));
        helpMenu = new QMenu(menubar);
        helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuLanguage = new QMenu(menuSettings);
        menuLanguage->setObjectName(QString::fromUtf8("menuLanguage"));
        menuBackground_Color = new QMenu(menuSettings);
        menuBackground_Color->setObjectName(QString::fromUtf8("menuBackground_Color"));
        Calculator->setMenuBar(menubar);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(spinBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(express_lineEdit, checkBox_1);
        QWidget::setTabOrder(checkBox_1, checkBox_2);
        QWidget::setTabOrder(checkBox_2, spinBox);
        QWidget::setTabOrder(spinBox, undo_pushButton);
        QWidget::setTabOrder(undo_pushButton, redo_pushButton);
        QWidget::setTabOrder(redo_pushButton, clear_pushButton);
        QWidget::setTabOrder(clear_pushButton, backspace_pushButton);
        QWidget::setTabOrder(backspace_pushButton, fun_Sin_pushButton);
        QWidget::setTabOrder(fun_Sin_pushButton, fun_Cos_pushButton);
        QWidget::setTabOrder(fun_Cos_pushButton, fun_Tan_pushButton);
        QWidget::setTabOrder(fun_Tan_pushButton, fun_Cot_pushButton);
        QWidget::setTabOrder(fun_Cot_pushButton, fun_Arcsin_pushButton);
        QWidget::setTabOrder(fun_Arcsin_pushButton, fun_Arccos_pushButton);
        QWidget::setTabOrder(fun_Arccos_pushButton, fun_Arctan_pushButton);
        QWidget::setTabOrder(fun_Arctan_pushButton, fun_Arccot_pushButton);
        QWidget::setTabOrder(fun_Arccot_pushButton, fun_Log_pushButton);
        QWidget::setTabOrder(fun_Log_pushButton, fun_Pow_pushButton);
        QWidget::setTabOrder(fun_Pow_pushButton, fun_Gcd_pushButton);
        QWidget::setTabOrder(fun_Gcd_pushButton, fun_Lcm_pushButton);
        QWidget::setTabOrder(fun_Lcm_pushButton, fun_Lg_pushButton);
        QWidget::setTabOrder(fun_Lg_pushButton, operSqrt_pushButton);
        QWidget::setTabOrder(operSqrt_pushButton, operCur_pushButton);
        QWidget::setTabOrder(operCur_pushButton, operXYsqrt_pushButton);
        QWidget::setTabOrder(operXYsqrt_pushButton, fun_Ln_pushButton);
        QWidget::setTabOrder(fun_Ln_pushButton, operExpE_pushButton);
        QWidget::setTabOrder(operExpE_pushButton, operSqr_pushButton);
        QWidget::setTabOrder(operSqr_pushButton, operCub_pushButton);
        QWidget::setTabOrder(operCub_pushButton, operMod_pushButton);
        QWidget::setTabOrder(operMod_pushButton, operComb_pushButton);
        QWidget::setTabOrder(operComb_pushButton, fun_Abs_pushButton);
        QWidget::setTabOrder(fun_Abs_pushButton, operExp10_pushButton);
        QWidget::setTabOrder(operExp10_pushButton, constGravity_pushButton);
        QWidget::setTabOrder(constGravity_pushButton, constEuler_pushButton);
        QWidget::setTabOrder(constEuler_pushButton, constPi_pushButton);
        QWidget::setTabOrder(constPi_pushButton, ANS_pushButton);
        QWidget::setTabOrder(ANS_pushButton, MS_pushButton);
        QWidget::setTabOrder(MS_pushButton, MR_pushButton);
        QWidget::setTabOrder(MR_pushButton, numA_pushButton);
        QWidget::setTabOrder(numA_pushButton, numB_pushButton);
        QWidget::setTabOrder(numB_pushButton, numC_pushButton);
        QWidget::setTabOrder(numC_pushButton, numD_pushButton);
        QWidget::setTabOrder(numD_pushButton, numE_pushButton);
        QWidget::setTabOrder(numE_pushButton, numF_pushButton);
        QWidget::setTabOrder(numF_pushButton, numSeven_pushButton);
        QWidget::setTabOrder(numSeven_pushButton, numFour_pushButton);
        QWidget::setTabOrder(numFour_pushButton, numOne_pushButton);
        QWidget::setTabOrder(numOne_pushButton, numZero_pushButton);
        QWidget::setTabOrder(numZero_pushButton, numEight_pushButton);
        QWidget::setTabOrder(numEight_pushButton, numFive_pushButton);
        QWidget::setTabOrder(numFive_pushButton, numTwo_pushButton);
        QWidget::setTabOrder(numTwo_pushButton, point_pushButton);
        QWidget::setTabOrder(point_pushButton, numNine_pushButton);
        QWidget::setTabOrder(numNine_pushButton, numSix_pushButton);
        QWidget::setTabOrder(numSix_pushButton, numThree_pushButton);
        QWidget::setTabOrder(numThree_pushButton, operMultiply_pushButton);
        QWidget::setTabOrder(operMultiply_pushButton, NumI_pushButton);
        QWidget::setTabOrder(NumI_pushButton, numEi_pushButton);
        QWidget::setTabOrder(numEi_pushButton, leftBack_pushButton);
        QWidget::setTabOrder(leftBack_pushButton, rightBack_pushButton);
        QWidget::setTabOrder(rightBack_pushButton, operFact_pushButton);
        QWidget::setTabOrder(operFact_pushButton, operDiv_pushButton);
        QWidget::setTabOrder(operDiv_pushButton, operSubtract_pushButton);
        QWidget::setTabOrder(operSubtract_pushButton, operPower_pushButton);
        QWidget::setTabOrder(operPower_pushButton, operAdd_pushButton);
        QWidget::setTabOrder(operAdd_pushButton, operDivide_pushButton);
        QWidget::setTabOrder(operDivide_pushButton, operPercent_pushButton);
        QWidget::setTabOrder(operPercent_pushButton, result_pushButton);
        QWidget::setTabOrder(result_pushButton, Real_radioButton);
        QWidget::setTabOrder(Real_radioButton, Complex_radioButton);
        QWidget::setTabOrder(Complex_radioButton, Deg_radioButton);
        QWidget::setTabOrder(Deg_radioButton, Rad_radioButton);
        QWidget::setTabOrder(Rad_radioButton, Dec_radioButton);
        QWidget::setTabOrder(Dec_radioButton, Bin_radioButton);
        QWidget::setTabOrder(Bin_radioButton, Oct_radioButton);
        QWidget::setTabOrder(Oct_radioButton, Hex_radioButton);
        QWidget::setTabOrder(Hex_radioButton, fold_pushButton);
        QWidget::setTabOrder(fold_pushButton, memory_lineEdit);
        QWidget::setTabOrder(memory_lineEdit, result_lineEdit);

        menubar->addAction(toolsMenu->menuAction());
        menubar->addAction(supervisorMenu->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menubar->addAction(helpMenu->menuAction());
        toolsMenu->addAction(HugeCalcAction);
        toolsMenu->addAction(linearAlgebraAction);
        toolsMenu->addAction(noLinearAlgebraAction);
        toolsMenu->addSeparator();
        toolsMenu->addAction(menuElse_Tools->menuAction());
        toolsMenu->addSeparator();
        toolsMenu->addAction(exitAction);
        menuElse_Tools->addAction(System_Calculator_Action);
        menuElse_Tools->addAction(Geometers_Sketchpad_Action);
        supervisorMenu->addAction(historyAction);
        supervisorMenu->addAction(variableAction);
        supervisorMenu->addAction(constantAction);
        helpMenu->addAction(helpAction);
        helpMenu->addAction(aboutAction);
        helpMenu->addAction(suggestAction);
        menuSettings->addAction(menuLanguage->menuAction());
        menuSettings->addAction(menuBackground_Color->menuAction());
        menuSettings->addAction(actionExpression_s_Font);
        menuSettings->addAction(topHintAction);
        menuSettings->addAction(actionDefault_Settings);
        menuLanguage->addAction(actionChinese);
        menuLanguage->addAction(actionEnglish);
        menuBackground_Color->addAction(actionWindows_Color);
        menuBackground_Color->addAction(actionTextViews_Color);

        retranslateUi(Calculator);
        QObject::connect(aboutAction, SIGNAL(triggered()), Calculator, SLOT(about()));
        QObject::connect(exitAction, SIGNAL(triggered()), Calculator, SLOT(close()));
        QObject::connect(helpAction, SIGNAL(triggered()), Calculator, SLOT(help()));
        QObject::connect(Dec_radioButton, SIGNAL(clicked()), Calculator, SLOT(decSystem()));
        QObject::connect(Bin_radioButton, SIGNAL(clicked()), Calculator, SLOT(binSystem()));
        QObject::connect(Oct_radioButton, SIGNAL(clicked()), Calculator, SLOT(octSystem()));
        QObject::connect(Hex_radioButton, SIGNAL(clicked()), Calculator, SLOT(hexSystem()));
        QObject::connect(numSeven_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputNumSeven()));
        QObject::connect(numFive_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputNumFive()));
        QObject::connect(numNine_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputNumNine()));
        QObject::connect(numEight_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputNumEight()));
        QObject::connect(numOne_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputNumOne()));
        QObject::connect(numFour_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputNumFour()));
        QObject::connect(numTwo_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputNumTwo()));
        QObject::connect(numZero_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputNumZero()));
        QObject::connect(numThree_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputNumThree()));
        QObject::connect(numSix_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputNumSix()));
        QObject::connect(point_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputPoint()));
        QObject::connect(leftBack_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputLeftBack()));
        QObject::connect(rightBack_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputRightBack()));
        QObject::connect(operAdd_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputOperAdd()));
        QObject::connect(operSubtract_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputOperSubtract()));
        QObject::connect(operMultiply_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputOperMultiply()));
        QObject::connect(operDivide_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputOperDivide()));
        QObject::connect(operDiv_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputOperDiv()));
        QObject::connect(operMod_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputOperMod()));
        QObject::connect(operPercent_pushButton, SIGNAL(clicked(bool)), Calculator, SLOT(inputOperPercent()));
        QObject::connect(operFact_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputOperFact()));
        QObject::connect(operComb_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputOperComb()));
        QObject::connect(operSqr_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputOperSqr()));
        QObject::connect(operCub_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputOperCub()));
        QObject::connect(operExpE_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputOperExpE()));
        QObject::connect(operExp10_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputOperExp10()));
        QObject::connect(operSqrt_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputOperSqrt()));
        QObject::connect(operCur_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputOperCur()));
        QObject::connect(operXYsqrt_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputOperXYsqrt()));
        QObject::connect(fun_Sin_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputFunSin()));
        QObject::connect(fun_Cos_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputFunCos()));
        QObject::connect(fun_Tan_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputFunTan()));
        QObject::connect(fun_Cot_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputFunCot()));
        QObject::connect(fun_Arcsin_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputFunArcSin()));
        QObject::connect(fun_Arccos_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputFunArcCos()));
        QObject::connect(fun_Arctan_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputFunArcTan()));
        QObject::connect(fun_Arccot_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputFunArcCot()));
        QObject::connect(fun_Lg_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputFunLg()));
        QObject::connect(fun_Ln_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputFunLn()));
        QObject::connect(fun_Log_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputFunLog()));
        QObject::connect(fun_Abs_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputFunAbs()));
        QObject::connect(fun_Pow_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputFunPow()));
        QObject::connect(undo_pushButton, SIGNAL(clicked()), Calculator, SLOT(undo()));
        QObject::connect(clear_pushButton, SIGNAL(clicked()), Calculator, SLOT(clearExpress()));
        QObject::connect(redo_pushButton, SIGNAL(clicked()), Calculator, SLOT(redo()));
        QObject::connect(backspace_pushButton, SIGNAL(clicked()), Calculator, SLOT(backspace()));
        QObject::connect(Complex_radioButton, SIGNAL(clicked()), Calculator, SLOT(complexSystem()));
        QObject::connect(Real_radioButton, SIGNAL(clicked()), Calculator, SLOT(realSystem()));
        QObject::connect(fold_pushButton, SIGNAL(clicked()), Calculator, SLOT(fold()));
        QObject::connect(checkBox_1, SIGNAL(clicked()), Calculator, SLOT(hyperbolicSystem()));
        QObject::connect(result_pushButton, SIGNAL(clicked()), Calculator, SLOT(getResult()));
        QObject::connect(express_lineEdit, SIGNAL(textChanged(QString)), express_lineEdit, SLOT(setFocus()));
        QObject::connect(ANS_pushButton, SIGNAL(clicked()), Calculator, SLOT(insertNewResult()));
        QObject::connect(MS_pushButton, SIGNAL(clicked()), Calculator, SLOT(insertMemorySystem()));
        QObject::connect(MR_pushButton, SIGNAL(clicked()), Calculator, SLOT(insertMemoryResult()));
        QObject::connect(constEuler_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputConst_e()));
        QObject::connect(constGravity_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputConst_g()));
        QObject::connect(constPi_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputConst_pi()));
        QObject::connect(historyAction, SIGNAL(triggered()), Calculator, SLOT(showHistory()));
        QObject::connect(express_lineEdit, SIGNAL(returnPressed()), Calculator, SLOT(getResult()));
        QObject::connect(HugeCalcAction, SIGNAL(triggered()), Calculator, SLOT(getHugeCalcWidget()));
        QObject::connect(suggestAction, SIGNAL(triggered()), Calculator, SLOT(giveSuggestions()));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), Calculator, SLOT(changePrecision()));
        QObject::connect(linearAlgebraAction, SIGNAL(triggered()), Calculator, SLOT(getLinearAlgebraWidget()));
        QObject::connect(noLinearAlgebraAction, SIGNAL(triggered()), Calculator, SLOT(getnonLinearAlgebraWidget()));
        QObject::connect(NumI_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputNumI()));
        QObject::connect(numA_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputNumA()));
        QObject::connect(numB_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputNumB()));
        QObject::connect(numC_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputNumC()));
        QObject::connect(numD_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputNumD()));
        QObject::connect(numE_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputNumE()));
        QObject::connect(numF_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputNumF()));
        QObject::connect(numEi_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputNumEi()));
        QObject::connect(fun_Gcd_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputFunGcd()));
        QObject::connect(fun_Lcm_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputFunLcm()));
        QObject::connect(Geometers_Sketchpad_Action, SIGNAL(triggered()), Calculator, SLOT(ElseTools()));
        QObject::connect(System_Calculator_Action, SIGNAL(triggered()), Calculator, SLOT(ElseTools()));
        QObject::connect(actionChinese, SIGNAL(triggered(bool)), Calculator, SLOT(changeLanguage(bool)));
        QObject::connect(actionEnglish, SIGNAL(triggered(bool)), Calculator, SLOT(changeLanguage(bool)));
        QObject::connect(topHintAction, SIGNAL(triggered()), Calculator, SLOT(setTopHint()));
        QObject::connect(actionWindows_Color, SIGNAL(triggered()), Calculator, SLOT(showWindowColorDialog()));
        QObject::connect(actionDefault_Settings, SIGNAL(triggered()), Calculator, SLOT(defaultSettings()));
        QObject::connect(actionExpression_s_Font, SIGNAL(triggered()), Calculator, SLOT(showFontDialog()));
        QObject::connect(variableAction, SIGNAL(triggered()), Calculator, SLOT(showVariable()));
        QObject::connect(constantAction, SIGNAL(triggered()), Calculator, SLOT(showConstant()));
        QObject::connect(actionTextViews_Color, SIGNAL(triggered()), Calculator, SLOT(showTextViewColorDialog()));
        QObject::connect(operPower_pushButton, SIGNAL(clicked()), Calculator, SLOT(inputOperPower()));

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QApplication::translate("Calculator", "Calculator/2012/08", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Calculator->setWhatsThis(QApplication::translate("Calculator", "F1:Help", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        linearAlgebraAction->setText(QApplication::translate("Calculator", "LinearAlgebra Tool", 0, QApplication::UnicodeUTF8));
        HugeCalcAction->setText(QApplication::translate("Calculator", "BigInteger Tool", 0, QApplication::UnicodeUTF8));
        HugeCalcAction->setIconText(QApplication::translate("Calculator", "BigInteger tool", 0, QApplication::UnicodeUTF8));
        exitAction->setText(QApplication::translate("Calculator", "Exit", 0, QApplication::UnicodeUTF8));
        exitAction->setShortcut(QApplication::translate("Calculator", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        historyAction->setText(QApplication::translate("Calculator", "History Manager", 0, QApplication::UnicodeUTF8));
        historyAction->setShortcut(QApplication::translate("Calculator", "Alt+H", 0, QApplication::UnicodeUTF8));
        helpAction->setText(QApplication::translate("Calculator", "Help", 0, QApplication::UnicodeUTF8));
        helpAction->setShortcut(QApplication::translate("Calculator", "F1", 0, QApplication::UnicodeUTF8));
        aboutAction->setText(QApplication::translate("Calculator", "About", 0, QApplication::UnicodeUTF8));
        suggestAction->setText(QApplication::translate("Calculator", "Suggestion", 0, QApplication::UnicodeUTF8));
        noLinearAlgebraAction->setText(QApplication::translate("Calculator", "Polynomial for Roots Tool", 0, QApplication::UnicodeUTF8));
        noLinearAlgebraAction->setIconText(QApplication::translate("Calculator", "Polynomial for roots tool", 0, QApplication::UnicodeUTF8));
        System_Calculator_Action->setText(QApplication::translate("Calculator", "System Calculator", 0, QApplication::UnicodeUTF8));
        Geometers_Sketchpad_Action->setText(QApplication::translate("Calculator", "Geometers Sketchpad", 0, QApplication::UnicodeUTF8));
        actionChinese->setText(QApplication::translate("Calculator", "Chinese", 0, QApplication::UnicodeUTF8));
        actionEnglish->setText(QApplication::translate("Calculator", "English", 0, QApplication::UnicodeUTF8));
        topHintAction->setText(QApplication::translate("Calculator", "Window Topmost", 0, QApplication::UnicodeUTF8));
        actionDefault_Settings->setText(QApplication::translate("Calculator", "Default Settings", 0, QApplication::UnicodeUTF8));
        actionExpression_s_Font->setText(QApplication::translate("Calculator", "Expression's Font", 0, QApplication::UnicodeUTF8));
        variableAction->setText(QApplication::translate("Calculator", "Variable Manager", 0, QApplication::UnicodeUTF8));
        variableAction->setShortcut(QApplication::translate("Calculator", "Alt+V", 0, QApplication::UnicodeUTF8));
        constantAction->setText(QApplication::translate("Calculator", "Constant Manger", 0, QApplication::UnicodeUTF8));
        constantAction->setShortcut(QApplication::translate("Calculator", "Alt+C", 0, QApplication::UnicodeUTF8));
        actionWindows_Color->setText(QApplication::translate("Calculator", "Windows' Color", 0, QApplication::UnicodeUTF8));
        actionTextViews_Color->setText(QApplication::translate("Calculator", "TextViews' Color", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        express_lineEdit->setStatusTip(QApplication::translate("Calculator", "Input expression at here", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        fun_Lg_pushButton->setStatusTip(QApplication::translate("Calculator", "Log10(x) function", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        fun_Lg_pushButton->setText(QApplication::translate("Calculator", "lg", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        fun_Abs_pushButton->setStatusTip(QApplication::translate("Calculator", "abs(x) fanction", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        fun_Abs_pushButton->setText(QApplication::translate("Calculator", "|x|", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        fun_Ln_pushButton->setStatusTip(QApplication::translate("Calculator", "ln(x) function", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        fun_Ln_pushButton->setText(QApplication::translate("Calculator", "ln", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        fun_Log_pushButton->setStatusTip(QApplication::translate("Calculator", "Log(x,y) function", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        fun_Log_pushButton->setText(QApplication::translate("Calculator", "log(x,y)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        fun_Arcsin_pushButton->setStatusTip(QApplication::translate("Calculator", "Arcsin function", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        fun_Arcsin_pushButton->setText(QApplication::translate("Calculator", "arcsin", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        fun_Sin_pushButton->setStatusTip(QApplication::translate("Calculator", "Sin function", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        fun_Sin_pushButton->setText(QApplication::translate("Calculator", "sin", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        fun_Cos_pushButton->setStatusTip(QApplication::translate("Calculator", "Cos function", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        fun_Cos_pushButton->setText(QApplication::translate("Calculator", "cos", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        fun_Tan_pushButton->setStatusTip(QApplication::translate("Calculator", "Tan function", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        fun_Tan_pushButton->setText(QApplication::translate("Calculator", "tan", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        fun_Cot_pushButton->setStatusTip(QApplication::translate("Calculator", "Cot function", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        fun_Cot_pushButton->setText(QApplication::translate("Calculator", "cot", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        fun_Arccos_pushButton->setStatusTip(QApplication::translate("Calculator", "Arccos function", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        fun_Arccos_pushButton->setText(QApplication::translate("Calculator", "arccos", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        fun_Arctan_pushButton->setStatusTip(QApplication::translate("Calculator", "Arctan function", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        fun_Arctan_pushButton->setText(QApplication::translate("Calculator", "arctan", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        fun_Arccot_pushButton->setStatusTip(QApplication::translate("Calculator", "Arccot function", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        fun_Arccot_pushButton->setText(QApplication::translate("Calculator", "arccot", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        operCur_pushButton->setStatusTip(QApplication::translate("Calculator", "x^(1/3)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        operCur_pushButton->setText(QApplication::translate("Calculator", "x^(1/3)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        operXYsqrt_pushButton->setStatusTip(QApplication::translate("Calculator", "x^(1/y)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        operXYsqrt_pushButton->setText(QApplication::translate("Calculator", "x^(1/y)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        operSqr_pushButton->setStatusTip(QApplication::translate("Calculator", "x^2", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        operSqr_pushButton->setText(QApplication::translate("Calculator", "x^2", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        operCub_pushButton->setStatusTip(QApplication::translate("Calculator", "x^3", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        operCub_pushButton->setText(QApplication::translate("Calculator", "x^3", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        operExp10_pushButton->setStatusTip(QApplication::translate("Calculator", "10^x", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        operExp10_pushButton->setText(QApplication::translate("Calculator", "10^x", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        MS_pushButton->setStatusTip(QApplication::translate("Calculator", "Insert result into interim storage", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        MS_pushButton->setText(QApplication::translate("Calculator", "MS", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        ANS_pushButton->setStatusTip(QApplication::translate("Calculator", "Insert result into expression", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        ANS_pushButton->setText(QApplication::translate("Calculator", "ANS", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        constPi_pushButton->setStatusTip(QApplication::translate("Calculator", "the Pi Constant", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        constPi_pushButton->setText(QApplication::translate("Calculator", "$pi", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        constEuler_pushButton->setStatusTip(QApplication::translate("Calculator", "the Euler's Constant", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        constEuler_pushButton->setText(QApplication::translate("Calculator", "$e", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        fun_Pow_pushButton->setStatusTip(QApplication::translate("Calculator", "Pow(x,y) function", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        fun_Pow_pushButton->setText(QApplication::translate("Calculator", "pow(x,y)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        constGravity_pushButton->setStatusTip(QApplication::translate("Calculator", "the Gravity Constant", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        constGravity_pushButton->setText(QApplication::translate("Calculator", "$g", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        MR_pushButton->setStatusTip(QApplication::translate("Calculator", "Insert data that from  interim storage into expression", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        MR_pushButton->setText(QApplication::translate("Calculator", "MR", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        fun_Lcm_pushButton->setStatusTip(QApplication::translate("Calculator", "Least common multiple (LCM)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        fun_Lcm_pushButton->setText(QApplication::translate("Calculator", "lcm(x,y)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        fun_Gcd_pushButton->setStatusTip(QApplication::translate("Calculator", "Greatest common divisor (GCD)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        fun_Gcd_pushButton->setText(QApplication::translate("Calculator", "gcd(x,y)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        operSqrt_pushButton->setStatusTip(QApplication::translate("Calculator", "x^(1/2)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        operSqrt_pushButton->setText(QApplication::translate("Calculator", "x^(1/2)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        operComb_pushButton->setStatusTip(QApplication::translate("Calculator", "Combinatorial number", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        operComb_pushButton->setText(QApplication::translate("Calculator", "nad", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        operMod_pushButton->setStatusTip(QApplication::translate("Calculator", "Modulus(Remainder) operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        operMod_pushButton->setText(QApplication::translate("Calculator", "mod", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        operExpE_pushButton->setStatusTip(QApplication::translate("Calculator", "e^x", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        operExpE_pushButton->setText(QApplication::translate("Calculator", "e^x", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        numSeven_pushButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        numSeven_pushButton->setStatusTip(QApplication::translate("Calculator", "7", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        numSeven_pushButton->setText(QApplication::translate("Calculator", "7", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        numEight_pushButton->setStatusTip(QApplication::translate("Calculator", "8", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        numEight_pushButton->setText(QApplication::translate("Calculator", "8", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        numNine_pushButton->setStatusTip(QApplication::translate("Calculator", "9", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        numNine_pushButton->setText(QApplication::translate("Calculator", "9", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        numFour_pushButton->setStatusTip(QApplication::translate("Calculator", "4", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        numFour_pushButton->setText(QApplication::translate("Calculator", "4", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        numFive_pushButton->setStatusTip(QApplication::translate("Calculator", "5", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        numFive_pushButton->setText(QApplication::translate("Calculator", "5", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        numSix_pushButton->setStatusTip(QApplication::translate("Calculator", "6", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        numSix_pushButton->setText(QApplication::translate("Calculator", "6", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        numOne_pushButton->setStatusTip(QApplication::translate("Calculator", "1", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        numOne_pushButton->setText(QApplication::translate("Calculator", "1", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        numTwo_pushButton->setStatusTip(QApplication::translate("Calculator", "2", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        numTwo_pushButton->setText(QApplication::translate("Calculator", "2", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        numThree_pushButton->setStatusTip(QApplication::translate("Calculator", "3", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        numThree_pushButton->setText(QApplication::translate("Calculator", "3", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        numZero_pushButton->setStatusTip(QApplication::translate("Calculator", "0", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        numZero_pushButton->setText(QApplication::translate("Calculator", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        point_pushButton->setStatusTip(QApplication::translate("Calculator", "Decimal point", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        point_pushButton->setText(QApplication::translate("Calculator", " .", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        numE_pushButton->setStatusTip(QApplication::translate("Calculator", "Letter E in Hexadecimal number system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        numE_pushButton->setText(QApplication::translate("Calculator", "E", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        leftBack_pushButton->setStatusTip(QApplication::translate("Calculator", "Left bracket", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        leftBack_pushButton->setText(QApplication::translate("Calculator", "(", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        operPercent_pushButton->setStatusTip(QApplication::translate("Calculator", "Percent", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        operPercent_pushButton->setText(QApplication::translate("Calculator", "%", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        operMultiply_pushButton->setStatusTip(QApplication::translate("Calculator", "Multiply operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        operMultiply_pushButton->setText(QApplication::translate("Calculator", "*", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        operSubtract_pushButton->setStatusTip(QApplication::translate("Calculator", "Subtract operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        operSubtract_pushButton->setText(QApplication::translate("Calculator", "-", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        result_pushButton->setStatusTip(QApplication::translate("Calculator", "Get result", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        result_pushButton->setText(QApplication::translate("Calculator", "=", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        operAdd_pushButton->setStatusTip(QApplication::translate("Calculator", "plus operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        operAdd_pushButton->setText(QApplication::translate("Calculator", "+", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        operDivide_pushButton->setStatusTip(QApplication::translate("Calculator", "divide operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        operDivide_pushButton->setText(QApplication::translate("Calculator", "/", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        numA_pushButton->setStatusTip(QApplication::translate("Calculator", "Letter A in Hexadecimal number system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        numA_pushButton->setText(QApplication::translate("Calculator", "A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        numB_pushButton->setStatusTip(QApplication::translate("Calculator", "Letter B in Hexadecimal number system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        numB_pushButton->setText(QApplication::translate("Calculator", "B", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        numF_pushButton->setStatusTip(QApplication::translate("Calculator", "Letter F in Hexadecimal number system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        numF_pushButton->setText(QApplication::translate("Calculator", "F", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        numD_pushButton->setStatusTip(QApplication::translate("Calculator", "Letter D in Hexadecimal number system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        numD_pushButton->setText(QApplication::translate("Calculator", "D", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        numC_pushButton->setStatusTip(QApplication::translate("Calculator", "Letter C in Hexadecimal number system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        numC_pushButton->setText(QApplication::translate("Calculator", "C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        operFact_pushButton->setStatusTip(QApplication::translate("Calculator", "Factorial operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        operFact_pushButton->setText(QApplication::translate("Calculator", "!", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        operDiv_pushButton->setStatusTip(QApplication::translate("Calculator", "Exact division operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        operDiv_pushButton->setText(QApplication::translate("Calculator", "div", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        operPower_pushButton->setStatusTip(QApplication::translate("Calculator", "Power operator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        operPower_pushButton->setText(QApplication::translate("Calculator", "\342\210\247", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        NumI_pushButton->setStatusTip(QApplication::translate("Calculator", "Insert an imaginary unit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        NumI_pushButton->setText(QApplication::translate("Calculator", "i", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        numEi_pushButton->setStatusTip(QApplication::translate("Calculator", "Insert an imaginary unit by exponent", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        numEi_pushButton->setText(QApplication::translate("Calculator", "e^i", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        rightBack_pushButton->setStatusTip(QApplication::translate("Calculator", "Right bracket", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        rightBack_pushButton->setText(QApplication::translate("Calculator", ")", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        checkBox_1->setStatusTip(QApplication::translate("Calculator", "Use hyperbolic function", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        checkBox_1->setText(QApplication::translate("Calculator", "Hyperbolic", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        checkBox_2->setStatusTip(QApplication::translate("Calculator", "Display result by fraction", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        checkBox_2->setText(QApplication::translate("Calculator", " Fraction ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        spinBox->setStatusTip(QApplication::translate("Calculator", "precision (significant digit)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        label->setStatusTip(QApplication::translate("Calculator", "Display precision of the result", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        label->setText(QApplication::translate("Calculator", "Pre:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        groupBox->setStatusTip(QApplication::translate("Calculator", "Real or Complex", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        groupBox->setTitle(QApplication::translate("Calculator", "Real/Complex:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        Real_radioButton->setStatusTip(QApplication::translate("Calculator", "Real number", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        Real_radioButton->setText(QApplication::translate("Calculator", "Real", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        Complex_radioButton->setStatusTip(QApplication::translate("Calculator", "Complex number", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        Complex_radioButton->setText(QApplication::translate("Calculator", "Complex", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        groupBox_2->setStatusTip(QApplication::translate("Calculator", "Degree or Radian", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        groupBox_2->setTitle(QApplication::translate("Calculator", "Degree/Radian:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        Deg_radioButton->setStatusTip(QApplication::translate("Calculator", "Degree", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        Deg_radioButton->setText(QApplication::translate("Calculator", "Deg", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        Rad_radioButton->setStatusTip(QApplication::translate("Calculator", "Radian", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        Rad_radioButton->setText(QApplication::translate("Calculator", "Rad", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        groupBox_3->setStatusTip(QApplication::translate("Calculator", "Different number system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        groupBox_3->setTitle(QApplication::translate("Calculator", "System:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        Dec_radioButton->setStatusTip(QApplication::translate("Calculator", "Decimal number system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        Dec_radioButton->setText(QApplication::translate("Calculator", "Dec", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        Oct_radioButton->setStatusTip(QApplication::translate("Calculator", "Octonary number system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        Oct_radioButton->setText(QApplication::translate("Calculator", "Oct", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        Hex_radioButton->setStatusTip(QApplication::translate("Calculator", "Hexadecimal number system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        Hex_radioButton->setText(QApplication::translate("Calculator", "Hex", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        Bin_radioButton->setStatusTip(QApplication::translate("Calculator", "Binary number system", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        Bin_radioButton->setText(QApplication::translate("Calculator", "Bin", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        result_lineEdit->setStatusTip(QApplication::translate("Calculator", "Result", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_STATUSTIP
        memory_lineEdit->setStatusTip(QApplication::translate("Calculator", "Interim storage", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        memory_lineEdit->setText(QApplication::translate("Calculator", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        undo_pushButton->setStatusTip(QApplication::translate("Calculator", "Undo the last operation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        undo_pushButton->setText(QApplication::translate("Calculator", "Undo", 0, QApplication::UnicodeUTF8));
        undo_pushButton->setShortcut(QApplication::translate("Calculator", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        backspace_pushButton->setStatusTip(QApplication::translate("Calculator", "Backspace", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        backspace_pushButton->setText(QApplication::translate("Calculator", "Backspace", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        redo_pushButton->setStatusTip(QApplication::translate("Calculator", "Redo the last operation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        redo_pushButton->setText(QApplication::translate("Calculator", "Redo", 0, QApplication::UnicodeUTF8));
        redo_pushButton->setShortcut(QApplication::translate("Calculator", "Ctrl+Y", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        clear_pushButton->setStatusTip(QApplication::translate("Calculator", "Clear expression and result", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        clear_pushButton->setText(QApplication::translate("Calculator", "Clear", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        fold_pushButton->setStatusTip(QApplication::translate("Calculator", "Hide Key", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        fold_pushButton->setText(QString());
        fold_pushButton->setShortcut(QApplication::translate("Calculator", "Ctrl+H", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        statusbar->setStatusTip(QApplication::translate("Calculator", "F1:help", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        toolsMenu->setTitle(QApplication::translate("Calculator", "Tools", 0, QApplication::UnicodeUTF8));
        menuElse_Tools->setTitle(QApplication::translate("Calculator", "Else Tools", 0, QApplication::UnicodeUTF8));
        supervisorMenu->setTitle(QApplication::translate("Calculator", "Managers", 0, QApplication::UnicodeUTF8));
        helpMenu->setTitle(QApplication::translate("Calculator", "Help", 0, QApplication::UnicodeUTF8));
        menuSettings->setTitle(QApplication::translate("Calculator", "Settings", 0, QApplication::UnicodeUTF8));
        menuLanguage->setTitle(QApplication::translate("Calculator", "Language", 0, QApplication::UnicodeUTF8));
        menuBackground_Color->setTitle(QApplication::translate("Calculator", "Background Color", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
