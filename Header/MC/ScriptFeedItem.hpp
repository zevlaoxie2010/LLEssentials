// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Scripting.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTFEEDITEM
#include "Extra/ScriptFeedItemAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTFEEDITEM
class ScriptFeedItem {
#include "Extra/ScriptFeedItemAPI.hpp"

public:
    MCAPI static class Scripting::ClassBindingBuilder<struct FeedItem> bind(struct Scripting::Version);
};