// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FillingContainer.hpp"
#define EXTRA_INCLUDE_PART_ENDERCHESTCONTAINER
#include "Extra/EnderChestContainerAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENDERCHESTCONTAINER
class EnderChestContainer : public FillingContainer {
#include "Extra/EnderChestContainerAPI.hpp"
public:
    /*0*/ virtual ~EnderChestContainer();
    /*1*/ virtual void init();
    /*2*/ virtual void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>);
    /*9*/ virtual void setItem(int, class ItemStack const&);
    /*14*/ virtual int getContainerSize() const;
    /*16*/ virtual void startOpen(class Player&);
    /*17*/ virtual void stopOpen(class Player&);
    /*22*/ virtual void unk_vfn_22();
    /*23*/ virtual void unk_vfn_23();
    /*31*/ virtual void unk_vfn_31();

public:
    MCAPI static int const ITEMS_SIZE;
};