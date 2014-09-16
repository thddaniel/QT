/****************************************************************************
** Meta object code from reading C++ file 'detailset.h'
**
** Created: Tue Sep 16 22:33:53 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "detailset.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'detailset.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_detailset[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      24,   10,   10,   10, 0x05,
      37,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   10,   10,   10, 0x0a,
      67,   10,   10,   10, 0x0a,
      84,   10,   10,   10, 0x0a,
     101,   10,   10,   10, 0x0a,
     110,   10,   10,   10, 0x0a,
     122,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_detailset[] = {
    "detailset\0\0showtop(int)\0showcpu(int)\0"
    "showmem(int)\0slotshowtop(int)\0"
    "slotshowcpu(int)\0slotshowmem(int)\0"
    "slotOK()\0slotAbout()\0slotQuit()\0"
};

const QMetaObject detailset::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_detailset,
      qt_meta_data_detailset, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &detailset::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *detailset::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *detailset::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_detailset))
        return static_cast<void*>(const_cast< detailset*>(this));
    return QWidget::qt_metacast(_clname);
}

int detailset::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showtop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: showcpu((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: showmem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: slotshowtop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: slotshowcpu((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: slotshowmem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: slotOK(); break;
        case 7: slotAbout(); break;
        case 8: slotQuit(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void detailset::showtop(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void detailset::showcpu(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void detailset::showmem(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
