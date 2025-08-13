#include <jsbind/Array.hpp>
#include <jsbind/Error.hpp>
#include <jsbind/Function.hpp>
#include <jsbind/String.hpp>
#include <jsbind/Undefined.hpp>

using namespace jsbind;

ArrayBuffer::ArrayBuffer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

ArrayBuffer ArrayBuffer::take_ownership(Handle h) noexcept { return ArrayBuffer(h); }

ArrayBuffer::ArrayBuffer(size_t byteLen)
    : emlite::Val(emlite::Val::global("ArrayBuffer").new_(byteLen)) {}

emlite::Val ArrayBuffer::instance() noexcept { return emlite::Val::global("ArrayBuffer"); }

size_t ArrayBuffer::byteLength() const { return emlite::Val::get("byteLength").as<size_t>(); }

ArrayBuffer ArrayBuffer::slice(size_t begin, size_t end) const {
    return emlite::Val::call("slice", begin, end).as<ArrayBuffer>();
}

bool ArrayBuffer::isView(const emlite::Val &v) {
    return emlite::Val::global("ArrayBuffer").call("isView", v).as<bool>();
}

SharedArrayBuffer::SharedArrayBuffer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

SharedArrayBuffer SharedArrayBuffer::take_ownership(Handle h) noexcept { return SharedArrayBuffer(h); }

SharedArrayBuffer::SharedArrayBuffer(size_t byteLen)
    : emlite::Val(emlite::Val::global("SharedArrayBuffer").new_(byteLen)) {}

emlite::Val SharedArrayBuffer::instance() noexcept { return emlite::Val::global("SharedArrayBuffer"); }

size_t SharedArrayBuffer::byteLength() const { return emlite::Val::get("byteLength").as<size_t>(); }

SharedArrayBuffer SharedArrayBuffer::slice(size_t begin, size_t end) const {
    return emlite::Val::call("slice", begin, end).as<SharedArrayBuffer>();
}

bool SharedArrayBuffer::isView(const emlite::Val &v) {
    return emlite::Val::global("SharedArrayBuffer").call("isView", v).as<bool>();
}

DEFINE_ARRAY(Uint8Array, uint8_t)

DEFINE_ARRAY(Int8Array, int8_t)

DEFINE_ARRAY(Uint32Array, uint32_t)

DEFINE_ARRAY(Int32Array, int32_t)

DEFINE_ARRAY(Float32Array, float)

DEFINE_ARRAY(Float64Array, double)

DataView::DataView(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

DataView DataView::take_ownership(Handle h) noexcept { return DataView(h); }
DataView::DataView(const emlite::Val &v) noexcept : emlite::Val(v) {}

DataView::DataView(const ArrayBuffer &buf, size_t byteOffset, size_t byteLen)
    : emlite::Val(emlite::Val::global("DataView").new_(buf, byteOffset, byteLen)) {}

emlite::Val DataView::instance() noexcept { return emlite::Val::global("DataView"); }

size_t DataView::byteLength() const { return emlite::Val::get("byteLength").as<size_t>(); }
size_t DataView::byteOffset() const { return emlite::Val::get("byteOffset").as<size_t>(); }
ArrayBuffer DataView::buffer() const { return emlite::Val::get("buffer").as<ArrayBuffer>(); }

#define JSBIND_DV_GET(Name, Cpp)                                                                   \
    Result<Cpp, Error> DataView::Name(size_t off, bool le) const {                                 \
        return emlite::Val::call(#Name, off, le).as<Result<Cpp, Error>>();                         \
    }
#define JSBIND_DV_SET(Name, Cpp)                                                                   \
    Result<Undefined, Error> DataView::Name(size_t off, Cpp v, bool le) {                          \
        return emlite::Val::call(#Name, off, v, le).as<Result<Undefined, Error>>();                \
    }

Result<uint8_t, Error> DataView::getUint8(size_t o) const {
    return emlite::Val::call("getUint8", o).as<Result<uint8_t, Error>>();
}
Result<int8_t, Error> DataView::getInt8(size_t o) const {
    return emlite::Val::call("getInt8", o).as<Result<int8_t, Error>>();
}
Result<Undefined, Error> DataView::setUint8(size_t o, uint8_t v) {
    return emlite::Val::call("setUint8", o, v).as<Result<Undefined, Error>>();
}
Result<Undefined, Error> DataView::setInt8(size_t o, int8_t v) {
    return emlite::Val::call("setInt8", o, v).as<Result<Undefined, Error>>();
}

JSBIND_DV_GET(getUint16, uint16_t)
JSBIND_DV_GET(getInt16, int16_t)
JSBIND_DV_GET(getUint32, uint32_t)
JSBIND_DV_GET(getInt32, int32_t)
JSBIND_DV_GET(getFloat32, float)
JSBIND_DV_GET(getFloat64, double)

JSBIND_DV_SET(setUint16, uint16_t)
JSBIND_DV_SET(setInt16, int16_t)
JSBIND_DV_SET(setUint32, uint32_t)
JSBIND_DV_SET(setInt32, int32_t)
JSBIND_DV_SET(setFloat32, float)
JSBIND_DV_SET(setFloat64, double)

#undef JSBIND_DV_GET
#undef JSBIND_DV_SET
