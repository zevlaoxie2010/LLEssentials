// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_DESCRIPTION
#include "Extra/DescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_DESCRIPTION
struct Description {
#include "Extra/DescriptionAPI.hpp"
public:
    /*0*/ virtual char const* getJsonName() const = 0;
    /*1*/ virtual ~Description();
    /*2*/ virtual void deserializeData(struct DeserializeDataParams);
    /*3*/ virtual void serializeData(class Json::Value&) const = 0;

public:
    MCAPI struct Description* parseDescription(struct DeserializeDataParams);
};