// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_MOVEACTORABSOLUTEDATA
#include "Extra/MoveActorAbsoluteDataAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOVEACTORABSOLUTEDATA
class MoveActorAbsoluteData {
#include "Extra/MoveActorAbsoluteDataAPI.hpp"

public:
    MCAPI class MoveActorDeltaData calculateDelta(class MoveActorAbsoluteData const&) const;
    MCAPI class Vec2 getRot() const;
    MCAPI float getYHeadRot() const;
    MCAPI bool isDifferenceSignificant(class MoveActorAbsoluteData const&, class Vec3 const&) const;
    MCAPI void setRot(class Vec2 const&);
    MCAPI void setYHeadRot(float);
};