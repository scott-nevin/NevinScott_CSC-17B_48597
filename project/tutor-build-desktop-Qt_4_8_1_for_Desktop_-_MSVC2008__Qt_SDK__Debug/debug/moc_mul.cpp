/****************************************************************************
** Meta object code from reading C++ file 'mul.h'
**
** Created: Wed Dec 10 17:30:08 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tutor/mul.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mul.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MUL[] = {

 // content:
       6,       // revision
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

static const char qt_meta_stringdata_MUL[] = {
    "MUL\0\0checkAnswer()\0nextQ()\0"
};

void MUL::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MUL *_t = static_cast<MUL *>(_o);
        switch (_id) {
        case 0: _t->checkAnswer(); break;
        case 1: _t->nextQ(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MUL::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MUL::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MUL,
      qt_meta_data_MUL, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MUL::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MUL::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MUL::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MUL))
        return static_cast<void*>(const_cast< MUL*>(this));
    return QDialog::qt_metacast(_clname);
}

int MUL::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE