/****************************************************************************
** Meta object code from reading C++ file 'model.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../git/soprano/model.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'model.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Soprano__Model_t {
    QByteArrayData data[8];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Soprano__Model_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Soprano__Model_t qt_meta_stringdata_Soprano__Model = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Soprano::Model"
QT_MOC_LITERAL(1, 15, 15), // "statementsAdded"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 17), // "statementsRemoved"
QT_MOC_LITERAL(4, 50, 14), // "statementAdded"
QT_MOC_LITERAL(5, 65, 18), // "Soprano::Statement"
QT_MOC_LITERAL(6, 84, 9), // "statement"
QT_MOC_LITERAL(7, 94, 16) // "statementRemoved"

    },
    "Soprano::Model\0statementsAdded\0\0"
    "statementsRemoved\0statementAdded\0"
    "Soprano::Statement\0statement\0"
    "statementRemoved"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Soprano__Model[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    1,   36,    2, 0x06 /* Public */,
       7,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void Soprano::Model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Model *_t = static_cast<Model *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statementsAdded(); break;
        case 1: _t->statementsRemoved(); break;
        case 2: _t->statementAdded((*reinterpret_cast< const Soprano::Statement(*)>(_a[1]))); break;
        case 3: _t->statementRemoved((*reinterpret_cast< const Soprano::Statement(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Model::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::statementsAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Model::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::statementsRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Model::*_t)(const Soprano::Statement & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::statementAdded)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Model::*_t)(const Soprano::Statement & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Model::statementRemoved)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject Soprano::Model::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Soprano__Model.data,
      qt_meta_data_Soprano__Model,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Soprano::Model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Soprano::Model::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Soprano__Model.stringdata0))
        return static_cast<void*>(const_cast< Model*>(this));
    if (!strcmp(_clname, "Error::ErrorCache"))
        return static_cast< Error::ErrorCache*>(const_cast< Model*>(this));
    return QObject::qt_metacast(_clname);
}

int Soprano::Model::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Soprano::Model::statementsAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Soprano::Model::statementsRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Soprano::Model::statementAdded(const Soprano::Statement & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Soprano::Model::statementRemoved(const Soprano::Statement & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
