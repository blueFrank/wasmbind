#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class EventTarget;


class Event : public emlite::Val {
    explicit Event(Handle h) noexcept;

public:
    explicit Event(const emlite::Val &val) noexcept;
    static Event take_ownership(Handle h) noexcept;

    Event clone() const noexcept;
    Event(const jsbind::String& type);
    Event(const jsbind::String& type, const jsbind::Any& eventInitDict);
    jsbind::String type() const;
    EventTarget target() const;
    EventTarget srcElement() const;
    EventTarget currentTarget() const;
    jsbind::TypedArray<EventTarget> composedPath();
    unsigned short eventPhase() const;
    jsbind::Undefined stopPropagation();
    bool cancelBubble() const;
    void cancelBubble(bool value);
    jsbind::Undefined stopImmediatePropagation();
    bool bubbles() const;
    bool cancelable() const;
    bool returnValue() const;
    void returnValue(bool value);
    jsbind::Undefined preventDefault();
    bool defaultPrevented() const;
    bool composed() const;
    bool isTrusted() const;
    jsbind::Any timeStamp() const;
    jsbind::Undefined initEvent(const jsbind::String& type);
    jsbind::Undefined initEvent(const jsbind::String& type, bool bubbles);
    jsbind::Undefined initEvent(const jsbind::String& type, bool bubbles, bool cancelable);
};

