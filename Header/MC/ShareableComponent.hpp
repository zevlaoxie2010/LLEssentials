// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_SHAREABLECOMPONENT
#include "Extra/ShareableComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SHAREABLECOMPONENT
class ShareableComponent {
#include "Extra/ShareableComponentAPI.hpp"

public:
    MCAPI int getCountToPickUp(class Actor const&, class ItemActor const&) const;
    MCAPI int getCountToPickUp(class Actor const&, class ItemStack const&) const;
    MCAPI int getSlotToSwap(class Actor&, class ItemActor const&) const;
    MCAPI int hasSurplus(class Actor&, class ItemStack const&, class ItemStack&, bool) const;
    MCAPI int hasSurplus(class Actor&, class ItemStack const&, bool) const;
    MCAPI bool itemBelongsInInventory(class Actor&, class ItemStack const&, bool) const;
    MCAPI int wantsMore(class Actor const&, class ItemStack const&) const;
    MCAPI bool willPickup(class Actor&, class ItemStack const&, bool, bool) const;

private:
    MCAPI int _getItemPriority(class ShareableDefinition const&, class ItemStack const&) const;
    MCAPI bool _shouldReplaceItem(class ItemStack const&, class ItemStack const&, class ShareableDefinition const&, bool) const;

    MCAPI static bool _useLegacySurplusRules(class Level const&);
};