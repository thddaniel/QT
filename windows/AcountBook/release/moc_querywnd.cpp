/****************************************************************************
** Meta object code from reading C++ file 'querywnd.h'
**
** Created: Fri May 17 21:45:15 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../querywnd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'querywnd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QueryWnd[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
      23,    9,    9,    9, 0x08,
      41,    9,    9,    9, 0x08,
      57,    9,    9,    9, 0x08,
      65,    9,    9,    9, 0x08,
      78,    9,    9,    9, 0x08,
      90,    9,    9,    9, 0x08,
      99,    9,    9,    9, 0x08,
     115,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QueryWnd[] = {
    "QueryWnd\0\0updateCost()\0setFamilyMember()\0"
    "setDateEnable()\0query()\0statistics()\0"
    "showGraph()\0modify()\0deleteRecords()\0"
    "print()\0"
};

const QMetaObject QueryWnd::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QueryWnd,
      qt_meta_data_QueryWnd, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QueryWnd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QueryWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QueryWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QueryWnd))
        return static_cast<void*>(const_cast< QueryWnd*>(this));
    return QWidget::qt_metacast(_clname);
}

int QueryWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateCost(); break;
        case 1: setFamilyMember(); break;
        case 2: setDateEnable(); break;
        case 3: query(); break;
        case 4: statistics(); break;
        case 5: showGraph(); break;
        case 6: modify(); break;
        case 7: deleteRecords(); break;
        case 8: print(); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QueryWnd::updateCost()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
