// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_DAMAGEOVERTIMESYSTEM
#include "Extra/DamageOverTimeSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_DAMAGEOVERTIMESYSTEM
class DamageOverTimeSystem {
#include "Extra/DamageOverTimeSystemAPI.hpp"
public:
    /*0*/ virtual ~DamageOverTimeSystem();
    /*1*/ virtual void unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry&);
};