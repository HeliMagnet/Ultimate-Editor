/****************************************************************************
** Meta object code from reading C++ file 'qplaylistfileparser.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qplaylistfileparser.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplaylistfileparser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.0. It"
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
struct qt_meta_tag_ZN19QPlaylistFileParserE_t {};
} // unnamed namespace

template <> constexpr inline auto QPlaylistFileParser::qt_create_metaobjectdata<qt_meta_tag_ZN19QPlaylistFileParserE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QPlaylistFileParser",
        "newItem",
        "",
        "QVariant",
        "content",
        "finished",
        "error",
        "QMediaPlaylist::Error",
        "err",
        "errorMsg",
        "handleData",
        "handleError"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'newItem'
        QtMocHelpers::SignalData<void(const QVariant &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'finished'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'error'
        QtMocHelpers::SignalData<void(QMediaPlaylist::Error, const QString &)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 7, 8 }, { QMetaType::QString, 9 },
        }}),
        // Slot 'handleData'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'handleError'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QPlaylistFileParser, qt_meta_tag_ZN19QPlaylistFileParserE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QPlaylistFileParser::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QPlaylistFileParserE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QPlaylistFileParserE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN19QPlaylistFileParserE_t>.metaTypes,
    nullptr
} };

void QPlaylistFileParser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QPlaylistFileParser *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->newItem((*reinterpret_cast<std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->error((*reinterpret_cast<std::add_pointer_t<QMediaPlaylist::Error>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->handleData(); break;
        case 4: _t->handleError(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QPlaylistFileParser::*)(const QVariant & )>(_a, &QPlaylistFileParser::newItem, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QPlaylistFileParser::*)()>(_a, &QPlaylistFileParser::finished, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QPlaylistFileParser::*)(QMediaPlaylist::Error , const QString & )>(_a, &QPlaylistFileParser::error, 2))
            return;
    }
}

const QMetaObject *QPlaylistFileParser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlaylistFileParser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN19QPlaylistFileParserE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QPlaylistFileParser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QPlaylistFileParser::newItem(const QVariant & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QPlaylistFileParser::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void QPlaylistFileParser::error(QMediaPlaylist::Error _t1, const QString & _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1, _t2);
}
QT_WARNING_POP
