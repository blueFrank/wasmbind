#include <webbind/CSSStyleValue.hpp>


CSSStyleValue CSSStyleValue::take_ownership(Handle h) noexcept {
        return CSSStyleValue(h);
    }
CSSStyleValue CSSStyleValue::clone() const noexcept { return *this; }
CSSStyleValue::CSSStyleValue(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CSSStyleValue::CSSStyleValue(const emlite::Val &val) noexcept: emlite::Val(val) {}


CSSStyleValue CSSStyleValue::parse(const jsbind::String& property, const jsbind::String& cssText) {
    return emlite::Val::global("cssstylevalue").call("parse", property, cssText).as<CSSStyleValue>();
}

jsbind::TypedArray<CSSStyleValue> CSSStyleValue::parseAll(const jsbind::String& property, const jsbind::String& cssText) {
    return emlite::Val::global("cssstylevalue").call("parseAll", property, cssText).as<jsbind::TypedArray<CSSStyleValue>>();
}

