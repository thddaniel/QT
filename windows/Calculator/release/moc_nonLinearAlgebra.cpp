/****************************************************************************
** Meta object code from reading C++ file 'nonLinearAlgebra.h'
**
** Created: Fri May 17 21:54:14 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../nonLinearAlgebra.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nonLinearAlgebra.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_nonLinearAlgebra[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x08,
      46,   17,   17,   17, 0x08,
      74,   17,   17,   17, 0x08,
     102,   17,   17,   17, 0x08,
     130,   17,   17,   17, 0x08,
     158,   17,   17,   17, 0x08,
     186,   17,   17,   17, 0x08,
     214,   17,   17,   17, 0x08,
     242,   17,   17,   17, 0x08,
     270,   17,   17,   17, 0x08,
     298,   17,   17,   17, 0x08,
     327,   17,   17,   17, 0x08,
     352,   17,   17,   17, 0x08,
     387,   17,   17,   17, 0x08,
     423,   17,   17,   17, 0x08,
     455,   17,   17,   17, 0x08,
     482,   17,   17,   17, 0x08,
     514,   17,   17,   17, 0x08,
     546,   17,   17,   17, 0x08,
     575,   17,   17,   17, 0x08,
     608,   17,   17,   17, 0x08,
     649,   17,   17,   17, 0x08,
     680,   17,   17,   17, 0x08,
     709,   17,   17,   17, 0x08,
     738,   17,   17,   17, 0x08,
     768,   17,   17,   17, 0x08,
     792,  784,  779,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_nonLinearAlgebra[] = {
    "nonLinearAlgebra\0\0on_num0PushButton_clicked()\0"
    "on_num1PushButton_clicked()\0"
    "on_num2PushButton_clicked()\0"
    "on_num3PushButton_clicked()\0"
    "on_num4PushButton_clicked()\0"
    "on_num5PushButton_clicked()\0"
    "on_num6PushButton_clicked()\0"
    "on_num7PushButton_clicked()\0"
    "on_num8PushButton_clicked()\0"
    "on_num9PushButton_clicked()\0"
    "on_pointPushButton_clicked()\0"
    "on_iPushButton_clicked()\0"
    "on_leftbracketPushButton_clicked()\0"
    "on_rightbracketPushButton_clicked()\0"
    "on_variablePushButton_clicked()\0"
    "on_addPushButton_clicked()\0"
    "on_subtractPushButton_clicked()\0"
    "on_multiplyPushButton_clicked()\0"
    "on_powerPushButton_clicked()\0"
    "on_backspacePushButton_clicked()\0"
    "on_plainTextEdit_cursorPositionChanged()\0"
    "on_plainTextEdit_textChanged()\0"
    "on_clearPushButton_clicked()\0"
    "on_rootsPushButton_clicked()\0"
    "on_valuesPushButton_clicked()\0getValue()\0"
    "bool\0poly,ok\0getPoly(Polynomial&,bool)\0"
};

const QMetaObject nonLinearAlgebra::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_nonLinearAlgebra,
      qt_meta_data_nonLinearAlgebra, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &nonLinearAlgebra::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *nonLinearAlgebra::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *nonLinearAlgebra::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_nonLinearAlgebra))
        return static_cast<void*>(const_cast< nonLinearAlgebra*>(this));
    if (!strcmp(_clname, "Ui_nonLinearAlgebra"))
        return static_cast< Ui_nonLinearAlgebra*>(const_cast< nonLinearAlgebra*>(this));
    return QWidget::qt_metacast(_clname);
}

int nonLinearAlgebra::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_num0PushButton_clicked(); break;
        case 1: on_num1PushButton_clicked(); break;
        case 2: on_num2PushButton_clicked(); break;
        case 3: on_num3PushButton_clicked(); break;
        case 4: on_num4PushButton_clicked(); break;
        case 5: on_num5PushButton_clicked(); break;
        case 6: on_num6PushButton_clicked(); break;
        case 7: on_num7PushButton_clicked(); break;
        case 8: on_num8PushButton_clicked(); break;
        case 9: on_num9PushButton_clicked(); break;
        case 10: on_pointPushButton_clicked(); break;
        case 11: on_iPushButton_clicked(); break;
        case 12: on_leftbracketPushButton_clicked(); break;
        case 13: on_rightbracketPushButton_clicked(); break;
        case 14: on_variablePushButton_clicked(); break;
        case 15: on_addPushButton_clicked(); break;
        case 16: on_subtractPushButton_clicked(); break;
        case 17: on_multiplyPushButton_clicked(); break;
        case 18: on_powerPushButton_clicked(); break;
        case 19: on_backspacePushButton_clicked(); break;
        case 20: on_plainTextEdit_cursorPositionChanged(); break;
        case 21: on_plainTextEdit_textChanged(); break;
        case 22: on_clearPushButton_clicked(); break;
        case 23: on_rootsPushButton_clicked(); break;
        case 24: on_valuesPushButton_clicked(); break;
        case 25: getValue(); break;
        case 26: { bool _r = getPoly((*reinterpret_cast< Polynomial(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 27;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
