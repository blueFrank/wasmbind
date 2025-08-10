#include <webbind/GroupEffect.hpp>
#include <webbind/AnimationEffect.hpp>
#include <webbind/AnimationNodeList.hpp>
#include <webbind/GroupEffect.hpp>

namespace webbind {

GroupEffect GroupEffect::take_ownership(Handle h) noexcept {
        return GroupEffect(h);
    }
GroupEffect GroupEffect::clone() const noexcept { return *this; }
emlite::Val GroupEffect::instance() noexcept { return emlite::Val::global("GroupEffect"); }
GroupEffect::GroupEffect(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GroupEffect::GroupEffect(const emlite::Val &val) noexcept: emlite::Val(val) {}

GroupEffect::GroupEffect(const jsbind::TypedArray<AnimationEffect>& children) : emlite::Val(emlite::Val::global("GroupEffect").new_(children)) {}

GroupEffect::GroupEffect(const jsbind::TypedArray<AnimationEffect>& children, const jsbind::Any& timing) : emlite::Val(emlite::Val::global("GroupEffect").new_(children, timing)) {}

AnimationNodeList GroupEffect::children() const {
    return emlite::Val::get("children").as<AnimationNodeList>();
}

AnimationEffect GroupEffect::firstChild() const {
    return emlite::Val::get("firstChild").as<AnimationEffect>();
}

AnimationEffect GroupEffect::lastChild() const {
    return emlite::Val::get("lastChild").as<AnimationEffect>();
}

GroupEffect GroupEffect::clone() {
    return emlite::Val::call("clone").as<GroupEffect>();
}

jsbind::Undefined GroupEffect::prepend(const AnimationEffect& effects) {
    return emlite::Val::call("prepend", effects).as<jsbind::Undefined>();
}

jsbind::Undefined GroupEffect::append(const AnimationEffect& effects) {
    return emlite::Val::call("append", effects).as<jsbind::Undefined>();
}


} // namespace webbind