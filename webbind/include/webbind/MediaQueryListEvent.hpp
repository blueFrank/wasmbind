#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class MediaQueryListEvent : public Event {
    explicit MediaQueryListEvent(Handle h) noexcept;

public:
    explicit MediaQueryListEvent(const emlite::Val &val) noexcept;
    static MediaQueryListEvent take_ownership(Handle h) noexcept;

    MediaQueryListEvent clone() const noexcept;
    MediaQueryListEvent(const jsbind::String& type);
    MediaQueryListEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    jsbind::String media() const;
    bool matches() const;
};

