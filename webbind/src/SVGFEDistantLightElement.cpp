#include <webbind/SVGFEDistantLightElement.hpp>
#include <webbind/SVGAnimatedNumber.hpp>

namespace webbind {

SVGFEDistantLightElement SVGFEDistantLightElement::take_ownership(Handle h) noexcept {
    return SVGFEDistantLightElement(h);
}

SVGFEDistantLightElement SVGFEDistantLightElement::clone() const noexcept { return *this; }

emlite::Val SVGFEDistantLightElement::instance() noexcept { return emlite::Val::global("SVGFEDistantLightElement"); }

SVGFEDistantLightElement::SVGFEDistantLightElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}

SVGFEDistantLightElement::SVGFEDistantLightElement(const emlite::Val &val) noexcept: SVGElement(val) {}

SVGAnimatedNumber SVGFEDistantLightElement::azimuth() const {
    return SVGElement::get("azimuth").as<SVGAnimatedNumber>();
}

SVGAnimatedNumber SVGFEDistantLightElement::elevation() const {
    return SVGElement::get("elevation").as<SVGAnimatedNumber>();
}


} // namespace webbind