#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Element;


class HTMLAllCollection : public emlite::Val {
    explicit HTMLAllCollection(Handle h) noexcept;

public:
    explicit HTMLAllCollection(const emlite::Val &val) noexcept;
    static HTMLAllCollection take_ownership(Handle h) noexcept;

    HTMLAllCollection clone() const noexcept;
    unsigned long length() const;
    jsbind::Any namedItem(const jsbind::String& name);
    jsbind::Any item();
    jsbind::Any item(const jsbind::String& nameOrIndex);
};

