#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "FileSystemHandle.hpp"
#include "enums.hpp"

class FileSystemFileHandle;
class FileSystemGetFileOptions;
class FileSystemDirectoryHandle;
class FileSystemGetDirectoryOptions;
class FileSystemRemoveOptions;


class FileSystemGetFileOptions : public emlite::Val {
  explicit FileSystemGetFileOptions(Handle h) noexcept;
public:
    static FileSystemGetFileOptions take_ownership(Handle h) noexcept;
    explicit FileSystemGetFileOptions(const emlite::Val &val) noexcept;
    FileSystemGetFileOptions() noexcept;
    FileSystemGetFileOptions clone() const noexcept;
    bool create() const;
    void create(bool value);
};

class FileSystemGetDirectoryOptions : public emlite::Val {
  explicit FileSystemGetDirectoryOptions(Handle h) noexcept;
public:
    static FileSystemGetDirectoryOptions take_ownership(Handle h) noexcept;
    explicit FileSystemGetDirectoryOptions(const emlite::Val &val) noexcept;
    FileSystemGetDirectoryOptions() noexcept;
    FileSystemGetDirectoryOptions clone() const noexcept;
    bool create() const;
    void create(bool value);
};

class FileSystemRemoveOptions : public emlite::Val {
  explicit FileSystemRemoveOptions(Handle h) noexcept;
public:
    static FileSystemRemoveOptions take_ownership(Handle h) noexcept;
    explicit FileSystemRemoveOptions(const emlite::Val &val) noexcept;
    FileSystemRemoveOptions() noexcept;
    FileSystemRemoveOptions clone() const noexcept;
    bool recursive() const;
    void recursive(bool value);
};

class FileSystemDirectoryHandle : public FileSystemHandle {
    explicit FileSystemDirectoryHandle(Handle h) noexcept;

public:
    explicit FileSystemDirectoryHandle(const emlite::Val &val) noexcept;
    static FileSystemDirectoryHandle take_ownership(Handle h) noexcept;

    FileSystemDirectoryHandle clone() const noexcept;
    jsbind::Promise<FileSystemFileHandle> getFileHandle(const jsbind::USVString& name);
    jsbind::Promise<FileSystemFileHandle> getFileHandle(const jsbind::USVString& name, const FileSystemGetFileOptions& options);
    jsbind::Promise<FileSystemDirectoryHandle> getDirectoryHandle(const jsbind::USVString& name);
    jsbind::Promise<FileSystemDirectoryHandle> getDirectoryHandle(const jsbind::USVString& name, const FileSystemGetDirectoryOptions& options);
    jsbind::Promise<jsbind::Undefined> removeEntry(const jsbind::USVString& name);
    jsbind::Promise<jsbind::Undefined> removeEntry(const jsbind::USVString& name, const FileSystemRemoveOptions& options);
    jsbind::Promise<jsbind::Sequence<jsbind::USVString>> resolve(const FileSystemHandle& possibleDescendant);
};

