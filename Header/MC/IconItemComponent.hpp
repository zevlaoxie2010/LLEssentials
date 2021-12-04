// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ICONITEMCOMPONENT
#include "Extra/IconItemComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_ICONITEMCOMPONENT
class IconItemComponent {
#include "Extra/IconItemComponentAPI.hpp"
public:
    /*0*/ virtual ~IconItemComponent();
    /*1*/ virtual bool isNetworkComponent() const;
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual bool isNetworkComponent() const;
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const&);

public:
    MCAPI static void bindType();
    MCAPI static class HashedString const& getIdentifier();
};