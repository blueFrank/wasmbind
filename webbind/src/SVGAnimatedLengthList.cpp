#include <webbind/SVGAnimatedLengthList.hpp>
#include <webbind/SVGLengthList.hpp>

namespace webbind {

SVGAnimatedLengthList SVGAnimatedLengthList::take_ownership(Handle h) noexcept {
    return SVGAnimatedLengthList(h);
}

SVGAnimatedLengthList SVGAnimatedLengthList::clone() const noexcept { return *this; }

emlite::Val SVGAnimatedLengthList::instance() noexcept { return emlite::Val::global("SVGAnimatedLengthList"); }

SVGAnimatedLengthList::SVGAnimatedLengthList(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

SVGAnimatedLengthList::SVGAnimatedLengthList(const emlite::Val &val) noexcept: emlite::Val(val) {}

SVGLengthList SVGAnimatedLengthList::baseVal() const {
    return emlite::Val::get("baseVal").as<SVGLengthList>();
}

SVGLengthList SVGAnimatedLengthList::animVal() const {
    return emlite::Val::get("animVal").as<SVGLengthList>();
}


} // namespace webbind