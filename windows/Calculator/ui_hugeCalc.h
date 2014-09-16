/********************************************************************************
** Form generated from reading UI file 'hugeCalc.ui'
**
** Created: Fri May 17 21:53:17 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HUGECALC_H
#define UI_HUGECALC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HugeCalc
{
public:
    QGroupBox *input_groupBox;
    QPlainTextEdit *input_plainTextEdit;
    QComboBox *input_comboBox;
    QPushButton *input_pushButton;
    QPushButton *fileInput_pushButton;
    QPushButton *clear_pushButton;
    QGroupBox *output_groupBox;
    QPlainTextEdit *output_plainTextEdit;
    QCheckBox *sign_checkBox;
    QCheckBox *space_checkBox;
    QCheckBox *section_checkBox;
    QPushButton *output_pushButton;
    QComboBox *output_comboBox;
    QPushButton *fileOutput_pushButton;
    QCheckBox *digital_checkBox;
    QCheckBox *autoOutput_checkBox;
    QGroupBox *complex_groupBox;
    QRadioButton *fourOper_radioButton;
    QComboBox *fourOperFirst_comboBox;
    QLabel *label_1;
    QComboBox *fourOperFourth_comboBox;
    QComboBox *fourOperSecond_comboBox;
    QComboBox *fourOperThird_comboBox;
    QRadioButton *power_radioButton;
    QComboBox *powerFirst_comboBox;
    QComboBox *powerSecond_comboBox;
    QLabel *label_2;
    QSpinBox *power_spinBox;
    QCheckBox *time_checkBox;
    QLabel *time_label;
    QRadioButton *factorial_radioButton;
    QSpinBox *factorial_spinBox;
    QComboBox *factorialSecond_comboBox;
    QPushButton *complexCalculator_pushButton;
    QRadioButton *sqrt_radioButton;
    QComboBox *sqrtFirst_comboBox;
    QLabel *label_5;
    QComboBox *sqrtSecond_comboBox;
    QLabel *label_6;
    QComboBox *factorialFirst_comboBox;
    QLabel *label_4;
    QLabel *label_11;
    QGroupBox *simple_groupBox;
    QComboBox *shiftFirst_comboBox;
    QComboBox *elseThird_comboBox;
    QComboBox *elseSecond_comboBox;
    QComboBox *elseFirst_comboBox;
    QRadioButton *shift_radioButton;
    QComboBox *shiftSecond_comboBox;
    QRadioButton *else_radioButton;
    QRadioButton *system_radioButton;
    QComboBox *systemFirst_comboBox;
    QLabel *label_7;
    QSpinBox *symtem_spinBox;
    QPushButton *simpleCalculator_pushButton;
    QSpinBox *shift_spinBox;

    void setupUi(QWidget *HugeCalc)
    {
        if (HugeCalc->objectName().isEmpty())
            HugeCalc->setObjectName(QString::fromUtf8("HugeCalc"));
        HugeCalc->resize(675, 330);
        HugeCalc->setMinimumSize(QSize(675, 330));
        HugeCalc->setMaximumSize(QSize(675, 330));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/services.png"), QSize(), QIcon::Normal, QIcon::Off);
        HugeCalc->setWindowIcon(icon);
        input_groupBox = new QGroupBox(HugeCalc);
        input_groupBox->setObjectName(QString::fromUtf8("input_groupBox"));
        input_groupBox->setGeometry(QRect(10, 10, 420, 140));
        input_plainTextEdit = new QPlainTextEdit(input_groupBox);
        input_plainTextEdit->setObjectName(QString::fromUtf8("input_plainTextEdit"));
        input_plainTextEdit->setGeometry(QRect(10, 18, 331, 115));
        input_comboBox = new QComboBox(input_groupBox);
        input_comboBox->setObjectName(QString::fromUtf8("input_comboBox"));
        input_comboBox->setGeometry(QRect(345, 20, 71, 23));
        input_pushButton = new QPushButton(input_groupBox);
        input_pushButton->setObjectName(QString::fromUtf8("input_pushButton"));
        input_pushButton->setGeometry(QRect(345, 50, 71, 23));
        fileInput_pushButton = new QPushButton(input_groupBox);
        fileInput_pushButton->setObjectName(QString::fromUtf8("fileInput_pushButton"));
        fileInput_pushButton->setGeometry(QRect(345, 80, 71, 23));
        QFont font;
        font.setPointSize(9);
        fileInput_pushButton->setFont(font);
        clear_pushButton = new QPushButton(input_groupBox);
        clear_pushButton->setObjectName(QString::fromUtf8("clear_pushButton"));
        clear_pushButton->setGeometry(QRect(345, 110, 71, 23));
        output_groupBox = new QGroupBox(HugeCalc);
        output_groupBox->setObjectName(QString::fromUtf8("output_groupBox"));
        output_groupBox->setGeometry(QRect(10, 150, 420, 171));
        output_plainTextEdit = new QPlainTextEdit(output_groupBox);
        output_plainTextEdit->setObjectName(QString::fromUtf8("output_plainTextEdit"));
        output_plainTextEdit->setGeometry(QRect(10, 18, 301, 151));
        output_plainTextEdit->setReadOnly(true);
        sign_checkBox = new QCheckBox(output_groupBox);
        sign_checkBox->setObjectName(QString::fromUtf8("sign_checkBox"));
        sign_checkBox->setGeometry(QRect(320, 135, 91, 16));
        space_checkBox = new QCheckBox(output_groupBox);
        space_checkBox->setObjectName(QString::fromUtf8("space_checkBox"));
        space_checkBox->setGeometry(QRect(320, 100, 81, 16));
        section_checkBox = new QCheckBox(output_groupBox);
        section_checkBox->setObjectName(QString::fromUtf8("section_checkBox"));
        section_checkBox->setGeometry(QRect(320, 80, 71, 16));
        output_pushButton = new QPushButton(output_groupBox);
        output_pushButton->setObjectName(QString::fromUtf8("output_pushButton"));
        output_pushButton->setGeometry(QRect(364, 19, 51, 24));
        output_comboBox = new QComboBox(output_groupBox);
        output_comboBox->setObjectName(QString::fromUtf8("output_comboBox"));
        output_comboBox->setGeometry(QRect(320, 20, 41, 23));
        fileOutput_pushButton = new QPushButton(output_groupBox);
        fileOutput_pushButton->setObjectName(QString::fromUtf8("fileOutput_pushButton"));
        fileOutput_pushButton->setGeometry(QRect(320, 50, 91, 23));
        digital_checkBox = new QCheckBox(output_groupBox);
        digital_checkBox->setObjectName(QString::fromUtf8("digital_checkBox"));
        digital_checkBox->setGeometry(QRect(320, 116, 71, 20));
        autoOutput_checkBox = new QCheckBox(output_groupBox);
        autoOutput_checkBox->setObjectName(QString::fromUtf8("autoOutput_checkBox"));
        autoOutput_checkBox->setGeometry(QRect(320, 153, 91, 16));
        autoOutput_checkBox->setChecked(true);
        complex_groupBox = new QGroupBox(HugeCalc);
        complex_groupBox->setObjectName(QString::fromUtf8("complex_groupBox"));
        complex_groupBox->setGeometry(QRect(430, 10, 241, 168));
        fourOper_radioButton = new QRadioButton(complex_groupBox);
        fourOper_radioButton->setObjectName(QString::fromUtf8("fourOper_radioButton"));
        fourOper_radioButton->setGeometry(QRect(10, 30, 51, 16));
        fourOper_radioButton->setChecked(true);
        fourOperFirst_comboBox = new QComboBox(complex_groupBox);
        fourOperFirst_comboBox->setObjectName(QString::fromUtf8("fourOperFirst_comboBox"));
        fourOperFirst_comboBox->setGeometry(QRect(60, 30, 39, 21));
        label_1 = new QLabel(complex_groupBox);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(105, 30, 16, 20));
        QFont font1;
        font1.setPointSize(12);
        label_1->setFont(font1);
        fourOperFourth_comboBox = new QComboBox(complex_groupBox);
        fourOperFourth_comboBox->setObjectName(QString::fromUtf8("fourOperFourth_comboBox"));
        fourOperFourth_comboBox->setGeometry(QRect(194, 30, 39, 21));
        fourOperSecond_comboBox = new QComboBox(complex_groupBox);
        fourOperSecond_comboBox->setObjectName(QString::fromUtf8("fourOperSecond_comboBox"));
        fourOperSecond_comboBox->setGeometry(QRect(118, 30, 39, 21));
        fourOperThird_comboBox = new QComboBox(complex_groupBox);
        fourOperThird_comboBox->setObjectName(QString::fromUtf8("fourOperThird_comboBox"));
        fourOperThird_comboBox->setGeometry(QRect(160, 30, 31, 21));
        power_radioButton = new QRadioButton(complex_groupBox);
        power_radioButton->setObjectName(QString::fromUtf8("power_radioButton"));
        power_radioButton->setGeometry(QRect(10, 60, 51, 16));
        powerFirst_comboBox = new QComboBox(complex_groupBox);
        powerFirst_comboBox->setObjectName(QString::fromUtf8("powerFirst_comboBox"));
        powerFirst_comboBox->setGeometry(QRect(60, 60, 39, 21));
        powerSecond_comboBox = new QComboBox(complex_groupBox);
        powerSecond_comboBox->setObjectName(QString::fromUtf8("powerSecond_comboBox"));
        powerSecond_comboBox->setGeometry(QRect(120, 60, 39, 21));
        label_2 = new QLabel(complex_groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(105, 60, 16, 20));
        label_2->setFont(font1);
        power_spinBox = new QSpinBox(complex_groupBox);
        power_spinBox->setObjectName(QString::fromUtf8("power_spinBox"));
        power_spinBox->setGeometry(QRect(180, 60, 51, 21));
        power_spinBox->setMaximum(50000);
        time_checkBox = new QCheckBox(complex_groupBox);
        time_checkBox->setObjectName(QString::fromUtf8("time_checkBox"));
        time_checkBox->setGeometry(QRect(10, 140, 51, 16));
        time_checkBox->setChecked(true);
        time_label = new QLabel(complex_groupBox);
        time_label->setObjectName(QString::fromUtf8("time_label"));
        time_label->setGeometry(QRect(70, 140, 61, 16));
        factorial_radioButton = new QRadioButton(complex_groupBox);
        factorial_radioButton->setObjectName(QString::fromUtf8("factorial_radioButton"));
        factorial_radioButton->setGeometry(QRect(10, 90, 51, 16));
        factorial_spinBox = new QSpinBox(complex_groupBox);
        factorial_spinBox->setObjectName(QString::fromUtf8("factorial_spinBox"));
        factorial_spinBox->setGeometry(QRect(120, 90, 51, 21));
        factorial_spinBox->setMaximum(50000);
        factorialSecond_comboBox = new QComboBox(complex_groupBox);
        factorialSecond_comboBox->setObjectName(QString::fromUtf8("factorialSecond_comboBox"));
        factorialSecond_comboBox->setGeometry(QRect(180, 90, 39, 21));
        complexCalculator_pushButton = new QPushButton(complex_groupBox);
        complexCalculator_pushButton->setObjectName(QString::fromUtf8("complexCalculator_pushButton"));
        complexCalculator_pushButton->setGeometry(QRect(160, 140, 75, 23));
        sqrt_radioButton = new QRadioButton(complex_groupBox);
        sqrt_radioButton->setObjectName(QString::fromUtf8("sqrt_radioButton"));
        sqrt_radioButton->setGeometry(QRect(10, 115, 71, 16));
        sqrtFirst_comboBox = new QComboBox(complex_groupBox);
        sqrtFirst_comboBox->setObjectName(QString::fromUtf8("sqrtFirst_comboBox"));
        sqrtFirst_comboBox->setGeometry(QRect(80, 115, 39, 21));
        label_5 = new QLabel(complex_groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(125, 115, 16, 20));
        label_5->setFont(font1);
        sqrtSecond_comboBox = new QComboBox(complex_groupBox);
        sqrtSecond_comboBox->setObjectName(QString::fromUtf8("sqrtSecond_comboBox"));
        sqrtSecond_comboBox->setGeometry(QRect(140, 115, 39, 21));
        label_6 = new QLabel(complex_groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(185, 115, 51, 20));
        QFont font2;
        font2.setPointSize(10);
        label_6->setFont(font2);
        factorialFirst_comboBox = new QComboBox(complex_groupBox);
        factorialFirst_comboBox->setObjectName(QString::fromUtf8("factorialFirst_comboBox"));
        factorialFirst_comboBox->setGeometry(QRect(60, 90, 39, 21));
        label_4 = new QLabel(complex_groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(105, 90, 16, 20));
        label_4->setFont(font1);
        label_11 = new QLabel(complex_groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(165, 60, 16, 18));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setWeight(50);
        label_11->setFont(font3);
        simple_groupBox = new QGroupBox(HugeCalc);
        simple_groupBox->setObjectName(QString::fromUtf8("simple_groupBox"));
        simple_groupBox->setGeometry(QRect(430, 180, 241, 141));
        shiftFirst_comboBox = new QComboBox(simple_groupBox);
        shiftFirst_comboBox->setObjectName(QString::fromUtf8("shiftFirst_comboBox"));
        shiftFirst_comboBox->setGeometry(QRect(80, 20, 39, 21));
        elseThird_comboBox = new QComboBox(simple_groupBox);
        elseThird_comboBox->setObjectName(QString::fromUtf8("elseThird_comboBox"));
        elseThird_comboBox->setGeometry(QRect(180, 80, 39, 21));
        elseSecond_comboBox = new QComboBox(simple_groupBox);
        elseSecond_comboBox->setObjectName(QString::fromUtf8("elseSecond_comboBox"));
        elseSecond_comboBox->setGeometry(QRect(130, 80, 42, 21));
        elseFirst_comboBox = new QComboBox(simple_groupBox);
        elseFirst_comboBox->setObjectName(QString::fromUtf8("elseFirst_comboBox"));
        elseFirst_comboBox->setGeometry(QRect(80, 80, 39, 21));
        shift_radioButton = new QRadioButton(simple_groupBox);
        shift_radioButton->setObjectName(QString::fromUtf8("shift_radioButton"));
        shift_radioButton->setGeometry(QRect(10, 20, 61, 16));
        shift_radioButton->setChecked(true);
        shiftSecond_comboBox = new QComboBox(simple_groupBox);
        shiftSecond_comboBox->setObjectName(QString::fromUtf8("shiftSecond_comboBox"));
        shiftSecond_comboBox->setGeometry(QRect(130, 20, 42, 21));
        else_radioButton = new QRadioButton(simple_groupBox);
        else_radioButton->setObjectName(QString::fromUtf8("else_radioButton"));
        else_radioButton->setGeometry(QRect(10, 80, 51, 16));
        system_radioButton = new QRadioButton(simple_groupBox);
        system_radioButton->setObjectName(QString::fromUtf8("system_radioButton"));
        system_radioButton->setGeometry(QRect(10, 50, 71, 16));
        systemFirst_comboBox = new QComboBox(simple_groupBox);
        systemFirst_comboBox->setObjectName(QString::fromUtf8("systemFirst_comboBox"));
        systemFirst_comboBox->setGeometry(QRect(80, 50, 39, 21));
        label_7 = new QLabel(simple_groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(130, 50, 31, 20));
        label_7->setFont(font);
        symtem_spinBox = new QSpinBox(simple_groupBox);
        symtem_spinBox->setObjectName(QString::fromUtf8("symtem_spinBox"));
        symtem_spinBox->setGeometry(QRect(160, 50, 51, 21));
        symtem_spinBox->setMinimum(2);
        symtem_spinBox->setMaximum(10000);
        simpleCalculator_pushButton = new QPushButton(simple_groupBox);
        simpleCalculator_pushButton->setObjectName(QString::fromUtf8("simpleCalculator_pushButton"));
        simpleCalculator_pushButton->setGeometry(QRect(160, 110, 75, 23));
        shift_spinBox = new QSpinBox(simple_groupBox);
        shift_spinBox->setObjectName(QString::fromUtf8("shift_spinBox"));
        shift_spinBox->setGeometry(QRect(180, 20, 51, 21));
        shift_spinBox->setMaximum(1000);
        QWidget::setTabOrder(input_comboBox, input_pushButton);
        QWidget::setTabOrder(input_pushButton, fileInput_pushButton);
        QWidget::setTabOrder(fileInput_pushButton, output_comboBox);
        QWidget::setTabOrder(output_comboBox, output_pushButton);
        QWidget::setTabOrder(output_pushButton, fileOutput_pushButton);
        QWidget::setTabOrder(fileOutput_pushButton, section_checkBox);
        QWidget::setTabOrder(section_checkBox, space_checkBox);
        QWidget::setTabOrder(space_checkBox, digital_checkBox);
        QWidget::setTabOrder(digital_checkBox, sign_checkBox);
        QWidget::setTabOrder(sign_checkBox, fourOper_radioButton);
        QWidget::setTabOrder(fourOper_radioButton, fourOperFirst_comboBox);
        QWidget::setTabOrder(fourOperFirst_comboBox, fourOperSecond_comboBox);
        QWidget::setTabOrder(fourOperSecond_comboBox, fourOperThird_comboBox);
        QWidget::setTabOrder(fourOperThird_comboBox, fourOperFourth_comboBox);
        QWidget::setTabOrder(fourOperFourth_comboBox, power_radioButton);
        QWidget::setTabOrder(power_radioButton, powerFirst_comboBox);
        QWidget::setTabOrder(powerFirst_comboBox, powerSecond_comboBox);
        QWidget::setTabOrder(powerSecond_comboBox, power_spinBox);
        QWidget::setTabOrder(power_spinBox, factorial_radioButton);
        QWidget::setTabOrder(factorial_radioButton, factorialFirst_comboBox);
        QWidget::setTabOrder(factorialFirst_comboBox, factorial_spinBox);
        QWidget::setTabOrder(factorial_spinBox, factorialSecond_comboBox);
        QWidget::setTabOrder(factorialSecond_comboBox, sqrt_radioButton);
        QWidget::setTabOrder(sqrt_radioButton, sqrtFirst_comboBox);
        QWidget::setTabOrder(sqrtFirst_comboBox, sqrtSecond_comboBox);
        QWidget::setTabOrder(sqrtSecond_comboBox, time_checkBox);
        QWidget::setTabOrder(time_checkBox, complexCalculator_pushButton);
        QWidget::setTabOrder(complexCalculator_pushButton, shift_radioButton);
        QWidget::setTabOrder(shift_radioButton, shiftFirst_comboBox);
        QWidget::setTabOrder(shiftFirst_comboBox, shiftSecond_comboBox);
        QWidget::setTabOrder(shiftSecond_comboBox, shift_spinBox);
        QWidget::setTabOrder(shift_spinBox, system_radioButton);
        QWidget::setTabOrder(system_radioButton, systemFirst_comboBox);
        QWidget::setTabOrder(systemFirst_comboBox, symtem_spinBox);
        QWidget::setTabOrder(symtem_spinBox, else_radioButton);
        QWidget::setTabOrder(else_radioButton, elseFirst_comboBox);
        QWidget::setTabOrder(elseFirst_comboBox, elseSecond_comboBox);
        QWidget::setTabOrder(elseSecond_comboBox, elseThird_comboBox);
        QWidget::setTabOrder(elseThird_comboBox, simpleCalculator_pushButton);
        QWidget::setTabOrder(simpleCalculator_pushButton, input_plainTextEdit);
        QWidget::setTabOrder(input_plainTextEdit, output_plainTextEdit);

        retranslateUi(HugeCalc);
        QObject::connect(fourOperFirst_comboBox, SIGNAL(activated(int)), fourOper_radioButton, SLOT(click()));
        QObject::connect(fourOperSecond_comboBox, SIGNAL(activated(int)), fourOper_radioButton, SLOT(click()));
        QObject::connect(fourOperThird_comboBox, SIGNAL(activated(int)), fourOper_radioButton, SLOT(click()));
        QObject::connect(fourOperFourth_comboBox, SIGNAL(activated(int)), fourOper_radioButton, SLOT(click()));
        QObject::connect(powerFirst_comboBox, SIGNAL(activated(int)), power_radioButton, SLOT(click()));
        QObject::connect(powerSecond_comboBox, SIGNAL(activated(int)), power_radioButton, SLOT(click()));
        QObject::connect(power_spinBox, SIGNAL(valueChanged(int)), power_radioButton, SLOT(click()));
        QObject::connect(factorialFirst_comboBox, SIGNAL(activated(int)), factorial_radioButton, SLOT(click()));
        QObject::connect(factorialSecond_comboBox, SIGNAL(activated(int)), factorial_radioButton, SLOT(click()));
        QObject::connect(factorial_spinBox, SIGNAL(valueChanged(int)), factorial_radioButton, SLOT(click()));
        QObject::connect(sqrtFirst_comboBox, SIGNAL(activated(int)), sqrt_radioButton, SLOT(click()));
        QObject::connect(sqrtSecond_comboBox, SIGNAL(activated(int)), sqrt_radioButton, SLOT(click()));
        QObject::connect(input_comboBox, SIGNAL(currentIndexChanged(int)), input_plainTextEdit, SLOT(clear()));
        QObject::connect(output_comboBox, SIGNAL(currentIndexChanged(int)), output_plainTextEdit, SLOT(clear()));
        QObject::connect(shiftFirst_comboBox, SIGNAL(activated(int)), shift_radioButton, SLOT(click()));
        QObject::connect(shiftSecond_comboBox, SIGNAL(activated(int)), shift_radioButton, SLOT(click()));
        QObject::connect(shift_spinBox, SIGNAL(valueChanged(int)), shift_radioButton, SLOT(click()));
        QObject::connect(systemFirst_comboBox, SIGNAL(activated(int)), system_radioButton, SLOT(click()));
        QObject::connect(symtem_spinBox, SIGNAL(valueChanged(int)), system_radioButton, SLOT(click()));
        QObject::connect(elseFirst_comboBox, SIGNAL(activated(int)), else_radioButton, SLOT(click()));
        QObject::connect(elseSecond_comboBox, SIGNAL(activated(int)), else_radioButton, SLOT(click()));
        QObject::connect(elseThird_comboBox, SIGNAL(activated(int)), else_radioButton, SLOT(click()));
        QObject::connect(clear_pushButton, SIGNAL(clicked()), input_plainTextEdit, SLOT(clear()));
        QObject::connect(clear_pushButton, SIGNAL(clicked()), output_plainTextEdit, SLOT(clear()));

        QMetaObject::connectSlotsByName(HugeCalc);
    } // setupUi

    void retranslateUi(QWidget *HugeCalc)
    {
        HugeCalc->setWindowTitle(QApplication::translate("HugeCalc", "BigInteger Tool", 0, QApplication::UnicodeUTF8));
        input_groupBox->setTitle(QApplication::translate("HugeCalc", "Input", 0, QApplication::UnicodeUTF8));
        input_comboBox->clear();
        input_comboBox->insertItems(0, QStringList()
         << QApplication::translate("HugeCalc", " A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " C", 0, QApplication::UnicodeUTF8)
        );
        input_pushButton->setText(QApplication::translate("HugeCalc", "Input", 0, QApplication::UnicodeUTF8));
        fileInput_pushButton->setText(QApplication::translate("HugeCalc", "File Input", 0, QApplication::UnicodeUTF8));
        clear_pushButton->setText(QApplication::translate("HugeCalc", "Clear", 0, QApplication::UnicodeUTF8));
        output_groupBox->setTitle(QApplication::translate("HugeCalc", "Output", 0, QApplication::UnicodeUTF8));
        sign_checkBox->setText(QApplication::translate("HugeCalc", "Sign", 0, QApplication::UnicodeUTF8));
        space_checkBox->setText(QApplication::translate("HugeCalc", "Space", 0, QApplication::UnicodeUTF8));
        section_checkBox->setText(QApplication::translate("HugeCalc", "Section", 0, QApplication::UnicodeUTF8));
        output_pushButton->setText(QApplication::translate("HugeCalc", "Display", 0, QApplication::UnicodeUTF8));
        output_comboBox->clear();
        output_comboBox->insertItems(0, QStringList()
         << QApplication::translate("HugeCalc", " A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " C", 0, QApplication::UnicodeUTF8)
        );
        fileOutput_pushButton->setText(QApplication::translate("HugeCalc", "File Output", 0, QApplication::UnicodeUTF8));
        digital_checkBox->setText(QApplication::translate("HugeCalc", "Digit", 0, QApplication::UnicodeUTF8));
        autoOutput_checkBox->setText(QApplication::translate("HugeCalc", "Auto Answer", 0, QApplication::UnicodeUTF8));
        complex_groupBox->setTitle(QApplication::translate("HugeCalc", "High-Precision Calculate", 0, QApplication::UnicodeUTF8));
        fourOper_radioButton->setText(QApplication::translate("HugeCalc", "Four:", 0, QApplication::UnicodeUTF8));
        fourOperFirst_comboBox->clear();
        fourOperFirst_comboBox->insertItems(0, QStringList()
         << QApplication::translate("HugeCalc", " A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " C", 0, QApplication::UnicodeUTF8)
        );
        label_1->setText(QApplication::translate("HugeCalc", "=", 0, QApplication::UnicodeUTF8));
        fourOperFourth_comboBox->clear();
        fourOperFourth_comboBox->insertItems(0, QStringList()
         << QApplication::translate("HugeCalc", " A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " C", 0, QApplication::UnicodeUTF8)
        );
        fourOperSecond_comboBox->clear();
        fourOperSecond_comboBox->insertItems(0, QStringList()
         << QApplication::translate("HugeCalc", " A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " C", 0, QApplication::UnicodeUTF8)
        );
        fourOperThird_comboBox->clear();
        fourOperThird_comboBox->insertItems(0, QStringList()
         << QApplication::translate("HugeCalc", "+", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", "-", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", "*", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", "/", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", "%", 0, QApplication::UnicodeUTF8)
        );
        power_radioButton->setText(QApplication::translate("HugeCalc", "Pow:", 0, QApplication::UnicodeUTF8));
        powerFirst_comboBox->clear();
        powerFirst_comboBox->insertItems(0, QStringList()
         << QApplication::translate("HugeCalc", " A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " C", 0, QApplication::UnicodeUTF8)
        );
        powerSecond_comboBox->clear();
        powerSecond_comboBox->insertItems(0, QStringList()
         << QApplication::translate("HugeCalc", " A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " C", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("HugeCalc", "=", 0, QApplication::UnicodeUTF8));
        time_checkBox->setText(QApplication::translate("HugeCalc", "Time:", 0, QApplication::UnicodeUTF8));
        time_label->setText(QApplication::translate("HugeCalc", "0ms", 0, QApplication::UnicodeUTF8));
        factorial_radioButton->setText(QApplication::translate("HugeCalc", "Fac:", 0, QApplication::UnicodeUTF8));
        factorialSecond_comboBox->clear();
        factorialSecond_comboBox->insertItems(0, QStringList()
         << QApplication::translate("HugeCalc", " !", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " !!", 0, QApplication::UnicodeUTF8)
        );
        complexCalculator_pushButton->setText(QApplication::translate("HugeCalc", "Calculate", 0, QApplication::UnicodeUTF8));
        sqrt_radioButton->setText(QApplication::translate("HugeCalc", "Sqrt\357\274\232", 0, QApplication::UnicodeUTF8));
        sqrtFirst_comboBox->clear();
        sqrtFirst_comboBox->insertItems(0, QStringList()
         << QApplication::translate("HugeCalc", " A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " C", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("HugeCalc", "=", 0, QApplication::UnicodeUTF8));
        sqrtSecond_comboBox->clear();
        sqrtSecond_comboBox->insertItems(0, QStringList()
         << QApplication::translate("HugeCalc", " A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " C", 0, QApplication::UnicodeUTF8)
        );
        label_6->setText(QApplication::translate("HugeCalc", "'sqrt", 0, QApplication::UnicodeUTF8));
        factorialFirst_comboBox->clear();
        factorialFirst_comboBox->insertItems(0, QStringList()
         << QApplication::translate("HugeCalc", " A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " C", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("HugeCalc", "=", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("HugeCalc", "\342\210\247", 0, QApplication::UnicodeUTF8));
        simple_groupBox->setTitle(QApplication::translate("HugeCalc", "Simple Calculate", 0, QApplication::UnicodeUTF8));
        shiftFirst_comboBox->clear();
        shiftFirst_comboBox->insertItems(0, QStringList()
         << QApplication::translate("HugeCalc", " A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " C", 0, QApplication::UnicodeUTF8)
        );
        elseThird_comboBox->clear();
        elseThird_comboBox->insertItems(0, QStringList()
         << QApplication::translate("HugeCalc", " A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " C", 0, QApplication::UnicodeUTF8)
        );
        elseSecond_comboBox->clear();
        elseSecond_comboBox->insertItems(0, QStringList()
         << QApplication::translate("HugeCalc", "<+>", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", "vs", 0, QApplication::UnicodeUTF8)
        );
        elseFirst_comboBox->clear();
        elseFirst_comboBox->insertItems(0, QStringList()
         << QApplication::translate("HugeCalc", " A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " C", 0, QApplication::UnicodeUTF8)
        );
        shift_radioButton->setText(QApplication::translate("HugeCalc", "Shift:", 0, QApplication::UnicodeUTF8));
        shiftSecond_comboBox->clear();
        shiftSecond_comboBox->insertItems(0, QStringList()
         << QApplication::translate("HugeCalc", ">>=", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", "<<=", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", "shift", 0, QApplication::UnicodeUTF8)
        );
        else_radioButton->setText(QApplication::translate("HugeCalc", "Else:", 0, QApplication::UnicodeUTF8));
        system_radioButton->setText(QApplication::translate("HugeCalc", "System:", 0, QApplication::UnicodeUTF8));
        systemFirst_comboBox->clear();
        systemFirst_comboBox->insertItems(0, QStringList()
         << QApplication::translate("HugeCalc", " A", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " B", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("HugeCalc", " C", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("HugeCalc", "To:", 0, QApplication::UnicodeUTF8));
        simpleCalculator_pushButton->setText(QApplication::translate("HugeCalc", "Calculate", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HugeCalc: public Ui_HugeCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HUGECALC_H
