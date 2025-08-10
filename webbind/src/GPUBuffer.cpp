#include <webbind/GPUBuffer.hpp>

namespace webbind {

GPUBuffer GPUBuffer::take_ownership(Handle h) noexcept {
        return GPUBuffer(h);
    }
GPUBuffer GPUBuffer::clone() const noexcept { return *this; }
emlite::Val GPUBuffer::instance() noexcept { return emlite::Val::global("GPUBuffer"); }
GPUBuffer::GPUBuffer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUBuffer::GPUBuffer(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Any GPUBuffer::size() const {
    return emlite::Val::get("size").as<jsbind::Any>();
}

jsbind::Any GPUBuffer::usage() const {
    return emlite::Val::get("usage").as<jsbind::Any>();
}

GPUBufferMapState GPUBuffer::mapState() const {
    return emlite::Val::get("mapState").as<GPUBufferMapState>();
}

jsbind::Promise<jsbind::Undefined> GPUBuffer::mapAsync(const jsbind::Any& mode) {
    return emlite::Val::call("mapAsync", mode).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> GPUBuffer::mapAsync(const jsbind::Any& mode, const jsbind::Any& offset) {
    return emlite::Val::call("mapAsync", mode, offset).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> GPUBuffer::mapAsync(const jsbind::Any& mode, const jsbind::Any& offset, const jsbind::Any& size) {
    return emlite::Val::call("mapAsync", mode, offset, size).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::ArrayBuffer GPUBuffer::getMappedRange() {
    return emlite::Val::call("getMappedRange").as<jsbind::ArrayBuffer>();
}

jsbind::ArrayBuffer GPUBuffer::getMappedRange(const jsbind::Any& offset) {
    return emlite::Val::call("getMappedRange", offset).as<jsbind::ArrayBuffer>();
}

jsbind::ArrayBuffer GPUBuffer::getMappedRange(const jsbind::Any& offset, const jsbind::Any& size) {
    return emlite::Val::call("getMappedRange", offset, size).as<jsbind::ArrayBuffer>();
}

jsbind::Undefined GPUBuffer::unmap() {
    return emlite::Val::call("unmap").as<jsbind::Undefined>();
}

jsbind::Undefined GPUBuffer::destroy() {
    return emlite::Val::call("destroy").as<jsbind::Undefined>();
}

jsbind::String GPUBuffer::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void GPUBuffer::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}


} // namespace webbind