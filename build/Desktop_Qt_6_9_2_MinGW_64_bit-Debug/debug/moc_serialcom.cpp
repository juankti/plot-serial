/****************************************************************************
** Meta object code from reading C++ file 'serialcom.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../serialcom.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialcom.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN9serialcomE_t {};
} // unnamed namespace

template <> constexpr inline auto serialcom::qt_create_metaobjectdata<qt_meta_tag_ZN9serialcomE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "serialcom",
        "dataReceived",
        "",
        "data",
        "_error",
        "error",
        "handleReadReady",
        "handleError",
        "QSerialPort::SerialPortError"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'dataReceived'
        QtMocHelpers::SignalData<void(const QByteArray &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QByteArray, 3 },
        }}),
        // Signal '_error'
        QtMocHelpers::SignalData<void(const QString &)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 5 },
        }}),
        // Slot 'handleReadReady'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'handleError'
        QtMocHelpers::SlotData<void(QSerialPort::SerialPortError)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 8, 5 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<serialcom, qt_meta_tag_ZN9serialcomE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject serialcom::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9serialcomE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9serialcomE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9serialcomE_t>.metaTypes,
    nullptr
} };

void serialcom::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<serialcom *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->dataReceived((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->_error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->handleReadReady(); break;
        case 3: _t->handleError((*reinterpret_cast< std::add_pointer_t<QSerialPort::SerialPortError>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (serialcom::*)(const QByteArray & )>(_a, &serialcom::dataReceived, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (serialcom::*)(const QString & )>(_a, &serialcom::_error, 1))
            return;
    }
}

const QMetaObject *serialcom::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *serialcom::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9serialcomE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int serialcom::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void serialcom::dataReceived(const QByteArray & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void serialcom::_error(const QString & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
