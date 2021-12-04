// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_BONUSCHESTFEATURE
#include "Extra/BonusChestFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_BONUSCHESTFEATURE
class BonusChestFeature : public Feature {
#include "Extra/BonusChestFeatureAPI.hpp"
public:
    /*0*/ virtual ~BonusChestFeature();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

private:
    MCAPI bool _place(class BlockSource&, class BlockPos const&, class Random&) const;
};