// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_CLONECOMMAND
#include "Extra/CloneCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_CLONECOMMAND
class CloneCommand {
#include "Extra/CloneCommandAPI.hpp"
public:
    /*0*/ virtual ~CloneCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

public:
    MCAPI static void setup(class CommandRegistry&);

private:
    MCAPI static void convertClonedTag(class CompoundTag&, class BlockActor const&, class BlockPos const&);
};