// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DespawnDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESPAWNDEFINITION
public:
    class DespawnDefinition& operator=(class DespawnDefinition const&) = delete;
    DespawnDefinition(class DespawnDefinition const&) = delete;
    DespawnDefinition() = delete;
#endif

public:
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DespawnDefinition> >&);

protected:

private:

};