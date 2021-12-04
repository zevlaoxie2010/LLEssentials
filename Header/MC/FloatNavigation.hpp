// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "PathNavigation.hpp"
#define EXTRA_INCLUDE_PART_FLOATNAVIGATION
#include "Extra/FloatNavigationAPI.hpp"
#undef EXTRA_INCLUDE_PART_FLOATNAVIGATION
class FloatNavigation : public PathNavigation {
#include "Extra/FloatNavigationAPI.hpp"
public:
    /*0*/ virtual ~FloatNavigation();
    /*9*/ virtual void stop(class NavigationComponent&, class Mob&);
    /*10*/ virtual bool travel(class NavigationComponent&, class Mob&, float&, float&, float&);
};