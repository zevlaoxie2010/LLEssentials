// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_WSASTARTUPSINGLETON
#include "Extra/WSAStartupSingletonAPI.hpp"
#undef EXTRA_INCLUDE_PART_WSASTARTUPSINGLETON
class WSAStartupSingleton {
#include "Extra/WSAStartupSingletonAPI.hpp"

public:
    MCAPI static void AddRef();
    MCAPI static void Deref();

protected:
    MCAPI static int refCount;
};