// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_NULLLOGGER
#include "Extra/NullLoggerAPI.hpp"
#undef EXTRA_INCLUDE_PART_NULLLOGGER
class NullLogger {
#include "Extra/NullLoggerAPI.hpp"
public:
    /*0*/ virtual ~NullLogger();
    /*1*/ virtual void Logv(char const*, char*);

public:
    MCAPI static class NullLogger instance;
};