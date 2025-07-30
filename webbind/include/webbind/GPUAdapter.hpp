#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class GPUSupportedFeatures;
class GPUSupportedLimits;
class GPUAdapterInfo;
class GPUDevice;
class GPUDeviceDescriptor;


class GPUDeviceDescriptor : public emlite::Val {
  explicit GPUDeviceDescriptor(Handle h) noexcept;
public:
    static GPUDeviceDescriptor take_ownership(Handle h) noexcept;
    explicit GPUDeviceDescriptor(const emlite::Val &val) noexcept;
    GPUDeviceDescriptor() noexcept;
    GPUDeviceDescriptor clone() const noexcept;
    jsbind::TypedArray<GPUFeatureName> requiredFeatures() const;
    void requiredFeatures(const jsbind::TypedArray<GPUFeatureName>& value);
    jsbind::Record<jsbind::String, jsbind::Any> requiredLimits() const;
    void requiredLimits(const jsbind::Record<jsbind::String, jsbind::Any>& value);
    jsbind::Any defaultQueue() const;
    void defaultQueue(const jsbind::Any& value);
};

class GPUAdapter : public emlite::Val {
    explicit GPUAdapter(Handle h) noexcept;

public:
    explicit GPUAdapter(const emlite::Val &val) noexcept;
    static GPUAdapter take_ownership(Handle h) noexcept;

    GPUAdapter clone() const noexcept;
    GPUSupportedFeatures features() const;
    GPUSupportedLimits limits() const;
    GPUAdapterInfo info() const;
    jsbind::Promise<GPUDevice> requestDevice();
    jsbind::Promise<GPUDevice> requestDevice(const GPUDeviceDescriptor& descriptor);
};

