// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_LOCATECOMMAND
#include "Extra/LocateCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_LOCATECOMMAND
class LocateCommand {
#include "Extra/LocateCommandAPI.hpp"
public:
    /*0*/ virtual ~LocateCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

public:
    MCAPI static void setup(class CommandRegistry&);
};