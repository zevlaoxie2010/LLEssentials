// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "StructureStart.hpp"
#define EXTRA_INCLUDE_PART_SCATTEREDFEATURESTART
#include "Extra/ScatteredFeatureStartAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCATTEREDFEATURESTART
class ScatteredFeatureStart : public StructureStart {
#include "Extra/ScatteredFeatureStartAPI.hpp"
public:
    /*0*/ virtual ~ScatteredFeatureStart();
    /*2*/ virtual bool isValid() const;
    /*3*/ virtual int /*enum StructureFeatureType*/ getType() const;
};