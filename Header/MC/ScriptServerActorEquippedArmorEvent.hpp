// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ScriptApi.hpp"
#define EXTRA_INCLUDE_PART_SCRIPTSERVERACTOREQUIPPEDARMOREVENT
#include "Extra/ScriptServerActorEquippedArmorEventAPI.hpp"
#undef EXTRA_INCLUDE_PART_SCRIPTSERVERACTOREQUIPPEDARMOREVENT
class ScriptServerActorEquippedArmorEvent {
#include "Extra/ScriptServerActorEquippedArmorEventAPI.hpp"
public:
    /*0*/ virtual ~ScriptServerActorEquippedArmorEvent();
    /*1*/ virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&) const;

public:
    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setItemStack(class ItemInstance const&);
    MCAPI void setSlot(enum ArmorSlot);

private:
    MCAPI static class HashedString const mHash;
};