#include <webbind/USBIsochronousOutTransferPacket.hpp>

namespace webbind {

USBIsochronousOutTransferPacket USBIsochronousOutTransferPacket::take_ownership(Handle h) noexcept {
    return USBIsochronousOutTransferPacket(h);
}

USBIsochronousOutTransferPacket USBIsochronousOutTransferPacket::clone() const noexcept { return *this; }

emlite::Val USBIsochronousOutTransferPacket::instance() noexcept { return emlite::Val::global("USBIsochronousOutTransferPacket"); }

USBIsochronousOutTransferPacket::USBIsochronousOutTransferPacket(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

USBIsochronousOutTransferPacket::USBIsochronousOutTransferPacket(const emlite::Val &val) noexcept: emlite::Val(val) {}

USBIsochronousOutTransferPacket::USBIsochronousOutTransferPacket(const USBTransferStatus& status) : emlite::Val(emlite::Val::global("USBIsochronousOutTransferPacket").new_(status)) {}

USBIsochronousOutTransferPacket::USBIsochronousOutTransferPacket(const USBTransferStatus& status, unsigned long bytesWritten) : emlite::Val(emlite::Val::global("USBIsochronousOutTransferPacket").new_(status, bytesWritten)) {}

unsigned long USBIsochronousOutTransferPacket::bytesWritten() const {
    return emlite::Val::get("bytesWritten").as<unsigned long>();
}

USBTransferStatus USBIsochronousOutTransferPacket::status() const {
    return emlite::Val::get("status").as<USBTransferStatus>();
}


} // namespace webbind