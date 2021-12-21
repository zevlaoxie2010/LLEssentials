// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BalloonableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BALLOONABLECOMPONENT
public:
    class BalloonableComponent& operator=(class BalloonableComponent const&) = delete;
    BalloonableComponent(class BalloonableComponent const&) = delete;
    BalloonableComponent() = delete;
#endif

public:
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);

protected:

private:
    MCAPI bool attach(class Actor&, class Actor&, class ItemStack&);

};