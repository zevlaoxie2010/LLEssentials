// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "MineshaftPiece.hpp"
#define EXTRA_INCLUDE_PART_MINESHAFTROOM
#include "Extra/MineshaftRoomAPI.hpp"
#undef EXTRA_INCLUDE_PART_MINESHAFTROOM
class MineshaftRoom : public MineshaftPiece {
#include "Extra/MineshaftRoomAPI.hpp"
public:
    /*0*/ virtual ~MineshaftRoom();
    /*1*/ virtual void moveBoundingBox(int, int, int);
    /*2*/ virtual bool isValid() const;
    /*3*/ virtual int /*enum StructurePieceType*/ getType() const;
    /*4*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*5*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*6*/ virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /*12*/ virtual int getWorldZ(int, int);
};