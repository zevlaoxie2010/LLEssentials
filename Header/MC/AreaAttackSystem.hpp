// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_AREAATTACKSYSTEM
#include "Extra/AreaAttackSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART_AREAATTACKSYSTEM
class AreaAttackSystem {
#include "Extra/AreaAttackSystemAPI.hpp"
public:
    /*0*/ virtual ~AreaAttackSystem();
    /*1*/ virtual void unk_vfn_1();
    /*2*/ virtual void tick(class EntityRegistry&);

private:
    MCAPI void _tickComponent(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class AreaAttackComponent>&);
};