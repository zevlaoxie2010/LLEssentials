// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_BLUEICEFEATURE
#include "Extra/BlueIceFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_BLUEICEFEATURE
class BlueIceFeature : public Feature {
#include "Extra/BlueIceFeatureAPI.hpp"
public:
    /*0*/ virtual ~BlueIceFeature();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
};