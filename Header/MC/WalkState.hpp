// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "PetSleepWithOwnerState.hpp"
#define EXTRA_INCLUDE_PART_WALKSTATE
#include "Extra/WalkStateAPI.hpp"
#undef EXTRA_INCLUDE_PART_WALKSTATE
class WalkState : public PetSleepWithOwnerState {
#include "Extra/WalkStateAPI.hpp"
public:
    /*0*/ virtual ~WalkState();
    /*1*/ virtual void tick();
    /*2*/ virtual void unk_vfn_2();
};