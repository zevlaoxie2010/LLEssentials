// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTEFFECTS
#include "Extra/ScriptEffectsAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTEFFECTS
class ScriptEffects {
#include "Extra/ScriptEffectsAPI.hpp"

public:
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptEffectType> get(class Scripting::WeakLifetimeScope&, std::string const&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptEffects> bind(struct Scripting::Version);
};