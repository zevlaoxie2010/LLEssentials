// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BALLOONABLECOMPONENT
#include "Extra/BalloonableComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_BALLOONABLECOMPONENT
class BalloonableComponent {
#include "Extra/BalloonableComponentAPI.hpp"

public:
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);

private:
    MCAPI bool attach(class Actor&, class Actor&, class ItemStack&);
};