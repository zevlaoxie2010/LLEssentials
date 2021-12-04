// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#include "LootItemFunction.hpp"
#define EXTRA_INCLUDE_PART_EXPLORATIONMAPFUNCTION
#include "Extra/ExplorationMapFunctionAPI.hpp"
#undef EXTRA_INCLUDE_PART_EXPLORATIONMAPFUNCTION
class ExplorationMapFunction : public LootItemFunction {
#include "Extra/ExplorationMapFunctionAPI.hpp"
public:
    /*0*/ virtual ~ExplorationMapFunction();
    /*1*/ virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
    /*3*/ virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);

public:
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>>&);
};