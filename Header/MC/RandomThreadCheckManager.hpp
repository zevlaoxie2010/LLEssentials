// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_RANDOMTHREADCHECKMANAGER
#include "Extra/RandomThreadCheckManagerAPI.hpp"
#undef EXTRA_INCLUDE_PART_RANDOMTHREADCHECKMANAGER
class RandomThreadCheckManager {
#include "Extra/RandomThreadCheckManagerAPI.hpp"
public:
    /*0*/ virtual ~RandomThreadCheckManager();
    /*1*/ virtual void unk_vfn_1();
    /*2*/ virtual void unk_vfn_2();
    /*3*/ virtual void unk_vfn_3();
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual void unk_vfn_5();
    /*6*/ virtual void onAppResumed();

private:
    MCAPI static std::unique_ptr<class RandomThreadCheckManager> mInstance;
    MCAPI static class std::recursive_mutex mMutex;
};