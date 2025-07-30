#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ReadableStream;
class WritableStream;


class TextDecoderStream : public emlite::Val {
    explicit TextDecoderStream(Handle h) noexcept;

public:
    explicit TextDecoderStream(const emlite::Val &val) noexcept;
    static TextDecoderStream take_ownership(Handle h) noexcept;

    TextDecoderStream clone() const noexcept;
    TextDecoderStream();
    TextDecoderStream(const jsbind::String& label);
    TextDecoderStream(const jsbind::String& label, const jsbind::Any& options);
    jsbind::String encoding() const;
    bool fatal() const;
    bool ignoreBOM() const;
    ReadableStream readable() const;
    WritableStream writable() const;
};

