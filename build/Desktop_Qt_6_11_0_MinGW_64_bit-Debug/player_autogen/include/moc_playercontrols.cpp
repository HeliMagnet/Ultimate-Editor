/****************************************************************************
** Meta object code from reading C++ file 'playercontrols.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../playercontrols.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playercontrols.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN14PlayerControlsE_t {};
} // unnamed namespace

template <> constexpr inline auto PlayerControls::qt_create_metaobjectdata<qt_meta_tag_ZN14PlayerControlsE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "PlayerControls",
        "play",
        "",
        "pause",
        "stop",
        "next",
        "previous",
        "changeVolume",
        "volume",
        "changeMuting",
        "muting",
        "changeRate",
        "rate",
        "setState",
        "QMediaPlayer::PlaybackState",
        "state",
        "force",
        "setVolume",
        "setMuted",
        "muted",
        "setPlaybackRate",
        "playClicked",
        "pauseClicked",
        "muteClicked",
        "updateRate",
        "onVolumeSliderValueChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'play'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'pause'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'stop'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'next'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'previous'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'changeVolume'
        QtMocHelpers::SignalData<void(float)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 8 },
        }}),
        // Signal 'changeMuting'
        QtMocHelpers::SignalData<void(bool)>(9, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 10 },
        }}),
        // Signal 'changeRate'
        QtMocHelpers::SignalData<void(qreal)>(11, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QReal, 12 },
        }}),
        // Slot 'setState'
        QtMocHelpers::SlotData<void(QMediaPlayer::PlaybackState, bool)>(13, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 14, 15 }, { QMetaType::Bool, 16 },
        }}),
        // Slot 'setState'
        QtMocHelpers::SlotData<void(QMediaPlayer::PlaybackState)>(13, 2, QMC::AccessPublic | QMC::MethodCloned, QMetaType::Void, {{
            { 0x80000000 | 14, 15 },
        }}),
        // Slot 'setVolume'
        QtMocHelpers::SlotData<void(float)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 8 },
        }}),
        // Slot 'setMuted'
        QtMocHelpers::SlotData<void(bool)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 19 },
        }}),
        // Slot 'setPlaybackRate'
        QtMocHelpers::SlotData<void(float)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Float, 12 },
        }}),
        // Slot 'playClicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'pauseClicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'muteClicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'updateRate'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onVolumeSliderValueChanged'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<PlayerControls, qt_meta_tag_ZN14PlayerControlsE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject PlayerControls::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14PlayerControlsE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14PlayerControlsE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14PlayerControlsE_t>.metaTypes,
    nullptr
} };

void PlayerControls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<PlayerControls *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->play(); break;
        case 1: _t->pause(); break;
        case 2: _t->stop(); break;
        case 3: _t->next(); break;
        case 4: _t->previous(); break;
        case 5: _t->changeVolume((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 6: _t->changeMuting((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->changeRate((*reinterpret_cast<std::add_pointer_t<qreal>>(_a[1]))); break;
        case 8: _t->setState((*reinterpret_cast<std::add_pointer_t<QMediaPlayer::PlaybackState>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 9: _t->setState((*reinterpret_cast<std::add_pointer_t<QMediaPlayer::PlaybackState>>(_a[1]))); break;
        case 10: _t->setVolume((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 11: _t->setMuted((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 12: _t->setPlaybackRate((*reinterpret_cast<std::add_pointer_t<float>>(_a[1]))); break;
        case 13: _t->playClicked(); break;
        case 14: _t->pauseClicked(); break;
        case 15: _t->muteClicked(); break;
        case 16: _t->updateRate(); break;
        case 17: _t->onVolumeSliderValueChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (PlayerControls::*)()>(_a, &PlayerControls::play, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerControls::*)()>(_a, &PlayerControls::pause, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerControls::*)()>(_a, &PlayerControls::stop, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerControls::*)()>(_a, &PlayerControls::next, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerControls::*)()>(_a, &PlayerControls::previous, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerControls::*)(float )>(_a, &PlayerControls::changeVolume, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerControls::*)(bool )>(_a, &PlayerControls::changeMuting, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (PlayerControls::*)(qreal )>(_a, &PlayerControls::changeRate, 7))
            return;
    }
}

const QMetaObject *PlayerControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerControls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14PlayerControlsE_t>.strings))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PlayerControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void PlayerControls::play()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PlayerControls::pause()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PlayerControls::stop()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PlayerControls::next()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PlayerControls::previous()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PlayerControls::changeVolume(float _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 5, nullptr, _t1);
}

// SIGNAL 6
void PlayerControls::changeMuting(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void PlayerControls::changeRate(qreal _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 7, nullptr, _t1);
}
QT_WARNING_POP
