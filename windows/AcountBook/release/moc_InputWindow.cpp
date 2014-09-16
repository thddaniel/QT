/****************************************************************************
** Meta object code from reading C++ file 'InputWindow.h'
**
** Created: Fri May 17 21:45:12 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../InputWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InputWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_InputWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      26,   12,   12,   12, 0x08,
      36,   12,   12,   12, 0x08,
      52,   12,   12,   12, 0x08,
      61,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_InputWindow[] = {
    "InputWindow\0\0updateCost()\0submmit()\0"
    "deleteRecords()\0modify()\0myClose()\0"
};

const QMetaObject InputWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InputWindow,
      qt_meta_data_InputWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &InputWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *InputWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *InputWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_InputWindow))
        return static_cast<void*>(const_cast< InputWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int InputWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateCost(); break;
        case 1: submmit(); break;
        case 2: deleteRecords(); break;
        case 3: modify(); break;
        case 4: myClose(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void InputWindow::updateCost()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
