// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_APPCONFIGSFACTORY
#include "Extra/AppConfigsFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART_APPCONFIGSFACTORY
class AppConfigsFactory {
#include "Extra/AppConfigsFactoryAPI.hpp"

public:
    MCAPI static std::unique_ptr<class AppConfigs> createAppConfigs();
};