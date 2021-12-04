// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_COMPOSITEPACKSOURCE
#include "Extra/CompositePackSourceAPI.hpp"
#undef EXTRA_INCLUDE_PART_COMPOSITEPACKSOURCE
class CompositePackSource {
#include "Extra/CompositePackSourceAPI.hpp"
public:
    /*0*/ virtual ~CompositePackSource();
    /*1*/ virtual void forEachPackConst(class std::function<void(class Pack const&)>) const;
    /*2*/ virtual void forEachPack(class std::function<void(class Pack&)>);
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual class PackSourceReport load(class IPackManifestFactory&, class IContentKeyProvider const&);
};