/****************************************************************************
** Meta object code from reading C++ file 'HugeCalc.h'
**
** Created: Fri May 17 21:54:09 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../HugeCalc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HugeCalc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HugeCalc[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      40,    9,    9,    9, 0x08,
      74,    9,    9,    9, 0x08,
     105,    9,    9,    9, 0x08,
     140,    9,    9,    9, 0x08,
     182,    9,    9,    9, 0x08,
     223,    9,    9,    9, 0x08,
     251,    9,    9,    9, 0x08,
     281,    9,    9,    9, 0x08,
     311,    9,    9,    9, 0x08,
     338,    9,    9,    9, 0x08,
     381,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HugeCalc[] = {
    "HugeCalc\0\0on_input_pushButton_clicked()\0"
    "on_fileInput_pushButton_clicked()\0"
    "on_output_pushButton_clicked()\0"
    "on_fileOutput_pushButton_clicked()\0"
    "on_complexCalculator_pushButton_clicked()\0"
    "on_simpleCalculator_pushButton_clicked()\0"
    "on_space_checkBox_toggled()\0"
    "on_section_checkBox_toggled()\0"
    "on_digital_checkBox_toggled()\0"
    "on_sign_checkBox_toggled()\0"
    "on_input_comboBox_currentIndexChanged(int)\0"
    "on_output_comboBox_currentIndexChanged(int)\0"
};

const QMetaObject HugeCalc::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HugeCalc,
      qt_meta_data_HugeCalc, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HugeCalc::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HugeCalc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HugeCalc::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HugeCalc))
        return static_cast<void*>(const_cast< HugeCalc*>(this));
    if (!strcmp(_clname, "Ui_HugeCalc"))
        return static_cast< Ui_HugeCalc*>(const_cast< HugeCalc*>(this));
    return QWidget::qt_metacast(_clname);
}

int HugeCalc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_input_pushButton_clicked(); break;
        case 1: on_fileInput_pushButton_clicked(); break;
        case 2: on_output_pushButton_clicked(); break;
        case 3: on_fileOutput_pushButton_clicked(); break;
        case 4: on_complexCalculator_pushButton_clicked(); break;
        case 5: on_simpleCalculator_pushButton_clicked(); break;
        case 6: on_space_checkBox_toggled(); break;
        case 7: on_section_checkBox_toggled(); break;
        case 8: on_digital_checkBox_toggled(); break;
        case 9: on_sign_checkBox_toggled(); break;
        case 10: on_input_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: on_output_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
