#include <webbind/SharedStorageClearMethod.hpp>
#include <webbind/SharedStorage.hpp>


SharedStorageClearMethod SharedStorageClearMethod::take_ownership(Handle h) noexcept {
        return SharedStorageClearMethod(h);
    }
SharedStorageClearMethod SharedStorageClearMethod::clone() const noexcept { return *this; }
emlite::Val SharedStorageClearMethod::instance() noexcept { return emlite::Val::global("SharedStorageClearMethod"); }
SharedStorageClearMethod::SharedStorageClearMethod(Handle h) noexcept : SharedStorageModifierMethod(emlite::Val::take_ownership(h)) {}
SharedStorageClearMethod::SharedStorageClearMethod(const emlite::Val &val) noexcept: SharedStorageModifierMethod(val) {}


SharedStorageClearMethod::SharedStorageClearMethod() : SharedStorageModifierMethod(emlite::Val::global("SharedStorageClearMethod").new_()) {}

SharedStorageClearMethod::SharedStorageClearMethod(const SharedStorageModifierMethodOptions& options) : SharedStorageModifierMethod(emlite::Val::global("SharedStorageClearMethod").new_(options)) {}

