#include <webbind/EXT_sRGB.hpp>

namespace webbind {

EXT_sRGB EXT_sRGB::take_ownership(Handle h) noexcept {
    return EXT_sRGB(h);
}

EXT_sRGB EXT_sRGB::clone() const noexcept { return *this; }

emlite::Val EXT_sRGB::instance() noexcept { return emlite::Val::global("EXT_sRGB"); }

EXT_sRGB::EXT_sRGB(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

EXT_sRGB::EXT_sRGB(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind