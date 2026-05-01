/****************************************************************************
** Meta object code from reading C++ file 'player.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../player.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN6PlayerE_t {};
} // unnamed namespace

template <> constexpr inline auto Player::qt_create_metaobjectdata<qt_meta_tag_ZN6PlayerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Player",
        "fullScreenChanged",
        "",
        "fullScreen",
        "open",
        "durationChanged",
        "duration",
        "positionChanged",
        "progress",
        "metaDataChanged",
        "tracksChanged",
        "previousClicked",
        "seek",
        "mseconds",
        "jump",
        "QModelIndex",
        "index",
        "playlistPositionChanged",
        "statusChanged",
        "QMediaPlayer::MediaStatus",
        "status",
        "bufferingProgress",
        "videoAvailableChanged",
        "available",
        "selectAudioStream",
        "selectVideoStream",
        "selectSubtitleStream",
        "displayErrorMessage",
        "audioOutputChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'fullScreenChanged'
        QtMocHelpers::SignalData<void(bool)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 3 },
        }}),
        // Slot 'open'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'durationChanged'
        QtMocHelpers::SlotData<void(qint64)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::LongLong, 6 },
        }}),
        // Slot 'positionChanged'
        QtMocHelpers::SlotData<void(qint64)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::LongLong, 8 },
        }}),
        // Slot 'metaDataChanged'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'tracksChanged'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'previousClicked'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'seek'
        QtMocHelpers::SlotData<void(int)>(12, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 13 },
        }}),
        // Slot 'jump'
        QtMocHelpers::SlotData<void(const QModelIndex &)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 15, 16 },
        }}),
        // Slot 'playlistPositionChanged'
        QtMocHelpers::SlotData<void(int)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Slot 'statusChanged'
        QtMocHelpers::SlotData<void(QMediaPlayer::MediaStatus)>(18, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 19, 20 },
        }}),
        // Slot 'bufferingProgress'
        QtMocHelpers::SlotData<void(float)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Float, 8 },
        }}),
        // Slot 'videoAvailableChanged'
        QtMocHelpers::SlotData<void(bool)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 23 },
        }}),
        // Slot 'selectAudioStream'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'selectVideoStream'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'selectSubtitleStream'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'displayErrorMessage'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'audioOutputChanged'
        QtMocHelpers::SlotData<void(int)>(28, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Player, qt_meta_tag_ZN6PlayerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Player::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6PlayerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6PlayerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN6PlayerE_t>.metaTypes,
    nullptr
} };

void Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Player *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->fullScreenChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->open(); break;
        case 2: _t->durationChanged((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 3: _t->positionChanged((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 4: _t->metaDataChanged(); break;
        case 5: _t->tracksChanged(); break;
        case 6: _t->previousClicked(); break;
        case 7: _t->seek((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->jump((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 9: _t->playlistPositionChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->statusChanged((*reinterpret_cast<std::add_pointer_t<QMediaPlayer::MediaStatus>>(_a[1]))); break;
        case 11: _t->bufferingProgress((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 12: _t->videoAvailableChanged((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->selectAudioStream(); break;
        case 14: _t->selectVideoStream(); break;
        case 15: _t->selectSubtitleStream(); break;
        case 16: _t->displayErrorMessage(); break;
        case 17: _t->audioOutputChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Player::*)(bool )>(_a, &Player::fullScreenChanged, 0))
            return;
    }
}

const QMetaObject *Player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Player::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN6PlayerE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Player::fullScreenChanged(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
