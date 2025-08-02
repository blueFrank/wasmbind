#include <webbind/CookieStore.hpp>


CookieListItem::CookieListItem(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CookieListItem CookieListItem::take_ownership(Handle h) noexcept {
        return CookieListItem(h);
    }
CookieListItem::CookieListItem(const emlite::Val &val) noexcept: emlite::Val(val) {}
CookieListItem::CookieListItem() noexcept: emlite::Val(emlite::Val::object()) {}
CookieListItem CookieListItem::clone() const noexcept { return *this; }

jsbind::String CookieListItem::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void CookieListItem::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String CookieListItem::value() const {
    return emlite::Val::get("value").as<jsbind::String>();
}

void CookieListItem::value(const jsbind::String& value) {
    emlite::Val::set("value", value);
}

jsbind::String CookieListItem::domain() const {
    return emlite::Val::get("domain").as<jsbind::String>();
}

void CookieListItem::domain(const jsbind::String& value) {
    emlite::Val::set("domain", value);
}

jsbind::String CookieListItem::path() const {
    return emlite::Val::get("path").as<jsbind::String>();
}

void CookieListItem::path(const jsbind::String& value) {
    emlite::Val::set("path", value);
}

jsbind::Any CookieListItem::expires() const {
    return emlite::Val::get("expires").as<jsbind::Any>();
}

void CookieListItem::expires(const jsbind::Any& value) {
    emlite::Val::set("expires", value);
}

bool CookieListItem::secure() const {
    return emlite::Val::get("secure").as<bool>();
}

void CookieListItem::secure(bool value) {
    emlite::Val::set("secure", value);
}

CookieSameSite CookieListItem::sameSite() const {
    return emlite::Val::get("sameSite").as<CookieSameSite>();
}

void CookieListItem::sameSite(const CookieSameSite& value) {
    emlite::Val::set("sameSite", value);
}

bool CookieListItem::partitioned() const {
    return emlite::Val::get("partitioned").as<bool>();
}

void CookieListItem::partitioned(bool value) {
    emlite::Val::set("partitioned", value);
}

CookieStoreGetOptions::CookieStoreGetOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CookieStoreGetOptions CookieStoreGetOptions::take_ownership(Handle h) noexcept {
        return CookieStoreGetOptions(h);
    }
CookieStoreGetOptions::CookieStoreGetOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
CookieStoreGetOptions::CookieStoreGetOptions() noexcept: emlite::Val(emlite::Val::object()) {}
CookieStoreGetOptions CookieStoreGetOptions::clone() const noexcept { return *this; }

jsbind::String CookieStoreGetOptions::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void CookieStoreGetOptions::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String CookieStoreGetOptions::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void CookieStoreGetOptions::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}

CookieInit::CookieInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CookieInit CookieInit::take_ownership(Handle h) noexcept {
        return CookieInit(h);
    }
CookieInit::CookieInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
CookieInit::CookieInit() noexcept: emlite::Val(emlite::Val::object()) {}
CookieInit CookieInit::clone() const noexcept { return *this; }

jsbind::String CookieInit::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void CookieInit::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String CookieInit::value() const {
    return emlite::Val::get("value").as<jsbind::String>();
}

void CookieInit::value(const jsbind::String& value) {
    emlite::Val::set("value", value);
}

jsbind::Any CookieInit::expires() const {
    return emlite::Val::get("expires").as<jsbind::Any>();
}

void CookieInit::expires(const jsbind::Any& value) {
    emlite::Val::set("expires", value);
}

jsbind::String CookieInit::domain() const {
    return emlite::Val::get("domain").as<jsbind::String>();
}

void CookieInit::domain(const jsbind::String& value) {
    emlite::Val::set("domain", value);
}

jsbind::String CookieInit::path() const {
    return emlite::Val::get("path").as<jsbind::String>();
}

void CookieInit::path(const jsbind::String& value) {
    emlite::Val::set("path", value);
}

CookieSameSite CookieInit::sameSite() const {
    return emlite::Val::get("sameSite").as<CookieSameSite>();
}

void CookieInit::sameSite(const CookieSameSite& value) {
    emlite::Val::set("sameSite", value);
}

bool CookieInit::partitioned() const {
    return emlite::Val::get("partitioned").as<bool>();
}

void CookieInit::partitioned(bool value) {
    emlite::Val::set("partitioned", value);
}

CookieStoreDeleteOptions::CookieStoreDeleteOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CookieStoreDeleteOptions CookieStoreDeleteOptions::take_ownership(Handle h) noexcept {
        return CookieStoreDeleteOptions(h);
    }
CookieStoreDeleteOptions::CookieStoreDeleteOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
CookieStoreDeleteOptions::CookieStoreDeleteOptions() noexcept: emlite::Val(emlite::Val::object()) {}
CookieStoreDeleteOptions CookieStoreDeleteOptions::clone() const noexcept { return *this; }

jsbind::String CookieStoreDeleteOptions::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void CookieStoreDeleteOptions::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

jsbind::String CookieStoreDeleteOptions::domain() const {
    return emlite::Val::get("domain").as<jsbind::String>();
}

void CookieStoreDeleteOptions::domain(const jsbind::String& value) {
    emlite::Val::set("domain", value);
}

jsbind::String CookieStoreDeleteOptions::path() const {
    return emlite::Val::get("path").as<jsbind::String>();
}

void CookieStoreDeleteOptions::path(const jsbind::String& value) {
    emlite::Val::set("path", value);
}

bool CookieStoreDeleteOptions::partitioned() const {
    return emlite::Val::get("partitioned").as<bool>();
}

void CookieStoreDeleteOptions::partitioned(bool value) {
    emlite::Val::set("partitioned", value);
}

CookieStore CookieStore::take_ownership(Handle h) noexcept {
        return CookieStore(h);
    }
CookieStore CookieStore::clone() const noexcept { return *this; }
emlite::Val CookieStore::instance() noexcept { return emlite::Val::global("CookieStore"); }
CookieStore::CookieStore(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
CookieStore::CookieStore(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Promise<CookieListItem> CookieStore::get() {
    return EventTarget::call("get").as<jsbind::Promise<CookieListItem>>();
}

jsbind::Promise<CookieListItem> CookieStore::get(const CookieStoreGetOptions& options) {
    return EventTarget::call("get", options).as<jsbind::Promise<CookieListItem>>();
}

jsbind::Promise<jsbind::Any> CookieStore::getAll() {
    return EventTarget::call("getAll").as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Any> CookieStore::getAll(const CookieStoreGetOptions& options) {
    return EventTarget::call("getAll", options).as<jsbind::Promise<jsbind::Any>>();
}

jsbind::Promise<jsbind::Undefined> CookieStore::set(const CookieInit& options) {
    return EventTarget::call("set", options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> CookieStore::delete_(const CookieStoreDeleteOptions& options) {
    return EventTarget::call("delete", options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Any CookieStore::onchange() const {
    return EventTarget::get("onchange").as<jsbind::Any>();
}

void CookieStore::onchange(const jsbind::Any& value) {
    EventTarget::set("onchange", value);
}

