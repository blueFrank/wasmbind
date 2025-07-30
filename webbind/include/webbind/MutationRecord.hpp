#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;
class NodeList;


class MutationRecord : public emlite::Val {
    explicit MutationRecord(Handle h) noexcept;

public:
    explicit MutationRecord(const emlite::Val &val) noexcept;
    static MutationRecord take_ownership(Handle h) noexcept;

    MutationRecord clone() const noexcept;
    jsbind::String type() const;
    Node target() const;
    NodeList addedNodes() const;
    NodeList removedNodes() const;
    Node previousSibling() const;
    Node nextSibling() const;
    jsbind::String attributeName() const;
    jsbind::String attributeNamespace() const;
    jsbind::String oldValue() const;
};

