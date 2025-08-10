#include <webbind/ImageBitmap.hpp>

namespace webbind {

ImageBitmap ImageBitmap::take_ownership(Handle h) noexcept {
        return ImageBitmap(h);
    }
ImageBitmap ImageBitmap::clone() const noexcept { return *this; }
emlite::Val ImageBitmap::instance() noexcept { return emlite::Val::global("ImageBitmap"); }
ImageBitmap::ImageBitmap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
ImageBitmap::ImageBitmap(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned long ImageBitmap::width() const {
    return emlite::Val::get("width").as<unsigned long>();
}

unsigned long ImageBitmap::height() const {
    return emlite::Val::get("height").as<unsigned long>();
}

jsbind::Undefined ImageBitmap::close() {
    return emlite::Val::call("close").as<jsbind::Undefined>();
}


} // namespace webbind