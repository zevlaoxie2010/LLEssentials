// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BLOCKCOLLISIONCOMPONENT
#include "Extra/BlockCollisionComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKCOLLISIONCOMPONENT
struct BlockCollisionComponent {
#include "Extra/BlockCollisionComponentAPI.hpp"

public:
    MCAPI class AABB const& getTransformedAABB() const;
};