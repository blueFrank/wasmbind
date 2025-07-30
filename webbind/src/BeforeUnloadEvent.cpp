#include <webbind/BeforeUnloadEvent.hpp>


BeforeUnloadEvent BeforeUnloadEvent::take_ownership(Handle h) noexcept {
        return BeforeUnloadEvent(h);
    }
BeforeUnloadEvent BeforeUnloadEvent::clone() const noexcept { return *this; }
BeforeUnloadEvent::BeforeUnloadEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
BeforeUnloadEvent::BeforeUnloadEvent(const emlite::Val &val) noexcept: Event(val) {}


jsbind::String BeforeUnloadEvent::returnValue() const {
    return Event::get("returnValue").as<jsbind::String>();
}

void BeforeUnloadEvent::returnValue(const jsbind::String& value) {
    Event::set("returnValue", value);
}

