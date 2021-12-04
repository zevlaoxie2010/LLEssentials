// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_SPLASHPOTIONEFFECTSUBCOMPONENT
#include "Extra/SplashPotionEffectSubcomponentAPI.hpp"
#undef EXTRA_INCLUDE_PART_SPLASHPOTIONEFFECTSUBCOMPONENT
class SplashPotionEffectSubcomponent {
#include "Extra/SplashPotionEffectSubcomponentAPI.hpp"
public:
    /*0*/ virtual ~SplashPotionEffectSubcomponent();
    /*1*/ virtual void readfromJSON(class Json::Value&, class SemVersion const&);
    /*2*/ virtual void writetoJSON(class Json::Value&) const;
    /*3*/ virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    /*4*/ virtual char const* getName();

public:
    MCAPI void applyMobEffects(class MobEffectInstance const&, std::vector<class Actor*> const&, class Actor&, class std::shared_ptr<class Potion const> const&, float, class MobEffect*, class HitResult&, int);
};