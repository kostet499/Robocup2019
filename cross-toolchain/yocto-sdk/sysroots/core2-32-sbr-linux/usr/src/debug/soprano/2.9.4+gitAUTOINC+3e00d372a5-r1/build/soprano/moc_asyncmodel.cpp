/****************************************************************************
** Meta object code from reading C++ file 'asyncmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../git/soprano/util/asyncmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'asyncmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Soprano__Util__AsyncModel_t {
    QByteArrayData data[3];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Soprano__Util__AsyncModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Soprano__Util__AsyncModel_t qt_meta_stringdata_Soprano__Util__AsyncModel = {
    {
QT_MOC_LITERAL(0, 0, 25), // "Soprano::Util::AsyncModel"
QT_MOC_LITERAL(1, 26, 21), // "_s_executeNextCommand"
QT_MOC_LITERAL(2, 48, 0) // ""

    },
    "Soprano::Util::AsyncModel\0"
    "_s_executeNextCommand\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Soprano__Util__AsyncModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Soprano::Util::AsyncModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AsyncModel *_t = static_cast<AsyncModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d->_s_executeNextCommand(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Soprano::Util::AsyncModel::staticMetaObject = {
    { &FilterModel::staticMetaObject, qt_meta_stringdata_Soprano__Util__AsyncModel.data,
      qt_meta_data_Soprano__Util__AsyncModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Soprano::Util::AsyncModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Soprano::Util::AsyncModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Soprano__Util__AsyncModel.stringdata0))
        return static_cast<void*>(const_cast< AsyncModel*>(this));
    return FilterModel::qt_metacast(_clname);
}

int Soprano::Util::AsyncModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FilterModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
