// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_INPACKAGEPACKSOURCE
#include "Extra/InPackagePackSourceAPI.hpp"
#undef EXTRA_INCLUDE_PART_INPACKAGEPACKSOURCE
class InPackagePackSource {
#include "Extra/InPackagePackSourceAPI.hpp"
public:
    /*0*/ virtual ~InPackagePackSource();
    /*1*/ virtual void unk_vfn_1();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual int /*enum PackOrigin*/ getPackOrigin() const;
    /*4*/ virtual int /*enum PackType*/ getPackType() const;
    /*5*/ virtual class PackSourceReport load(class IPackManifestFactory&, class IContentKeyProvider const&);
};