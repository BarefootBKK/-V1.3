/****************************************************************************
** Meta object code from reading C++ file 'Pve.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Pve.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Pve.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Pve_t {
    QByteArrayData data[11];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pve_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pve_t qt_meta_stringdata_Pve = {
    {
QT_MOC_LITERAL(0, 0, 3), // "Pve"
QT_MOC_LITERAL(1, 4, 7), // "back_to"
QT_MOC_LITERAL(2, 12, 0), // ""
QT_MOC_LITERAL(3, 13, 8), // "boardMsg"
QT_MOC_LITERAL(4, 22, 9), // "drawChess"
QT_MOC_LITERAL(5, 32, 4), // "undo"
QT_MOC_LITERAL(6, 37, 7), // "restart"
QT_MOC_LITERAL(7, 45, 10), // "backToMenu"
QT_MOC_LITERAL(8, 56, 4), // "save"
QT_MOC_LITERAL(9, 61, 13), // "sendChessInfo"
QT_MOC_LITERAL(10, 75, 13) // "readChessInfo"

    },
    "Pve\0back_to\0\0boardMsg\0drawChess\0undo\0"
    "restart\0backToMenu\0save\0sendChessInfo\0"
    "readChessInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pve[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   63,    2, 0x0a /* Public */,
       5,    0,   64,    2, 0x0a /* Public */,
       6,    0,   65,    2, 0x0a /* Public */,
       7,    0,   66,    2, 0x0a /* Public */,
       8,    0,   67,    2, 0x0a /* Public */,
       9,    0,   68,    2, 0x0a /* Public */,
      10,    1,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Pve::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Pve *_t = static_cast<Pve *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->back_to(); break;
        case 1: _t->boardMsg((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->drawChess(); break;
        case 3: _t->undo(); break;
        case 4: _t->restart(); break;
        case 5: _t->backToMenu(); break;
        case 6: _t->save(); break;
        case 7: _t->sendChessInfo(); break;
        case 8: _t->readChessInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Pve::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pve::back_to)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Pve::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pve::boardMsg)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject Pve::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Pve.data,
      qt_meta_data_Pve,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Pve::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pve::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Pve.stringdata0))
        return static_cast<void*>(const_cast< Pve*>(this));
    return QWidget::qt_metacast(_clname);
}

int Pve::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Pve::back_to()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Pve::boardMsg(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
