#include <webbind/TextFormatUpdateEvent.hpp>
#include <webbind/TextFormat.hpp>


TextFormatUpdateEvent TextFormatUpdateEvent::take_ownership(Handle h) noexcept {
        return TextFormatUpdateEvent(h);
    }
TextFormatUpdateEvent TextFormatUpdateEvent::clone() const noexcept { return *this; }
TextFormatUpdateEvent::TextFormatUpdateEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
TextFormatUpdateEvent::TextFormatUpdateEvent(const emlite::Val &val) noexcept: Event(val) {}


TextFormatUpdateEvent::TextFormatUpdateEvent(const jsbind::String& type) : Event(emlite::Val::global("TextFormatUpdateEvent").new_(type)) {}

TextFormatUpdateEvent::TextFormatUpdateEvent(const jsbind::String& type, const jsbind::Any& options) : Event(emlite::Val::global("TextFormatUpdateEvent").new_(type, options)) {}

jsbind::TypedArray<TextFormat> TextFormatUpdateEvent::getTextFormats() {
    return Event::call("getTextFormats").as<jsbind::TypedArray<TextFormat>>();
}

