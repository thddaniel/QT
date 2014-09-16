/****************************************************************************
** Meta object code from reading C++ file 'memberdlg.h'
**
** Created: Fri May 17 21:45:17 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../memberdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'memberdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MemberDlg[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      32,   10,   10,   10, 0x08,
      44,   10,   10,   10, 0x08,
      53,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MemberDlg[] = {
    "MemberDlg\0\0updateFamilyMember()\0"
    "addMember()\0midify()\0deleteRecords()\0"
};

const QMetaObject MemberDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MemberDlg,
      qt_meta_data_MemberDlg, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MemberDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MemberDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MemberDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MemberDlg))
        return static_cast<void*>(const_cast< MemberDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int MemberDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateFamilyMember(); break;
        case 1: addMember(); break;
        case 2: midify(); break;
        case 3: deleteRecords(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void MemberDlg::updateFamilyMember()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
