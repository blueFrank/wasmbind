#include <webbind/XRPlaneSet.hpp>


XRPlaneSet XRPlaneSet::take_ownership(Handle h) noexcept {
        return XRPlaneSet(h);
    }
XRPlaneSet XRPlaneSet::clone() const noexcept { return *this; }
emlite::Val XRPlaneSet::instance() noexcept { return emlite::Val::global("XRPlaneSet"); }
XRPlaneSet::XRPlaneSet(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRPlaneSet::XRPlaneSet(const emlite::Val &val) noexcept: emlite::Val(val) {}


