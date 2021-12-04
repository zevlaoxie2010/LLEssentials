// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "TreeHelper.hpp"
#define EXTRA_INCLUDE_PART_RANDOMSPREADTREECANOPY
#include "Extra/RandomSpreadTreeCanopyAPI.hpp"
#undef EXTRA_INCLUDE_PART_RANDOMSPREADTREECANOPY
class RandomSpreadTreeCanopy {
#include "Extra/RandomSpreadTreeCanopyAPI.hpp"
public:
    /*0*/ virtual ~RandomSpreadTreeCanopy();
    /*1*/ virtual class std::optional<class BlockPos> placeCanopy(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&, struct TreeHelper::TreeParams const&, std::vector<class BlockPos> const&) const;
};