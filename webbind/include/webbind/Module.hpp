#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ModuleExportDescriptor;
class Module;
class ModuleImportDescriptor;


class ModuleExportDescriptor : public emlite::Val {
  explicit ModuleExportDescriptor(Handle h) noexcept;
public:
    static ModuleExportDescriptor take_ownership(Handle h) noexcept;
    explicit ModuleExportDescriptor(const emlite::Val &val) noexcept;
    ModuleExportDescriptor() noexcept;
    ModuleExportDescriptor clone() const noexcept;
    jsbind::String name() const;
    void name(const jsbind::String& value);
    ImportExportKind kind() const;
    void kind(const ImportExportKind& value);
};

class ModuleImportDescriptor : public emlite::Val {
  explicit ModuleImportDescriptor(Handle h) noexcept;
public:
    static ModuleImportDescriptor take_ownership(Handle h) noexcept;
    explicit ModuleImportDescriptor(const emlite::Val &val) noexcept;
    ModuleImportDescriptor() noexcept;
    ModuleImportDescriptor clone() const noexcept;
    jsbind::String module_() const;
    void module_(const jsbind::String& value);
    jsbind::String name() const;
    void name(const jsbind::String& value);
    ImportExportKind kind() const;
    void kind(const ImportExportKind& value);
};

class Module : public emlite::Val {
    explicit Module(Handle h) noexcept;

public:
    explicit Module(const emlite::Val &val) noexcept;
    static Module take_ownership(Handle h) noexcept;

    Module clone() const noexcept;
    Module(const jsbind::Any& bytes);
    static jsbind::TypedArray<ModuleExportDescriptor> exports(const Module& moduleObject);
    static jsbind::TypedArray<ModuleImportDescriptor> imports(const Module& moduleObject);
    static jsbind::TypedArray<jsbind::ArrayBuffer> customSections(const Module& moduleObject, const jsbind::String& sectionName);
};

