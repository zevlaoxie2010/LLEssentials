// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ShipwreckPiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHIPWRECKPIECE
public:
    class ShipwreckPiece& operator=(class ShipwreckPiece const&) = delete;
    ShipwreckPiece(class ShipwreckPiece const&) = delete;
    ShipwreckPiece() = delete;
#endif

public:
    /*0*/ virtual ~ShipwreckPiece();
    /*2*/ virtual class PoolElementStructurePiece* asPoolElement();
    /*3*/ virtual enum StructurePieceType getType() const;
    /*4*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*5*/ virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /*6*/ virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /*10*/ virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    /*12*/ virtual void addHardcodedSpawnAreas(class LevelChunk&) const;

protected:

private:
    MCAPI static std::string const* const STRUCTURE_SHIPWRECK_TYPES;
    MCAPI static class BlockPos _calculateTargetPos(class BlockSource&, class BlockPos, enum Rotation, class BlockPos);
    MCAPI static class BlockPos _calculateTargetPosLegacy(class BlockSource&, class BlockPos, enum Rotation, class BlockPos);

};