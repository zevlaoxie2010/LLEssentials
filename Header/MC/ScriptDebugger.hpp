// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTDEBUGGER
#include "Extra/ScriptDebuggerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTDEBUGGER
class ScriptDebugger {
#include "Extra/ScriptDebuggerAPI.hpp"
public:
    /*0*/ virtual bool listen(unsigned short);
    /*1*/ virtual bool connect(std::string const&, unsigned short);
    /*2*/ virtual void close();
    /*3*/ virtual ~ScriptDebugger();

public:
    MCAPI void checkConnections();

private:
    MCAPI class Scripting::IDebuggerController* _createController();
    MCAPI void _releaseController();
};