#include <webbind/CSSMathNegate.hpp>
#include <webbind/CSSNumericValue.hpp>

namespace webbind {

CSSMathNegate CSSMathNegate::take_ownership(Handle h) noexcept {
    return CSSMathNegate(h);
}

CSSMathNegate CSSMathNegate::clone() const noexcept { return *this; }

emlite::Val CSSMathNegate::instance() noexcept { return emlite::Val::global("CSSMathNegate"); }

CSSMathNegate::CSSMathNegate(Handle h) noexcept : CSSMathValue(emlite::Val::take_ownership(h)) {}

CSSMathNegate::CSSMathNegate(const emlite::Val &val) noexcept: CSSMathValue(val) {}

CSSMathNegate::CSSMathNegate(const jsbind::Any& arg) : CSSMathValue(emlite::Val::global("CSSMathNegate").new_(arg)) {}

CSSNumericValue CSSMathNegate::value() const {
    return CSSMathValue::get("value").as<CSSNumericValue>();
}


} // namespace webbind