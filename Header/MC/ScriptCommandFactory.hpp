// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SCRIPTCOMMANDFACTORY
#include "Extra/ScriptCommandFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTCOMMANDFACTORY
class ScriptCommandFactory {
#include "Extra/ScriptCommandFactoryAPI.hpp"

private:
    MCAPI static unsigned int mCurrentId;
    MCAPI static class std::mutex mIdMutex;
};