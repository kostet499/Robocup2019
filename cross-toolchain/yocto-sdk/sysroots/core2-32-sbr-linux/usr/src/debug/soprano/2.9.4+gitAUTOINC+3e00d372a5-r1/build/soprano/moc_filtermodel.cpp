/****************************************************************************
** Meta object code from reading C++ file 'filtermodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../git/soprano/filtermodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filtermodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Soprano__FilterModel_t {
    QByteArrayData data[7];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Soprano__FilterModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Soprano__FilterModel_t qt_meta_stringdata_Soprano__FilterModel = {
    {
QT_MOC_LITERAL(0, 0, 20), // "Soprano::FilterModel"
QT_MOC_LITERAL(1, 21, 19), // "slotStatementsAdded"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 21), // "slotStatementsRemoved"
QT_MOC_LITERAL(4, 64, 18), // "slotStatementAdded"
QT_MOC_LITERAL(5, 83, 18), // "Soprano::Statement"
QT_MOC_LITERAL(6, 102, 20) // "slotStatementRemoved"

    },
    "Soprano::FilterModel\0slotStatementsAdded\0"
    "\0slotStatementsRemoved\0slotStatementAdded\0"
    "Soprano::Statement\0slotStatementRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Soprano__FilterModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 5,    2,

       0        // eod
};

void Soprano::FilterModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FilterModel *_t = static_cast<FilterModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotStatementsAdded(); break;
        case 1: _t->slotStatementsRemoved(); break;
        case 2: _t->slotStatementAdded((*reinterpret_cast< const Soprano::Statement(*)>(_a[1]))); break;
        case 3: _t->slotStatementRemoved((*reinterpret_cast< const Soprano::Statement(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Soprano::FilterModel::staticMetaObject = {
    { &Model::staticMetaObject, qt_meta_stringdata_Soprano__FilterModel.data,
      qt_meta_data_Soprano__FilterModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Soprano::FilterModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Soprano::FilterModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Soprano__FilterModel.stringdata0))
        return static_cast<void*>(const_cast< FilterModel*>(this));
    return Model::qt_metacast(_clname);
}

int Soprano::FilterModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Model::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
