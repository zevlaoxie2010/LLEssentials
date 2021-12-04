// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_ENTITYSENSORDEFINITION
#include "Extra/EntitySensorDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART_ENTITYSENSORDEFINITION
class EntitySensorDefinition {
#include "Extra/EntitySensorDefinitionAPI.hpp"

public:
    MCAPI void initialize(class EntityContext&, class EntitySensorComponent&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class EntitySensorDefinition>>&);
};