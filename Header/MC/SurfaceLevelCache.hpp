// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SURFACELEVELCACHE
#include "Extra/SurfaceLevelCacheAPI.hpp"
#undef EXTRA_INCLUDE_PART_SURFACELEVELCACHE
class SurfaceLevelCache {
#include "Extra/SurfaceLevelCacheAPI.hpp"
public:
    /*0*/ virtual ~SurfaceLevelCache();
    /*1*/ virtual class std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const;
};