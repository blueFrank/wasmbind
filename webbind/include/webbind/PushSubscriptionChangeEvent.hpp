#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "ExtendableEvent.hpp"
#include "enums.hpp"

class PushSubscription;


class PushSubscriptionChangeEvent : public ExtendableEvent {
    explicit PushSubscriptionChangeEvent(Handle h) noexcept;

public:
    explicit PushSubscriptionChangeEvent(const emlite::Val &val) noexcept;
    static PushSubscriptionChangeEvent take_ownership(Handle h) noexcept;

    PushSubscriptionChangeEvent clone() const noexcept;
    PushSubscriptionChangeEvent(const jsbind::String& type);
    PushSubscriptionChangeEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    PushSubscription newSubscription() const;
    PushSubscription oldSubscription() const;
};

