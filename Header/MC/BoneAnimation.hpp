// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_BONEANIMATION
#include "Extra/BoneAnimationAPI.hpp"
#undef EXTRA_INCLUDE_PART_BONEANIMATION
class BoneAnimation {
#include "Extra/BoneAnimationAPI.hpp"

public:
    MCAPI class BoneAnimationChannel& addAnimationChannel(enum BoneTransformType);
    MCAPI void setRotationRelativeMode(enum BoneAnimationRelativeMode);
};