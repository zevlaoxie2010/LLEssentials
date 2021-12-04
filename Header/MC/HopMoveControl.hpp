// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "MoveControl.hpp"
#define EXTRA_INCLUDE_PART_HOPMOVECONTROL
#include "Extra/HopMoveControlAPI.hpp"
#undef EXTRA_INCLUDE_PART_HOPMOVECONTROL
class HopMoveControl : public MoveControl {
#include "Extra/HopMoveControlAPI.hpp"
public:
    /*0*/ virtual ~HopMoveControl();
    /*2*/ virtual void tick(class MoveControlComponent&, class Mob&);
    /*3*/ virtual void setWantedPosition(class MoveControlComponent&, class Mob&, class Vec3 const&, float);
};