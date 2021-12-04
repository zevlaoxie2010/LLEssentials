// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "CraftHandlerBase.hpp"
#define EXTRA_INCLUDE_PART_CRAFTHANDLERLOOM
#include "Extra/CraftHandlerLoomAPI.hpp"
#undef EXTRA_INCLUDE_PART_CRAFTHANDLERLOOM
class CraftHandlerLoom : public CraftHandlerBase {
#include "Extra/CraftHandlerLoomAPI.hpp"
public:
    /*0*/ virtual ~CraftHandlerLoom();
    /*2*/ virtual int /*enum ItemStackNetResult*/ preHandleAction(int /*enum ItemStackRequestActionType*/);
    /*3*/ virtual void endRequestBatch();
    /*4*/ virtual int /*enum ItemStackNetResult*/ _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    /*5*/ virtual void _postCraftRequest(bool);
    /*6*/ virtual class Recipes const* _getLevelRecipes() const;
};