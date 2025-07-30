#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class RTCDTMFToneChangeEvent : public Event {
    explicit RTCDTMFToneChangeEvent(Handle h) noexcept;

public:
    explicit RTCDTMFToneChangeEvent(const emlite::Val &val) noexcept;
    static RTCDTMFToneChangeEvent take_ownership(Handle h) noexcept;

    RTCDTMFToneChangeEvent clone() const noexcept;
    RTCDTMFToneChangeEvent(const jsbind::String& type);
    RTCDTMFToneChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    jsbind::String tone() const;
};

