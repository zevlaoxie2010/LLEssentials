// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_RECTLAYOUTFEATURE
#include "Extra/RectLayoutFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART_RECTLAYOUTFEATURE
class RectLayoutFeature {
#include "Extra/RectLayoutFeatureAPI.hpp"
public:
    /*0*/ virtual ~RectLayoutFeature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;

private:
    MCAPI class std::optional<struct RectLayoutFeature::FeatureArea> _tryPlaceFeature(class Vec2 const&, int, class std::array<class std::array<unsigned char, 16>, 16> const&) const;
};