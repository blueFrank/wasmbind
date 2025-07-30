#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "StylePropertyMapReadOnly.hpp"
#include "enums.hpp"


class StylePropertyMap : public StylePropertyMapReadOnly {
    explicit StylePropertyMap(Handle h) noexcept;

public:
    explicit StylePropertyMap(const emlite::Val &val) noexcept;
    static StylePropertyMap take_ownership(Handle h) noexcept;

    StylePropertyMap clone() const noexcept;
    jsbind::Undefined set(const jsbind::String& property, const jsbind::Any& values);
    jsbind::Undefined append(const jsbind::String& property, const jsbind::Any& values);
    jsbind::Undefined delete_(const jsbind::String& property);
    jsbind::Undefined clear();
};

