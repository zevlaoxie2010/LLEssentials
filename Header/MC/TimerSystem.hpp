// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_TIMERSYSTEM
#include "Extra/TimerSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_TIMERSYSTEM
class TimerSystem {
#include "Extra/TimerSystemAPI.hpp"
public:
    /*0*/ virtual ~TimerSystem();
    /*1*/ virtual void unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry&);
};