/****************************************************************************
** Meta object code from reading C++ file 'fixedwnd.h'
**
** Created: Fri May 17 21:45:19 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../fixedwnd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fixedwnd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FixedWnd[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      25,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      38,    9,    9,    9, 0x08,
      50,    9,    9,    9, 0x08,
      59,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_FixedWnd[] = {
    "FixedWnd\0\0updateMember()\0updateCost()\0"
    "addMember()\0midify()\0deleteRecords()\0"
};

const QMetaObject FixedWnd::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FixedWnd,
      qt_meta_data_FixedWnd, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FixedWnd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FixedWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FixedWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FixedWnd))
        return static_cast<void*>(const_cast< FixedWnd*>(this));
    return QDialog::qt_metacast(_clname);
}

int FixedWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateMember(); break;
        case 1: updateCost(); break;
        case 2: addMember(); break;
        case 3: midify(); break;
        case 4: deleteRecords(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void FixedWnd::updateMember()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void FixedWnd::updateCost()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
