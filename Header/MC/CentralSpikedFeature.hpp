// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Feature.hpp"
#define EXTRA_INCLUDE_PART_CENTRALSPIKEDFEATURE
#include "Extra/CentralSpikedFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_CENTRALSPIKEDFEATURE
class CentralSpikedFeature : public Feature {
#include "Extra/CentralSpikedFeatureAPI.hpp"
public:
    /*0*/ virtual ~CentralSpikedFeature();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
};