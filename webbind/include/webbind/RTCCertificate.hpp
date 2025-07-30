#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class RTCDtlsFingerprint;


class RTCDtlsFingerprint : public emlite::Val {
  explicit RTCDtlsFingerprint(Handle h) noexcept;
public:
    static RTCDtlsFingerprint take_ownership(Handle h) noexcept;
    explicit RTCDtlsFingerprint(const emlite::Val &val) noexcept;
    RTCDtlsFingerprint() noexcept;
    RTCDtlsFingerprint clone() const noexcept;
    jsbind::String algorithm() const;
    void algorithm(const jsbind::String& value);
    jsbind::String value() const;
    void value(const jsbind::String& value);
};

class RTCCertificate : public emlite::Val {
    explicit RTCCertificate(Handle h) noexcept;

public:
    explicit RTCCertificate(const emlite::Val &val) noexcept;
    static RTCCertificate take_ownership(Handle h) noexcept;

    RTCCertificate clone() const noexcept;
    jsbind::Any expires() const;
    jsbind::TypedArray<RTCDtlsFingerprint> getFingerprints();
};

