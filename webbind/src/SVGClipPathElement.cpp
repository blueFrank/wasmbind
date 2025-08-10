#include "webbind/SVGClipPathElement.hpp"
#include "webbind/SVGAnimatedEnumeration.hpp"
#include "webbind/SVGAnimatedTransformList.hpp"

namespace webbind {

SVGClipPathElement SVGClipPathElement::take_ownership(Handle h) noexcept {
        return SVGClipPathElement(h);
    }
SVGClipPathElement SVGClipPathElement::clone() const noexcept { return *this; }
emlite::Val SVGClipPathElement::instance() noexcept { return emlite::Val::global("SVGClipPathElement"); }
SVGClipPathElement::SVGClipPathElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGClipPathElement::SVGClipPathElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedEnumeration SVGClipPathElement::clipPathUnits() const {
    return SVGElement::get("clipPathUnits").as<SVGAnimatedEnumeration>();
}

SVGAnimatedTransformList SVGClipPathElement::transform() const {
    return SVGElement::get("transform").as<SVGAnimatedTransformList>();
}


} // namespace webbind