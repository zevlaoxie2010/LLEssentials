// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SELECTORBEHAVIORNODE
#include "Extra/SelectorBehaviorNodeAPI.hpp"
#undef EXTRA_INCLUDE_PART_SELECTORBEHAVIORNODE
class SelectorBehaviorNode {
#include "Extra/SelectorBehaviorNodeAPI.hpp"
public:
    /*0*/ virtual ~SelectorBehaviorNode();
    /*1*/ virtual int /*enum BehaviorStatus*/ tick(class Actor&);
    /*2*/ virtual void initializeFromDefinition(class Actor&);
};