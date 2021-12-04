// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_TRADEINTERESTGOAL
#include "Extra/TradeInterestGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_TRADEINTERESTGOAL
class TradeInterestGoal {
#include "Extra/TradeInterestGoalAPI.hpp"
public:
    /*0*/ virtual ~TradeInterestGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
};