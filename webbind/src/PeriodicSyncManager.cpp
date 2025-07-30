#include <webbind/PeriodicSyncManager.hpp>


BackgroundSyncOptions::BackgroundSyncOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BackgroundSyncOptions BackgroundSyncOptions::take_ownership(Handle h) noexcept {
        return BackgroundSyncOptions(h);
    }
BackgroundSyncOptions::BackgroundSyncOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
BackgroundSyncOptions::BackgroundSyncOptions() noexcept: emlite::Val(emlite::Val::object()) {}
BackgroundSyncOptions BackgroundSyncOptions::clone() const noexcept { return *this; }

long long BackgroundSyncOptions::minInterval() const {
    return emlite::Val::get("minInterval").as<long long>();
}

void BackgroundSyncOptions::minInterval(long long value) {
    emlite::Val::set("minInterval", value);
}

PeriodicSyncManager PeriodicSyncManager::take_ownership(Handle h) noexcept {
        return PeriodicSyncManager(h);
    }
PeriodicSyncManager PeriodicSyncManager::clone() const noexcept { return *this; }
PeriodicSyncManager::PeriodicSyncManager(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PeriodicSyncManager::PeriodicSyncManager(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise<jsbind::Undefined> PeriodicSyncManager::register_(const jsbind::String& tag) {
    return emlite::Val::call("register", tag).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> PeriodicSyncManager::register_(const jsbind::String& tag, const BackgroundSyncOptions& options) {
    return emlite::Val::call("register", tag, options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::TypedArray<jsbind::String>> PeriodicSyncManager::getTags() {
    return emlite::Val::call("getTags").as<jsbind::Promise<jsbind::TypedArray<jsbind::String>>>();
}

jsbind::Promise<jsbind::Undefined> PeriodicSyncManager::unregister(const jsbind::String& tag) {
    return emlite::Val::call("unregister", tag).as<jsbind::Promise<jsbind::Undefined>>();
}

