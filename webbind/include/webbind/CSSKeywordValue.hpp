#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSStyleValue.hpp"
#include "enums.hpp"


class CSSKeywordValue : public CSSStyleValue {
    explicit CSSKeywordValue(Handle h) noexcept;

public:
    explicit CSSKeywordValue(const emlite::Val &val) noexcept;
    static CSSKeywordValue take_ownership(Handle h) noexcept;

    CSSKeywordValue clone() const noexcept;
    CSSKeywordValue(const jsbind::String& value);
    jsbind::String value() const;
    void value(const jsbind::String& value);
};

