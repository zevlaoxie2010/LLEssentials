// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTWORLD
#include "Extra/ScriptWorldAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTWORLD
class ScriptWorld {
#include "Extra/ScriptWorldAPI.hpp"

public:
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptDimension>> getDimension(std::string const&);
    MCAPI std::vector<class Scripting::StrongTypedObjectHandle<class ScriptPlayer>> getPlayers();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptWorld> bind(struct Scripting::Version);
};