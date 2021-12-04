// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_TELEPORTCOMMAND
#include "Extra/TeleportCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART_TELEPORTCOMMAND
class TeleportCommand {
#include "Extra/TeleportCommandAPI.hpp"
public:
    /*0*/ virtual ~TeleportCommand();
    /*1*/ virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

public:
    MCAPI static void applyTarget(class Actor&, class TeleportTarget);
    MCAPI static class TeleportTarget computeTarget(class Actor&, class Vec3, class Vec3*, class AutomaticID<class Dimension, int>, class RelativeFloat, class RelativeFloat, int);
    MCAPI static void setup(class CommandRegistry&);

private:
    MCAPI enum TeleportCommand::FacingResult getFacingDirection(class CommandOrigin const&, class CommandOutput&, class Vec3&, class Actor*) const;

    MCAPI static enum TeleportCommand::TeleportAnalysis actorToLocationTeleportAnalysis(class CommandOrigin const&, class CommandArea const&, class CommandArea&, class Actor const&, class Vec3);
    MCAPI static std::unique_ptr<class CommandArea> getCommandAreaForTargets(class CommandOrigin const&, class CommandSelectorResults<class Actor> const&, class Vec3, bool);
    MCAPI static class AABB getSafetyAABB(class Actor const&, class Vec3);
};