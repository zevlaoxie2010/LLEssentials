// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BEHAVIORNODE
#include "Extra/BehaviorNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART_BEHAVIORNODE
class BehaviorNode {
#include "Extra/BehaviorNodeAPI.hpp"
public:
    /*0*/ virtual ~BehaviorNode();
    /*1*/ virtual void unk_vfn_1();
    /*2*/ virtual void initializeFromDefinition(class Actor&);

public:
    MCAPI class BehaviorData& getBehaviorData();
};