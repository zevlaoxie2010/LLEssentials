// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_BASALTPILLARFEATURE
#include "Extra/BasaltPillarFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_BASALTPILLARFEATURE
class BasaltPillarFeature : public Feature {
#include "Extra/BasaltPillarFeatureAPI.hpp"
public:
    /*0*/ virtual ~BasaltPillarFeature();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

private:
    MCAPI bool _growColumn(class BlockSource&, class BlockPos const&, class Random&, float) const;
};