// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MoveInputHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEINPUTHANDLER
public:
    class MoveInputHandler& operator=(class MoveInputHandler const&) = delete;
    MoveInputHandler(class MoveInputHandler const&) = delete;
    MoveInputHandler() = delete;
#endif

public:
    /*
    inline std::unique_ptr<struct IReplayableActorInput> createSnapshot(){
        std::unique_ptr<struct IReplayableActorInput> (MoveInputHandler::*rv)();
        *((void**)&rv) = dlsym("?createSnapshot@MoveInputHandler@@UEAA?AV?$unique_ptr@UIReplayableActorInput@@U?$default_delete@UIReplayableActorInput@@@std@@@std@@XZ");
        return (this->*rv)();
    }
    inline class Vec3 const& getGazeDirection() const{
        class Vec3 const& (MoveInputHandler::*rv)() const;
        *((void**)&rv) = dlsym("?getGazeDirection@MoveInputHandler@@UEBAAEBVVec3@@XZ");
        return (this->*rv)();
    }
    inline void clearInputState(){
        void (MoveInputHandler::*rv)();
        *((void**)&rv) = dlsym("?clearInputState@MoveInputHandler@@UEAAXXZ");
        return (this->*rv)();
    }
    inline void fillInputPacket(class PlayerAuthInputPacket& a0){
        void (MoveInputHandler::*rv)(class PlayerAuthInputPacket&);
        *((void**)&rv) = dlsym("?fillInputPacket@MoveInputHandler@@UEAAXAEAVPlayerAuthInputPacket@@@Z");
        return (this->*rv)(std::forward<class PlayerAuthInputPacket&>(a0));
    }
    inline bool isChangeHeight() const{
        bool (MoveInputHandler::*rv)() const;
        *((void**)&rv) = dlsym("?isChangeHeight@MoveInputHandler@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline bool isPlayerMoving() const{
        bool (MoveInputHandler::*rv)() const;
        *((void**)&rv) = dlsym("?isPlayerMoving@MoveInputHandler@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline void tick(struct IPlayerMovementProxy& a0){
        void (MoveInputHandler::*rv)(struct IPlayerMovementProxy&);
        *((void**)&rv) = dlsym("?tick@MoveInputHandler@@UEAAXAEAUIPlayerMovementProxy@@@Z");
        return (this->*rv)(std::forward<struct IPlayerMovementProxy&>(a0));
    }
    */

protected:

private:

};