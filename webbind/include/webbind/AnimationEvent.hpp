#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class AnimationEvent : public Event {
    explicit AnimationEvent(Handle h) noexcept;

public:
    explicit AnimationEvent(const emlite::Val &val) noexcept;
    static AnimationEvent take_ownership(Handle h) noexcept;

    AnimationEvent clone() const noexcept;
    AnimationEvent(const jsbind::String& type);
    AnimationEvent(const jsbind::String& type, const jsbind::Any& animationEventInitDict);
    jsbind::String animationName() const;
    double elapsedTime() const;
    jsbind::String pseudoElement() const;
};

