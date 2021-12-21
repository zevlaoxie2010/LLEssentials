// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptServerNetworkEventHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERNETWORKEVENTHANDLER
public:
    class ScriptServerNetworkEventHandler& operator=(class ScriptServerNetworkEventHandler const&) = delete;
    ScriptServerNetworkEventHandler(class ScriptServerNetworkEventHandler const&) = delete;
    ScriptServerNetworkEventHandler() = delete;
#endif

public:
    /*0*/ virtual ~ScriptServerNetworkEventHandler();
    /*1*/ virtual struct GameplayHandlerResult<enum CoordinatorResult> handleChat(struct ChatEvent&);

protected:

private:
    MCAPI bool _handleChat(struct ChatEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptWorldEvents>) const;

};