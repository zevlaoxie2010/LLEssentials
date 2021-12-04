// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_DIRTYTICKSCOUNTER
#include "Extra/DirtyTicksCounterAPI.hpp"
#undef EXTRA_INCLUDE_PART_DIRTYTICKSCOUNTER
struct DirtyTicksCounter {
#include "Extra/DirtyTicksCounterAPI.hpp"

public:
    MCAPI int getTicksSinceLastChange() const;
    MCAPI struct DirtyTicksCounter& operator++();
    MCAPI int getTotalDirtyTicks() const;
    MCAPI void reset();
    MCAPI void touch();

    MCAPI static struct DirtyTicksCounter max();
};