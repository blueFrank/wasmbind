#include <webbind/Blob.hpp>
#include <webbind/ReadableStream.hpp>


Blob Blob::take_ownership(Handle h) noexcept {
        return Blob(h);
    }
Blob Blob::clone() const noexcept { return *this; }
Blob::Blob(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Blob::Blob(const emlite::Val &val) noexcept: emlite::Val(val) {}


Blob::Blob() : emlite::Val(emlite::Val::global("Blob").new_()) {}

Blob::Blob(const jsbind::Sequence<jsbind::Any>& blobParts) : emlite::Val(emlite::Val::global("Blob").new_(blobParts)) {}

Blob::Blob(const jsbind::Sequence<jsbind::Any>& blobParts, const jsbind::Any& options) : emlite::Val(emlite::Val::global("Blob").new_(blobParts, options)) {}

long long Blob::size() const {
    return emlite::Val::get("size").as<long long>();
}

jsbind::DOMString Blob::type() const {
    return emlite::Val::get("type").as<jsbind::DOMString>();
}

Blob Blob::slice() {
    return emlite::Val::call("slice").as<Blob>();
}

Blob Blob::slice(long long start) {
    return emlite::Val::call("slice", start).as<Blob>();
}

Blob Blob::slice(long long start, long long end) {
    return emlite::Val::call("slice", start, end).as<Blob>();
}

Blob Blob::slice(long long start, long long end, const jsbind::DOMString& contentType) {
    return emlite::Val::call("slice", start, end, contentType).as<Blob>();
}

ReadableStream Blob::stream() {
    return emlite::Val::call("stream").as<ReadableStream>();
}

jsbind::Promise<jsbind::USVString> Blob::text() {
    return emlite::Val::call("text").as<jsbind::Promise<jsbind::USVString>>();
}

jsbind::Promise<jsbind::ArrayBuffer> Blob::arrayBuffer() {
    return emlite::Val::call("arrayBuffer").as<jsbind::Promise<jsbind::ArrayBuffer>>();
}

jsbind::Promise<jsbind::Uint8Array> Blob::bytes() {
    return emlite::Val::call("bytes").as<jsbind::Promise<jsbind::Uint8Array>>();
}

