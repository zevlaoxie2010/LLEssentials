// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "BaseMoveToGoal.hpp"
#define EXTRA_INCLUDE_PART_MOVETOPOIGOAL
#include "Extra/MoveToPOIGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOVETOPOIGOAL
class MoveToPOIGoal : public BaseMoveToGoal {
#include "Extra/MoveToPOIGoalAPI.hpp"
public:
    /*0*/ virtual ~MoveToPOIGoal();
    /*1*/ virtual bool canUse();
    /*3*/ virtual void unk_vfn_3();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string&) const;
    /*8*/ virtual void unk_vfn_8();
    /*9*/ virtual void unk_vfn_9();
    /*11*/ virtual bool isValidTarget(class BlockSource&, class BlockPos const&);
    /*14*/ virtual void _moveToBlock();
    /*15*/ virtual class Vec3 _getTargetPosition() const;
    /*16*/ virtual unsigned __int64 _getRepathTime() const;
    /*17*/ virtual bool getPOI(int /*enum POIType*/);
    /*18*/ virtual class std::weak_ptr<class POIInstance> _getOwnedPOI(int /*enum POIType*/) const;

private:
    MCAPI void _updatePOIBooking();

protected:
    MCAPI bool _canReachPOI(class Vec3 const&, float, bool);
};