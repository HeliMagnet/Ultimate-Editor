/****************************************************************************
** Meta object code from reading C++ file 'qmediaplaylist.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../qmediaplaylist.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmediaplaylist.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14QMediaPlaylistE_t {};
} // unnamed namespace

template <> constexpr inline auto QMediaPlaylist::qt_create_metaobjectdata<qt_meta_tag_ZN14QMediaPlaylistE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QMediaPlaylist",
        "currentIndexChanged",
        "",
        "index",
        "playbackModeChanged",
        "QMediaPlaylist::PlaybackMode",
        "mode",
        "currentMediaChanged",
        "QUrl",
        "mediaAboutToBeInserted",
        "start",
        "end",
        "mediaInserted",
        "mediaAboutToBeRemoved",
        "mediaRemoved",
        "mediaChanged",
        "loaded",
        "loadFailed",
        "shuffle",
        "next",
        "previous",
        "setCurrentIndex",
        "playbackMode",
        "currentMedia",
        "currentIndex",
        "PlaybackMode",
        "CurrentItemOnce",
        "CurrentItemInLoop",
        "Sequential",
        "Loop",
        "Error",
        "NoError",
        "FormatError",
        "FormatNotSupportedError",
        "NetworkError",
        "AccessDeniedError"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'currentIndexChanged'
        QtMocHelpers::SignalData<void(int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
        // Signal 'playbackModeChanged'
        QtMocHelpers::SignalData<void(QMediaPlaylist::PlaybackMode)>(4, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 5, 6 },
        }}),
        // Signal 'currentMediaChanged'
        QtMocHelpers::SignalData<void(const QUrl &)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 8, 2 },
        }}),
        // Signal 'mediaAboutToBeInserted'
        QtMocHelpers::SignalData<void(int, int)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 }, { QMetaType::Int, 11 },
        }}),
        // Signal 'mediaInserted'
        QtMocHelpers::SignalData<void(int, int)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 }, { QMetaType::Int, 11 },
        }}),
        // Signal 'mediaAboutToBeRemoved'
        QtMocHelpers::SignalData<void(int, int)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 }, { QMetaType::Int, 11 },
        }}),
        // Signal 'mediaRemoved'
        QtMocHelpers::SignalData<void(int, int)>(14, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 }, { QMetaType::Int, 11 },
        }}),
        // Signal 'mediaChanged'
        QtMocHelpers::SignalData<void(int, int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 10 }, { QMetaType::Int, 11 },
        }}),
        // Signal 'loaded'
        QtMocHelpers::SignalData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'loadFailed'
        QtMocHelpers::SignalData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'shuffle'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'next'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'previous'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'setCurrentIndex'
        QtMocHelpers::SlotData<void(int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
        // property 'playbackMode'
        QtMocHelpers::PropertyData<QMediaPlaylist::PlaybackMode>(22, 0x80000000 | 5, QMC::DefaultPropertyFlags | QMC::Writable | QMC::EnumOrFlag | QMC::StdCppSet, 1),
        // property 'currentMedia'
        QtMocHelpers::PropertyData<QUrl>(23, 0x80000000 | 8, QMC::DefaultPropertyFlags | QMC::EnumOrFlag, 2),
        // property 'currentIndex'
        QtMocHelpers::PropertyData<int>(24, QMetaType::Int, QMC::DefaultPropertyFlags | QMC::Writable | QMC::StdCppSet, 0),
    };
    QtMocHelpers::UintData qt_enums {
        // enum 'PlaybackMode'
        QtMocHelpers::EnumData<enum PlaybackMode>(25, 25, QMC::EnumFlags{}).add({
            {   26, PlaybackMode::CurrentItemOnce },
            {   27, PlaybackMode::CurrentItemInLoop },
            {   28, PlaybackMode::Sequential },
            {   29, PlaybackMode::Loop },
        }),
        // enum 'Error'
        QtMocHelpers::EnumData<enum Error>(30, 30, QMC::EnumFlags{}).add({
            {   31, Error::NoError },
            {   32, Error::FormatError },
            {   33, Error::FormatNotSupportedError },
            {   34, Error::NetworkError },
            {   35, Error::AccessDeniedError },
        }),
    };
    return QtMocHelpers::metaObjectData<QMediaPlaylist, qt_meta_tag_ZN14QMediaPlaylistE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QMediaPlaylist::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14QMediaPlaylistE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14QMediaPlaylistE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14QMediaPlaylistE_t>.metaTypes,
    nullptr
} };

void QMediaPlaylist::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QMediaPlaylist *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentIndexChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->playbackModeChanged((*reinterpret_cast<std::add_pointer_t<QMediaPlaylist::PlaybackMode>>(_a[1]))); break;
        case 2: _t->currentMediaChanged((*reinterpret_cast<std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 3: _t->mediaAboutToBeInserted((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->mediaInserted((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->mediaAboutToBeRemoved((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 6: _t->mediaRemoved((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 7: _t->mediaChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->loaded(); break;
        case 9: _t->loadFailed(); break;
        case 10: _t->shuffle(); break;
        case 11: _t->next(); break;
        case 12: _t->previous(); break;
        case 13: _t->setCurrentIndex((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (QMediaPlaylist::*)(int )>(_a, &QMediaPlaylist::currentIndexChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (QMediaPlaylist::*)(QMediaPlaylist::PlaybackMode )>(_a, &QMediaPlaylist::playbackModeChanged, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (QMediaPlaylist::*)(const QUrl & )>(_a, &QMediaPlaylist::currentMediaChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (QMediaPlaylist::*)(int , int )>(_a, &QMediaPlaylist::mediaAboutToBeInserted, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (QMediaPlaylist::*)(int , int )>(_a, &QMediaPlaylist::mediaInserted, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (QMediaPlaylist::*)(int , int )>(_a, &QMediaPlaylist::mediaAboutToBeRemoved, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (QMediaPlaylist::*)(int , int )>(_a, &QMediaPlaylist::mediaRemoved, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (QMediaPlaylist::*)(int , int )>(_a, &QMediaPlaylist::mediaChanged, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (QMediaPlaylist::*)()>(_a, &QMediaPlaylist::loaded, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (QMediaPlaylist::*)()>(_a, &QMediaPlaylist::loadFailed, 9))
            return;
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<QMediaPlaylist::PlaybackMode*>(_v) = _t->playbackMode(); break;
        case 1: *reinterpret_cast<QUrl*>(_v) = _t->currentMedia(); break;
        case 2: *reinterpret_cast<int*>(_v) = _t->currentIndex(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPlaybackMode(*reinterpret_cast<QMediaPlaylist::PlaybackMode*>(_v)); break;
        case 2: _t->setCurrentIndex(*reinterpret_cast<int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *QMediaPlaylist::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMediaPlaylist::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14QMediaPlaylistE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMediaPlaylist::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QMediaPlaylist::currentIndexChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void QMediaPlaylist::playbackModeChanged(QMediaPlaylist::PlaybackMode _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void QMediaPlaylist::currentMediaChanged(const QUrl & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void QMediaPlaylist::mediaAboutToBeInserted(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 3, nullptr, _t1, _t2);
}

// SIGNAL 4
void QMediaPlaylist::mediaInserted(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 4, nullptr, _t1, _t2);
}

// SIGNAL 5
void QMediaPlaylist::mediaAboutToBeRemoved(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1, _t2);
}

// SIGNAL 6
void QMediaPlaylist::mediaRemoved(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1, _t2);
}

// SIGNAL 7
void QMediaPlaylist::mediaChanged(int _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1, _t2);
}

// SIGNAL 8
void QMediaPlaylist::loaded()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void QMediaPlaylist::loadFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
