// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Core.hpp"
#define EXTRA_INCLUDE_PART_PACKACCESSSTRATEGY
#include "Extra/PackAccessStrategyAPI.hpp"
#undef EXTRA_INCLUDE_PART_PACKACCESSSTRATEGY
class PackAccessStrategy {
#include "Extra/PackAccessStrategyAPI.hpp"
public:
    /*0*/ virtual ~PackAccessStrategy();
    /*1*/ virtual unsigned __int64 getPackSize() const                                                                     = 0;
    /*2*/ virtual class ResourceLocation const& getPackLocation() const                                                    = 0;
    /*3*/ virtual std::string const& getPackName() const                                                                   = 0;
    /*4*/ virtual bool isWritable() const                                                                                  = 0;
    /*5*/ virtual void setIsTrusted(bool)                                                                                  = 0;
    /*6*/ virtual bool isTrusted() const                                                                                   = 0;
    /*7*/ virtual bool hasAsset(class Core::Path const&, bool) const                                                       = 0;
    /*8*/ virtual bool hasFolder(class Core::Path const&) const                                                            = 0;
    /*9*/ virtual bool getAsset(class Core::Path const&, std::string&, bool) const                                         = 0;
    /*10*/ virtual bool deleteAsset(class Core::PathBuffer<std::string> const&)                                            = 0;
    /*11*/ virtual bool writeAsset(class Core::Path const&, std::string const&)                                            = 0;
    /*12*/ virtual void forEachIn(class Core::Path const&, class std::function<void(class Core::Path const&)>, bool) const = 0;
    /*13*/ virtual void forEachInAssetSet(class Core::Path const&, class std::function<void(class Core::Path const&)>) const;
    /*14*/ virtual int /*enum PackAccessStrategyType*/ getStrategyType() const = 0;
    /*15*/ virtual class Core::PathBuffer<std::string> const& getSubPath() const;
    /*16*/ virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const&) const = 0;
    /*17*/ virtual int /*enum PackAccessAssetGenerationResult*/ generateAssetSet();
    /*18*/ virtual bool canRecurse() const;
    /*19*/ virtual void unload() = 0;
    /*20*/ virtual bool hasUpgradeFiles() const;
    /*21*/ virtual class ContentIdentity readContentIdentity() const;

public:
    MCAPI bool hasGeneratedAssetSet() const;

    MCAPI static class Core::PathBuffer<std::string> const PACK_IMPORT_LOCK_FILE;

protected:
    MCAPI void _addToAssetSet(class Core::Path const&);
    MCAPI void _deleteFromAssetSet(class Core::PathBuffer<std::string> const&);
    MCAPI bool _isInAssetSet(class Core::Path const&) const;
};