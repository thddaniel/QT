/****************************************************************************
** Meta object code from reading C++ file 'mylabel.h'
**
** Created: Fri May 17 21:45:20 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mylabel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mylabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyLabel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_MyLabel[] = {
    "MyLabel\0\0CloseSignal()\0"
};

const QMetaObject MyLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_MyLabel,
      qt_meta_data_MyLabel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyLabel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyLabel))
        return static_cast<void*>(const_cast< MyLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int MyLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: CloseSignal(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void MyLabel::CloseSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
