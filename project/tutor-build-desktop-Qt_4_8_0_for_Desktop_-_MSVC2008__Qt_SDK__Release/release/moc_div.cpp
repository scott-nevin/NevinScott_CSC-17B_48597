/****************************************************************************
** Meta object code from reading C++ file 'div.h'
**
** Created: Wed Dec 10 19:15:43 2014
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tutor/div.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'div.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DIV[] = {

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
       5,    4,    4,    4, 0x0a,
      19,    4,    4,    4, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_DIV[] = {
    "DIV\0\0checkAnswer()\0nextQ()\0"
};

const QMetaObject DIV::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DIV,
      qt_meta_data_DIV, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DIV::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DIV::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DIV::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DIV))
        return static_cast<void*>(const_cast< DIV*>(this));
    return QDialog::qt_metacast(_clname);
}

int DIV::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: checkAnswer(); break;
        case 1: nextQ(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE