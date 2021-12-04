// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_FEATURETYPEFACTORY
#include "Extra/FeatureTypeFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART_FEATURETYPEFACTORY
class FeatureTypeFactory {
#include "Extra/FeatureTypeFactoryAPI.hpp"

public:
    MCAPI void processFeature(class IWorldRegistriesProvider&, class ResourcePackManager const&, std::string const&, class Json::Value&, class SemVersion const&) const;
};