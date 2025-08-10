#include <webbind/BackgroundFetchRecord.hpp>
#include <webbind/Request.hpp>
#include <webbind/Response.hpp>

namespace webbind {

BackgroundFetchRecord BackgroundFetchRecord::take_ownership(Handle h) noexcept {
    return BackgroundFetchRecord(h);
}

BackgroundFetchRecord BackgroundFetchRecord::clone() const noexcept { return *this; }

emlite::Val BackgroundFetchRecord::instance() noexcept { return emlite::Val::global("BackgroundFetchRecord"); }

BackgroundFetchRecord::BackgroundFetchRecord(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

BackgroundFetchRecord::BackgroundFetchRecord(const emlite::Val &val) noexcept: emlite::Val(val) {}

Request BackgroundFetchRecord::request() const {
    return emlite::Val::get("request").as<Request>();
}

jsbind::Promise<Response> BackgroundFetchRecord::responseReady() const {
    return emlite::Val::get("responseReady").as<jsbind::Promise<Response>>();
}


} // namespace webbind