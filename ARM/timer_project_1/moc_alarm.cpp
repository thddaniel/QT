/****************************************************************************
** Meta object code from reading C++ file 'alarm.h'
**
** Created: Sat Apr 5 08:27:43 2014
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "alarm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alarm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Alarm[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x05,

 // slots: signature, parameters, type, tag, flags
      23,    6,    6,    6, 0x08,
      37,    6,    6,    6, 0x08,
      48,    6,    6,    6, 0x08,
      55,    6,    6,    6, 0x08,
      62,    6,    6,    6, 0x08,
      73,    6,    6,    6, 0x08,
      92,    6,    6,    6, 0x08,
     115,    6,    6,    6, 0x08,
     139,    6,    6,    6, 0x08,
     163,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Alarm[] = {
    "Alarm\0\0isCurrentTime()\0clockChange()\0"
    "dialogUp()\0mini()\0down()\0comToCur()\0"
    "ButtonClock_show()\0on_ButtonLed_clicked()\0"
    "on_ButtonLed2_clicked()\0on_ButtonLed3_clicked()\0"
    "on_ButtonLed4_clicked()\0"
};

const QMetaObject Alarm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Alarm,
      qt_meta_data_Alarm, 0 }
};

const QMetaObject *Alarm::metaObject() const
{
    return &staticMetaObject;
}

void *Alarm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Alarm))
        return static_cast<void*>(const_cast< Alarm*>(this));
    return QDialog::qt_metacast(_clname);
}

int Alarm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: isCurrentTime(); break;
        case 1: clockChange(); break;
        case 2: dialogUp(); break;
        case 3: mini(); break;
        case 4: down(); break;
        case 5: comToCur(); break;
        case 6: ButtonClock_show(); break;
        case 7: on_ButtonLed_clicked(); break;
        case 8: on_ButtonLed2_clicked(); break;
        case 9: on_ButtonLed3_clicked(); break;
        case 10: on_ButtonLed4_clicked(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Alarm::isCurrentTime()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
