// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_FITDOUBLEXROOM
#include "Extra/FitDoubleXRoomAPI.hpp"
#undef EXTRA_INCLUDE_PART_FITDOUBLEXROOM
class FitDoubleXRoom {
#include "Extra/FitDoubleXRoomAPI.hpp"
public:
    /*0*/ virtual ~FitDoubleXRoom();
    /*1*/ virtual bool fits(class RoomDefinition const&) const;
    /*2*/ virtual std::unique_ptr<class OceanMonumentPiece> create(int&, class std::shared_ptr<class RoomDefinition>, class Random&);
};