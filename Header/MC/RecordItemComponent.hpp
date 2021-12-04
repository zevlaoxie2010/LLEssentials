// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_RECORDITEMCOMPONENT
#include "Extra/RecordItemComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_RECORDITEMCOMPONENT
class RecordItemComponent {
#include "Extra/RecordItemComponentAPI.hpp"
public:
    /*0*/ virtual ~RecordItemComponent();
    /*1*/ virtual bool isNetworkComponent() const;
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual bool isNetworkComponent() const;
    /*5*/ virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /*6*/ virtual void initializeFromNetwork(class CompoundTag const&);

public:
    MCAPI std::string getAlias() const;
    MCAPI int getComparatorSignal() const;
    MCAPI float getDuration() const;
    MCAPI enum LevelSoundEvent getSound() const;

    MCAPI static class HashedString const& getIdentifier();
};