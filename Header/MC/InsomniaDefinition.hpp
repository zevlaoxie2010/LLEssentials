// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_INSOMNIADEFINITION
#include "Extra/InsomniaDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_INSOMNIADEFINITION
class InsomniaDefinition {
#include "Extra/InsomniaDefinitionAPI.hpp"

public:
    MCAPI void initialize(class EntityContext&, class InsomniaComponent&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class InsomniaDefinition>>&);
};