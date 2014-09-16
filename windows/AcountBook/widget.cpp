#include "widget.h"
#include<QLabel>
#include<QLineEdit>
#include<QComboBox>
#include<QPlainTextEdit>
#include<QPushButton>
#include<QTableView>
#include<QSqlRelationalTableModel>
#include<QGroupBox>
#include<QFormLayout>
InputWindow::InputWindow(QWidget *parent) :
    QWidget(parent)
{
    set_window_layout();
}
void InputWindow::set_window_layout()
{

    familyMemberBox   = new QComboBox;
    moneyEdit         = new QLineEdit;
    desEdit           = new QPlainTextEdit;
    submitBtn         = new QPushButton(tr("�ύ"));
    QFormLayout *layout1 = new QFormLayout;
    layout1->addRow(tr("��ͥ��Ա��"),familyMemberBox);
    layout1->addRow(tr("������"),moneyEdit);
    layout1->addRow(tr("����˵����"),desEdit);

    layout1->addWidget(submitBtn);
    inputBox = new QGroupBox(tr("����"));
    inputBox->setLayout(layout1);

    view = new QTableView;

    QHBoxLayout *layout2 = new QHBoxLayout;
    layout2->addWidget(inputBox);
    layout2->addWidget(view);

}
