// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "NetworkHandler.hpp"
#define EXTRA_INCLUDE_PART_NPCEVENTCOORDINATOR
#include "Extra/NpcEventCoordinatorAPI.hpp"
#undef EXTRA_INCLUDE_PART_NPCEVENTCOORDINATOR
class NpcEventCoordinator : public NetworkHandler {
#include "Extra/NpcEventCoordinatorAPI.hpp"
public:
    /*0*/ virtual ~NpcEventCoordinator();
    /*1*/ virtual void _onDisable();
    /*3*/ virtual void unk_vfn_3();
    /*11*/ virtual void unk_vfn_11();
    /*12*/ virtual void unk_vfn_12();
    /*16*/ virtual void unk_vfn_16();
};