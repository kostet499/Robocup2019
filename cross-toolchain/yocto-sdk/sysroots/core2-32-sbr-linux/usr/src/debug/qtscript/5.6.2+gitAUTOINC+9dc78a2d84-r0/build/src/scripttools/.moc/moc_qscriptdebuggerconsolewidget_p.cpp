/****************************************************************************
** Meta object code from reading C++ file 'qscriptdebuggerconsolewidget_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../git/src/scripttools/debugging/qscriptdebuggerconsolewidget_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscriptdebuggerconsolewidget_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QScriptDebuggerConsoleWidget_t {
    QByteArrayData data[5];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScriptDebuggerConsoleWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScriptDebuggerConsoleWidget_t qt_meta_stringdata_QScriptDebuggerConsoleWidget = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QScriptDebuggerConsoleWidget"
QT_MOC_LITERAL(1, 29, 16), // "_q_onLineEntered"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 15), // "_q_onLineEdited"
QT_MOC_LITERAL(4, 63, 27) // "_q_onCompletionTaskFinished"

    },
    "QScriptDebuggerConsoleWidget\0"
    "_q_onLineEntered\0\0_q_onLineEdited\0"
    "_q_onCompletionTaskFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScriptDebuggerConsoleWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       3,    1,   32,    2, 0x08 /* Private */,
       4,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

       0        // eod
};

void QScriptDebuggerConsoleWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScriptDebuggerConsoleWidget *_t = static_cast<QScriptDebuggerConsoleWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d_func()->_q_onLineEntered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->d_func()->_q_onLineEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_onCompletionTaskFinished(); break;
        default: ;
        }
    }
}

const QMetaObject QScriptDebuggerConsoleWidget::staticMetaObject = {
    { &QScriptDebuggerConsoleWidgetInterface::staticMetaObject, qt_meta_stringdata_QScriptDebuggerConsoleWidget.data,
      qt_meta_data_QScriptDebuggerConsoleWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QScriptDebuggerConsoleWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScriptDebuggerConsoleWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QScriptDebuggerConsoleWidget.stringdata0))
        return static_cast<void*>(const_cast< QScriptDebuggerConsoleWidget*>(this));
    return QScriptDebuggerConsoleWidgetInterface::qt_metacast(_clname);
}

int QScriptDebuggerConsoleWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScriptDebuggerConsoleWidgetInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE