// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "AttributeScriptActorComponent.hpp"
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTLAVAMOVEMENTCOMPONENT
#include "Extra/ScriptLavaMovementComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTLAVAMOVEMENTCOMPONENT
class ScriptLavaMovementComponent : public AttributeScriptActorComponent {
#include "Extra/ScriptLavaMovementComponentAPI.hpp"
public:
    /*0*/ virtual ~ScriptLavaMovementComponent();

public:
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptLavaMovementComponent> bind(struct Scripting::Version);
};