#include "webbind/CSSSkewY.hpp"
#include "webbind/CSSNumericValue.hpp"

namespace webbind {

CSSSkewY CSSSkewY::take_ownership(Handle h) noexcept {
        return CSSSkewY(h);
    }
CSSSkewY CSSSkewY::clone() const noexcept { return *this; }
emlite::Val CSSSkewY::instance() noexcept { return emlite::Val::global("CSSSkewY"); }
CSSSkewY::CSSSkewY(Handle h) noexcept : CSSTransformComponent(emlite::Val::take_ownership(h)) {}
CSSSkewY::CSSSkewY(const emlite::Val &val) noexcept: CSSTransformComponent(val) {}

CSSSkewY::CSSSkewY(const CSSNumericValue& ay) : CSSTransformComponent(emlite::Val::global("CSSSkewY").new_(ay)) {}

CSSNumericValue CSSSkewY::ay() const {
    return CSSTransformComponent::get("ay").as<CSSNumericValue>();
}

void CSSSkewY::ay(const CSSNumericValue& value) {
    CSSTransformComponent::set("ay", value);
}


} // namespace webbind