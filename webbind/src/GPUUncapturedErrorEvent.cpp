#include <webbind/GPUUncapturedErrorEvent.hpp>
#include <webbind/GPUError.hpp>


GPUUncapturedErrorEvent GPUUncapturedErrorEvent::take_ownership(Handle h) noexcept {
        return GPUUncapturedErrorEvent(h);
    }
GPUUncapturedErrorEvent GPUUncapturedErrorEvent::clone() const noexcept { return *this; }
emlite::Val GPUUncapturedErrorEvent::instance() noexcept { return emlite::Val::global("GPUUncapturedErrorEvent"); }
GPUUncapturedErrorEvent::GPUUncapturedErrorEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
GPUUncapturedErrorEvent::GPUUncapturedErrorEvent(const emlite::Val &val) noexcept: Event(val) {}


GPUUncapturedErrorEvent::GPUUncapturedErrorEvent(const jsbind::String& type, const jsbind::Any& gpuUncapturedErrorEventInitDict) : Event(emlite::Val::global("GPUUncapturedErrorEvent").new_(type, gpuUncapturedErrorEventInitDict)) {}

GPUError GPUUncapturedErrorEvent::error() const {
    return Event::get("error").as<GPUError>();
}

