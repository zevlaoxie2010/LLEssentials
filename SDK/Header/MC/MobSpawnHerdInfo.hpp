// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

struct MobSpawnHerdInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBSPAWNHERDINFO
public:
    struct MobSpawnHerdInfo& operator=(struct MobSpawnHerdInfo const&) = delete;
    MobSpawnHerdInfo(struct MobSpawnHerdInfo const&) = delete;
    MobSpawnHerdInfo() = delete;
#endif

public:
    MCAPI MobSpawnHerdInfo(unsigned int, unsigned int, std::string const&, unsigned int, std::string const&, unsigned int);
    MCAPI ~MobSpawnHerdInfo();

protected:

private:

};