// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_STRUCTUREPOOLBLOCKPREDICATEBLOCKMATCHRANDOM
#include "Extra/StructurePoolBlockPredicateBlockMatchRandomAPI.hpp"
#undef EXTRA_INCLUDE_PART_STRUCTUREPOOLBLOCKPREDICATEBLOCKMATCHRANDOM
class StructurePoolBlockPredicateBlockMatchRandom {
#include "Extra/StructurePoolBlockPredicateBlockMatchRandomAPI.hpp"
public:
    /*0*/ virtual ~StructurePoolBlockPredicateBlockMatchRandom();
    /*1*/ virtual bool test(class Block const&, class Randomize&) const;
    /*2*/ virtual bool test(class BlockPos const&, class BlockPos const&, class Randomize&) const;
};