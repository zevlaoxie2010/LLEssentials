// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_RESOURCEUTIL
#include "Extra/ResourceUtilAPI.hpp"
#undef EXTRA_INCLUDE_PART_RESOURCEUTIL
class ResourceUtil {
#include "Extra/ResourceUtilAPI.hpp"

public:
    MCAPI static enum ResourceFileSystem pathFromString(class gsl::basic_string_span<char const, -1>);
    MCAPI static class gsl::basic_string_span<char const, -1> stringFromPath(enum ResourceFileSystem);
};