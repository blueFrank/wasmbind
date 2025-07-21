#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "window.hpp"
#include "enums.hpp"

class Document;
class Location;
class History;
class Navigation;
class CustomElementRegistry;
class BarProp;
class Element;
class Navigator;
class WindowPostMessageOptions;
class CookieStore;
class Viewport;
class MediaQueryList;
class Screen;
class VisualViewport;
class CSSStyleDeclaration;
class DigitalGoodsService;
class DocumentPictureInPicture;
class Fence;
class FileSystemFileHandle;
class OpenFilePickerOptions;
class SaveFilePickerOptions;
class FileSystemDirectoryHandle;
class DirectoryPickerOptions;
class External;
class FontData;
class QueryOptions;
class PortalHost;
class IdleRequestOptions;
class Selection;
class SharedStorage;
class SpeechSynthesis;
class LaunchQueue;
class ScreenDetails;
class Crypto;
class Storage;


class WindowPostMessageOptions : public emlite::Val {
  explicit WindowPostMessageOptions(Handle h) noexcept;
public:
    static WindowPostMessageOptions take_ownership(Handle h) noexcept;
    explicit WindowPostMessageOptions(const emlite::Val &val) noexcept;
    WindowPostMessageOptions() noexcept;
    WindowPostMessageOptions clone() const noexcept;
    jsbind::USVString targetOrigin() const;
    void targetOrigin(const jsbind::USVString& value);
};

class OpenFilePickerOptions : public emlite::Val {
  explicit OpenFilePickerOptions(Handle h) noexcept;
public:
    static OpenFilePickerOptions take_ownership(Handle h) noexcept;
    explicit OpenFilePickerOptions(const emlite::Val &val) noexcept;
    OpenFilePickerOptions() noexcept;
    OpenFilePickerOptions clone() const noexcept;
    bool multiple() const;
    void multiple(bool value);
};

class SaveFilePickerOptions : public emlite::Val {
  explicit SaveFilePickerOptions(Handle h) noexcept;
public:
    static SaveFilePickerOptions take_ownership(Handle h) noexcept;
    explicit SaveFilePickerOptions(const emlite::Val &val) noexcept;
    SaveFilePickerOptions() noexcept;
    SaveFilePickerOptions clone() const noexcept;
    jsbind::USVString suggestedName() const;
    void suggestedName(const jsbind::USVString& value);
};

class DirectoryPickerOptions : public emlite::Val {
  explicit DirectoryPickerOptions(Handle h) noexcept;
public:
    static DirectoryPickerOptions take_ownership(Handle h) noexcept;
    explicit DirectoryPickerOptions(const emlite::Val &val) noexcept;
    DirectoryPickerOptions() noexcept;
    DirectoryPickerOptions clone() const noexcept;
    jsbind::DOMString id() const;
    void id(const jsbind::DOMString& value);
    jsbind::Any startIn() const;
    void startIn(const jsbind::Any& value);
    FileSystemPermissionMode mode() const;
    void mode(const FileSystemPermissionMode& value);
};

class QueryOptions : public emlite::Val {
  explicit QueryOptions(Handle h) noexcept;
public:
    static QueryOptions take_ownership(Handle h) noexcept;
    explicit QueryOptions(const emlite::Val &val) noexcept;
    QueryOptions() noexcept;
    QueryOptions clone() const noexcept;
    jsbind::Sequence<jsbind::DOMString> postscriptNames() const;
    void postscriptNames(const jsbind::Sequence<jsbind::DOMString>& value);
};

class IdleRequestOptions : public emlite::Val {
  explicit IdleRequestOptions(Handle h) noexcept;
public:
    static IdleRequestOptions take_ownership(Handle h) noexcept;
    explicit IdleRequestOptions(const emlite::Val &val) noexcept;
    IdleRequestOptions() noexcept;
    IdleRequestOptions clone() const noexcept;
    unsigned long timeout() const;
    void timeout(unsigned long value);
};

class Window : public EventTarget {
    explicit Window(Handle h) noexcept;

public:
    explicit Window(const emlite::Val &val) noexcept;
    static Window take_ownership(Handle h) noexcept;

    Window clone() const noexcept;
    jsbind::Any window() const;
    jsbind::Any self() const;
    Document document() const;
    jsbind::DOMString name() const;
    void name(const jsbind::DOMString& value);
    jsbind::Any location() const;
    History history() const;
    Navigation navigation() const;
    CustomElementRegistry customElements() const;
    BarProp locationbar() const;
    BarProp menubar() const;
    BarProp personalbar() const;
    BarProp scrollbars() const;
    BarProp statusbar() const;
    BarProp toolbar() const;
    jsbind::DOMString status() const;
    void status(const jsbind::DOMString& value);
    jsbind::Undefined close();
    bool closed() const;
    jsbind::Undefined stop();
    jsbind::Undefined focus();
    jsbind::Undefined blur();
    jsbind::Any frames() const;
    unsigned long length() const;
    jsbind::Any top() const;
    jsbind::Any opener() const;
    void opener(const jsbind::Any& value);
    jsbind::Any parent() const;
    Element frameElement() const;
    jsbind::Any open();
    jsbind::Any open(const jsbind::USVString& url);
    jsbind::Any open(const jsbind::USVString& url, const jsbind::DOMString& target);
    jsbind::Any open(const jsbind::USVString& url, const jsbind::DOMString& target, const jsbind::DOMString& features);
    Navigator navigator() const;
    Navigator clientInformation() const;
    bool originAgentCluster() const;
    jsbind::Undefined alert(const jsbind::DOMString& message);
    bool confirm();
    bool confirm(const jsbind::DOMString& message);
    jsbind::DOMString prompt();
    jsbind::DOMString prompt(const jsbind::DOMString& message);
    jsbind::DOMString prompt(const jsbind::DOMString& message, const jsbind::DOMString& default_);
    jsbind::Undefined print();
    jsbind::Undefined postMessage(const jsbind::Any& message);
    jsbind::Undefined postMessage(const jsbind::Any& message, const WindowPostMessageOptions& options);
    bool credentialless() const;
    short orientation() const;
    jsbind::Any onorientationchange() const;
    void onorientationchange(const jsbind::Any& value);
    CookieStore cookieStore() const;
    jsbind::Undefined navigate(const SpatialNavigationDirection& dir);
    Viewport viewport() const;
    MediaQueryList matchMedia(const jsbind::CSSOMString& query);
    Screen screen() const;
    VisualViewport visualViewport() const;
    jsbind::Undefined moveTo(long x, long y);
    jsbind::Undefined moveBy(long x, long y);
    jsbind::Undefined resizeTo(long width, long height);
    jsbind::Undefined resizeBy(long x, long y);
    long innerWidth() const;
    long innerHeight() const;
    double scrollX() const;
    double pageXOffset() const;
    double scrollY() const;
    double pageYOffset() const;
    jsbind::Undefined scroll(double x, double y);
    jsbind::Undefined scrollTo(double x, double y);
    jsbind::Undefined scrollBy(double x, double y);
    long screenX() const;
    long screenLeft() const;
    long screenY() const;
    long screenTop() const;
    long outerWidth() const;
    long outerHeight() const;
    double devicePixelRatio() const;
    CSSStyleDeclaration getComputedStyle(const Element& elt);
    CSSStyleDeclaration getComputedStyle(const Element& elt, const jsbind::CSSOMString& pseudoElt);
    jsbind::Promise<DigitalGoodsService> getDigitalGoodsService(const jsbind::DOMString& serviceProvider);
    DocumentPictureInPicture documentPictureInPicture() const;
    jsbind::Any event() const;
    Fence fence() const;
    jsbind::Promise<jsbind::Sequence<FileSystemFileHandle>> showOpenFilePicker();
    jsbind::Promise<jsbind::Sequence<FileSystemFileHandle>> showOpenFilePicker(const OpenFilePickerOptions& options);
    jsbind::Promise<FileSystemFileHandle> showSaveFilePicker();
    jsbind::Promise<FileSystemFileHandle> showSaveFilePicker(const SaveFilePickerOptions& options);
    jsbind::Promise<FileSystemDirectoryHandle> showDirectoryPicker();
    jsbind::Promise<FileSystemDirectoryHandle> showDirectoryPicker(const DirectoryPickerOptions& options);
    jsbind::Undefined captureEvents();
    jsbind::Undefined releaseEvents();
    External external() const;
    jsbind::Promise<jsbind::Sequence<FontData>> queryLocalFonts();
    jsbind::Promise<jsbind::Sequence<FontData>> queryLocalFonts(const QueryOptions& options);
    jsbind::Any onappinstalled() const;
    void onappinstalled(const jsbind::Any& value);
    jsbind::Any onbeforeinstallprompt() const;
    void onbeforeinstallprompt(const jsbind::Any& value);
    jsbind::Any ondeviceorientation() const;
    void ondeviceorientation(const jsbind::Any& value);
    jsbind::Any ondeviceorientationabsolute() const;
    void ondeviceorientationabsolute(const jsbind::Any& value);
    jsbind::Any ondevicemotion() const;
    void ondevicemotion(const jsbind::Any& value);
    PortalHost portalHost() const;
    unsigned long requestIdleCallback(const jsbind::Function& callback);
    unsigned long requestIdleCallback(const jsbind::Function& callback, const IdleRequestOptions& options);
    jsbind::Undefined cancelIdleCallback(unsigned long handle);
    Selection getSelection();
    SharedStorage sharedStorage() const;
    SpeechSynthesis speechSynthesis() const;
    LaunchQueue launchQueue() const;
    jsbind::Promise<ScreenDetails> getScreenDetails();
    jsbind::Any onbeforexrselect() const;
    void onbeforexrselect(const jsbind::Any& value);
    jsbind::Any onportalactivate() const;
    void onportalactivate(const jsbind::Any& value);
    Crypto crypto() const;
    unsigned long requestAnimationFrame(const jsbind::Function& callback);
    jsbind::Undefined cancelAnimationFrame(unsigned long handle);
    Storage sessionStorage() const;
    Storage localStorage() const;
};

