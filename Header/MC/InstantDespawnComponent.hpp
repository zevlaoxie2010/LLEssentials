// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_INSTANTDESPAWNCOMPONENT
#include "Extra/InstantDespawnComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_INSTANTDESPAWNCOMPONENT
class InstantDespawnComponent {
#include "Extra/InstantDespawnComponentAPI.hpp"

public:
    MCAPI void onDespawn(class Actor&);
    MCAPI void tick(class Actor&);
};