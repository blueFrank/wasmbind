#include <webbind/WEBGL_color_buffer_float.hpp>

namespace webbind {

WEBGL_color_buffer_float WEBGL_color_buffer_float::take_ownership(Handle h) noexcept {
    return WEBGL_color_buffer_float(h);
}

WEBGL_color_buffer_float WEBGL_color_buffer_float::clone() const noexcept { return *this; }

emlite::Val WEBGL_color_buffer_float::instance() noexcept { return emlite::Val::global("WEBGL_color_buffer_float"); }

WEBGL_color_buffer_float::WEBGL_color_buffer_float(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

WEBGL_color_buffer_float::WEBGL_color_buffer_float(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind