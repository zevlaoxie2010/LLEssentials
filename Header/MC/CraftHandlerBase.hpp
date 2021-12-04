// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_CRAFTHANDLERBASE
#include "Extra/CraftHandlerBaseAPI.hpp"
#undef EXTRA_INCLUDE_PART_CRAFTHANDLERBASE
class CraftHandlerBase {
#include "Extra/CraftHandlerBaseAPI.hpp"
public:
    /*0*/ virtual ~CraftHandlerBase();
    /*1*/ virtual int /*enum ItemStackNetResult*/ handleConsumedItem(int /*enum ContainerEnumName*/, unsigned char, class ItemStack const&);
    /*2*/ virtual int /*enum ItemStackNetResult*/ preHandleAction(int /*enum ItemStackRequestActionType*/);
    /*3*/ virtual void endRequestBatch();
    /*4*/ virtual int /*enum ItemStackNetResult*/ _handleCraftAction(class ItemStackRequestActionCraftBase const&) = 0;
    /*5*/ virtual void _postCraftRequest(bool);
    /*6*/ virtual class Recipes const* _getLevelRecipes() const;

protected:
    MCAPI class std::tuple<enum ItemStackNetResult, class Recipe const*> _getRecipeFromNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const&);
    MCAPI class std::shared_ptr<class SimpleSparseContainer> _tryGetSparseContainer(enum ContainerEnumName);
    MCAPI struct ItemStackRequestHandlerSlotInfo _validateRequestSlot(struct ItemStackRequestSlotInfo);
};