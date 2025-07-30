#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class MediaCapabilities;
class Permissions;
class Serial;
class ServiceWorkerContainer;
class HID;
class USB;
class NetworkInformation;
class StorageBucketManager;
class StorageManager;
class NavigatorUAData;
class LockManager;
class GPU;
class ML;


class WorkerNavigator : public emlite::Val {
    explicit WorkerNavigator(Handle h) noexcept;

public:
    explicit WorkerNavigator(const emlite::Val &val) noexcept;
    static WorkerNavigator take_ownership(Handle h) noexcept;

    WorkerNavigator clone() const noexcept;
    MediaCapabilities mediaCapabilities() const;
    Permissions permissions() const;
    Serial serial() const;
    ServiceWorkerContainer serviceWorker() const;
    HID hid() const;
    USB usb() const;
    jsbind::Promise<jsbind::Undefined> setAppBadge();
    jsbind::Promise<jsbind::Undefined> setAppBadge(long long contents);
    jsbind::Promise<jsbind::Undefined> clearAppBadge();
    double deviceMemory() const;
    bool globalPrivacyControl() const;
    bool taintEnabled();
    jsbind::String oscpu() const;
    jsbind::String language() const;
    jsbind::TypedArray<jsbind::String> languages() const;
    bool onLine() const;
    long long hardwareConcurrency() const;
    NetworkInformation connection() const;
    StorageBucketManager storageBuckets() const;
    StorageManager storage() const;
    NavigatorUAData userAgentData() const;
    LockManager locks() const;
    GPU gpu() const;
    ML ml() const;
};

