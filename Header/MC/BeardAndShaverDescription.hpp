// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BEARDANDSHAVERDESCRIPTION
#include "Extra/BeardAndShaverDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_BEARDANDSHAVERDESCRIPTION
class BeardAndShaverDescription {
#include "Extra/BeardAndShaverDescriptionAPI.hpp"

public:
    MCAPI float calculateContribution(class BlockPos const&) const;
    MCAPI class BeardingDescriptionCache const& getCache() const;
};