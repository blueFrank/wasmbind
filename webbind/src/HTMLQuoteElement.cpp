#include <webbind/HTMLQuoteElement.hpp>


HTMLQuoteElement HTMLQuoteElement::take_ownership(Handle h) noexcept {
        return HTMLQuoteElement(h);
    }
HTMLQuoteElement HTMLQuoteElement::clone() const noexcept { return *this; }
HTMLQuoteElement::HTMLQuoteElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLQuoteElement::HTMLQuoteElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLQuoteElement::HTMLQuoteElement() : HTMLElement(emlite::Val::global("HTMLQuoteElement").new_()) {}

jsbind::String HTMLQuoteElement::cite() const {
    return HTMLElement::get("cite").as<jsbind::String>();
}

void HTMLQuoteElement::cite(const jsbind::String& value) {
    HTMLElement::set("cite", value);
}

