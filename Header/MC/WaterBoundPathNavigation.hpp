// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "PathNavigation.hpp"
#define EXTRA_INCLUDE_PART_WATERBOUNDPATHNAVIGATION
#include "Extra/WaterBoundPathNavigationAPI.hpp"
#undef EXTRA_INCLUDE_PART_WATERBOUNDPATHNAVIGATION
class WaterBoundPathNavigation : public PathNavigation {
#include "Extra/WaterBoundPathNavigationAPI.hpp"
public:
    /*0*/ virtual ~WaterBoundPathNavigation();
    /*1*/ virtual void initializeInternal(class Mob&, struct NavigationDescription*);
    /*2*/ virtual void tick(class NavigationComponent&, class Mob&);
    /*3*/ virtual class Vec3 getTempMobPos(class Mob const&) const;
    /*9*/ virtual void stop(class NavigationComponent&, class Mob&);
    /*10*/ virtual bool travel(class NavigationComponent&, class Mob&, float&, float&, float&);
    /*11*/ virtual bool canUpdatePath(class Mob const&) const;
    /*12*/ virtual void updatePath(class NavigationComponent&, class Mob&);
};