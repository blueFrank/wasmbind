#include <webbind/USB.hpp>
#include <webbind/USBDevice.hpp>


USBDeviceRequestOptions::USBDeviceRequestOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
USBDeviceRequestOptions USBDeviceRequestOptions::take_ownership(Handle h) noexcept {
        return USBDeviceRequestOptions(h);
    }
USBDeviceRequestOptions::USBDeviceRequestOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
USBDeviceRequestOptions::USBDeviceRequestOptions() noexcept: emlite::Val(emlite::Val::object()) {}
USBDeviceRequestOptions USBDeviceRequestOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::Any> USBDeviceRequestOptions::filters() const {
    return emlite::Val::get("filters").as<jsbind::TypedArray<jsbind::Any>>();
}

void USBDeviceRequestOptions::filters(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("filters", value);
}

jsbind::TypedArray<jsbind::Any> USBDeviceRequestOptions::exclusionFilters() const {
    return emlite::Val::get("exclusionFilters").as<jsbind::TypedArray<jsbind::Any>>();
}

void USBDeviceRequestOptions::exclusionFilters(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("exclusionFilters", value);
}

USB USB::take_ownership(Handle h) noexcept {
        return USB(h);
    }
USB USB::clone() const noexcept { return *this; }
emlite::Val USB::instance() noexcept { return emlite::Val::global("USB"); }
USB::USB(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
USB::USB(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Any USB::onconnect() const {
    return EventTarget::get("onconnect").as<jsbind::Any>();
}

void USB::onconnect(const jsbind::Any& value) {
    EventTarget::set("onconnect", value);
}

jsbind::Any USB::ondisconnect() const {
    return EventTarget::get("ondisconnect").as<jsbind::Any>();
}

void USB::ondisconnect(const jsbind::Any& value) {
    EventTarget::set("ondisconnect", value);
}

jsbind::Promise<jsbind::TypedArray<USBDevice>> USB::getDevices() {
    return EventTarget::call("getDevices").as<jsbind::Promise<jsbind::TypedArray<USBDevice>>>();
}

jsbind::Promise<USBDevice> USB::requestDevice(const USBDeviceRequestOptions& options) {
    return EventTarget::call("requestDevice", options).as<jsbind::Promise<USBDevice>>();
}

