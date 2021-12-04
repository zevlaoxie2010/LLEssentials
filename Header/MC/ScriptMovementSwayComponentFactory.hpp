// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTMOVEMENTSWAYCOMPONENTFACTORY
#include "Extra/ScriptMovementSwayComponentFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTMOVEMENTSWAYCOMPONENTFACTORY
class ScriptMovementSwayComponentFactory {
#include "Extra/ScriptMovementSwayComponentFactoryAPI.hpp"
public:
    /*0*/ virtual ~ScriptMovementSwayComponentFactory();
    /*1*/ virtual class Scripting::StrongTypedObjectHandle<class ScriptActorComponent> createComponent(class WeakEntityRef, class Scripting::WeakLifetimeScope const&, std::string const&);
    /*2*/ virtual bool hasComponent(class WeakEntityRef) const;
};