/****************************************************************************
** Meta object code from reading C++ file 'ChildWindow.h'
**
** Created: Tue Sep 16 23:15:58 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ChildWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChildWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_History[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      38,    8,    8,    8, 0x08,
      65,    8,    8,    8, 0x08,
      95,    8,    8,    8, 0x08,
     123,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_History[] = {
    "History\0\0on_clearPushButton_clicked()\0"
    "on_usePushButton_clicked()\0"
    "on_deletePushButton_clicked()\0"
    "on_copyPushButton_clicked()\0"
    "on_plainTextEdit_cursorPositionChanged()\0"
};

const QMetaObject History::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_History,
      qt_meta_data_History, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &History::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *History::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *History::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_History))
        return static_cast<void*>(const_cast< History*>(this));
    if (!strcmp(_clname, "Ui::history_Dialog"))
        return static_cast< Ui::history_Dialog*>(const_cast< History*>(this));
    return QDialog::qt_metacast(_clname);
}

int History::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_clearPushButton_clicked(); break;
        case 1: on_usePushButton_clicked(); break;
        case 2: on_deletePushButton_clicked(); break;
        case 3: on_copyPushButton_clicked(); break;
        case 4: on_plainTextEdit_cursorPositionChanged(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_About[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_About[] = {
    "About\0"
};

const QMetaObject About::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_About,
      qt_meta_data_About, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &About::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *About::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *About::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_About))
        return static_cast<void*>(const_cast< About*>(this));
    if (!strcmp(_clname, "Ui::aboutDialog"))
        return static_cast< Ui::aboutDialog*>(const_cast< About*>(this));
    return QDialog::qt_metacast(_clname);
}

int About::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Constant[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Constant[] = {
    "Constant\0"
};

const QMetaObject Constant::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Constant,
      qt_meta_data_Constant, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Constant::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Constant::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Constant::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Constant))
        return static_cast<void*>(const_cast< Constant*>(this));
    if (!strcmp(_clname, "Ui::constantDialog"))
        return static_cast< Ui::constantDialog*>(const_cast< Constant*>(this));
    return QDialog::qt_metacast(_clname);
}

int Constant::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_Variable[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      32,   27,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Variable[] = {
    "Variable\0\0clearVariables()\0item\0"
    "updateVariables(QTableWidgetItem*)\0"
};

const QMetaObject Variable::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Variable,
      qt_meta_data_Variable, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Variable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Variable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Variable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Variable))
        return static_cast<void*>(const_cast< Variable*>(this));
    if (!strcmp(_clname, "Ui::variableDialog"))
        return static_cast< Ui::variableDialog*>(const_cast< Variable*>(this));
    return QDialog::qt_metacast(_clname);
}

int Variable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: clearVariables(); break;
        case 1: updateVariables((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
