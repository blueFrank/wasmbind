#include <webbind/CacheStorage.hpp>
#include <webbind/Cache.hpp>


MultiCacheQueryOptions::MultiCacheQueryOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MultiCacheQueryOptions MultiCacheQueryOptions::take_ownership(Handle h) noexcept {
        return MultiCacheQueryOptions(h);
    }
MultiCacheQueryOptions::MultiCacheQueryOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
MultiCacheQueryOptions::MultiCacheQueryOptions() noexcept: emlite::Val(emlite::Val::object()) {}
MultiCacheQueryOptions MultiCacheQueryOptions::clone() const noexcept { return *this; }

jsbind::DOMString MultiCacheQueryOptions::cacheName() const {
    return emlite::Val::get("cacheName").as<jsbind::DOMString>();
}

void MultiCacheQueryOptions::cacheName(const jsbind::DOMString& value) {
    emlite::Val::set("cacheName", value);
}

CacheStorage CacheStorage::take_ownership(Handle h) noexcept {
        return CacheStorage(h);
    }
CacheStorage CacheStorage::clone() const noexcept { return *this; }
CacheStorage::CacheStorage(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CacheStorage::CacheStorage(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise<jsbind::Any> CacheStorage::match(const jsbind::Any& request) {
    return emlite::Val::call("match", request).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> CacheStorage::match(const jsbind::Any& request, const MultiCacheQueryOptions& options) {
    return emlite::Val::call("match", request, options).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<bool> CacheStorage::has(const jsbind::DOMString& cacheName) {
    return emlite::Val::call("has", cacheName).as<jsbind::Promise<bool>>();
}

jsbind::Promise<Cache> CacheStorage::open(const jsbind::DOMString& cacheName) {
    return emlite::Val::call("open", cacheName).as<jsbind::Promise<Cache>>();
}

jsbind::Promise<bool> CacheStorage::delete_(const jsbind::DOMString& cacheName) {
    return emlite::Val::call("delete", cacheName).as<jsbind::Promise<bool>>();
}

jsbind::Promise<jsbind::Sequence<jsbind::DOMString>> CacheStorage::keys() {
    return emlite::Val::call("keys").as<jsbind::Promise<jsbind::Sequence<jsbind::DOMString>>>();
}

