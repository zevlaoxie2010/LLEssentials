// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_BREAKBLOCKSDESCRIPTION
#include "Extra/BreakBlocksDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_BREAKBLOCKSDESCRIPTION
class BreakBlocksDescription {
#include "Extra/BreakBlocksDescriptionAPI.hpp"
public:
    /*0*/ virtual char const* getJsonName() const;
    /*1*/ virtual ~BreakBlocksDescription();
    /*2*/ virtual void deserializeData(struct DeserializeDataParams);
    /*3*/ virtual void serializeData(class Json::Value&) const;
};