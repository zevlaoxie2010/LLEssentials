// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "MoveInput.hpp"
#define EXTRA_INCLUDE_PART_SERVERMOVEINPUTHANDLER
#include "Extra/ServerMoveInputHandlerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SERVERMOVEINPUTHANDLER
class ServerMoveInputHandler : public MoveInput {
#include "Extra/ServerMoveInputHandlerAPI.hpp"
public:
    /*0*/ virtual ~ServerMoveInputHandler();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual void unk_vfn_3();
    /*5*/ virtual void unk_vfn_5();
    /*6*/ virtual bool allowPicking(float, float);
    /*8*/ virtual void setAutoJumpingInWater(bool);
    /*9*/ virtual void unk_vfn_9();
    /*10*/ virtual void setSneakDown(bool);
    /*12*/ virtual class Vec3 const& getGazeDirection() const;

public:
    MCAPI void digestPlayerInputPacket(class PlayerAuthInputPacket const&);
};