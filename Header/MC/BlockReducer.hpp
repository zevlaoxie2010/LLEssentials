// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BLOCKREDUCER
#include "Extra/BlockReducerAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLOCKREDUCER
class BlockReducer {
#include "Extra/BlockReducerAPI.hpp"
public:
    /*0*/ virtual ~BlockReducer();
    /*1*/ virtual void registerBlock(class ItemStack const&, std::vector<class ItemStack>&&);

public:
    MCAPI std::vector<class ItemStack> const* getReduction(class ItemStackBase const&) const;
    MCAPI class std::unordered_map<int, std::vector<class ItemStack>, struct std::hash<int>, struct std::equal_to<int>, class std::allocator<struct std::pair<int const, std::vector<class ItemStack>>>> const& getReductionMap() const;
};