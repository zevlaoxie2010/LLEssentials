// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_WORLDTEMPLATEPACKSOURCE
#include "Extra/WorldTemplatePackSourceAPI.hpp"
#undef EXTRA_INCLUDE_PART_WORLDTEMPLATEPACKSOURCE
class WorldTemplatePackSource {
#include "Extra/WorldTemplatePackSourceAPI.hpp"
public:
    /*0*/ virtual ~WorldTemplatePackSource();
    /*1*/ virtual void unk_vfn_1();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual class PackSourceReport load(class IPackManifestFactory&, class IContentKeyProvider const&);
};