// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_WITHERBOSSSPAWNUTILITIES
#include "Extra/WitherBossSpawnUtilitiesAPI.hpp"
#undef EXTRA_INCLUDE_PART_WITHERBOSSSPAWNUTILITIES
namespace WitherBossSpawnUtilities {
#include "Extra/WitherBossSpawnUtilitiesAPI.hpp"

MCAPI std::unique_ptr<class BlockPatternBuilder> createWitherBuilder(class BlockSource&);
MCAPI std::unique_ptr<class BlockPatternBuilder> createWitherBuilderForTShape(class BlockSource&);

} // namespace WitherBossSpawnUtilities