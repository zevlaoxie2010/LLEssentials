// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "PlayerCommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AutomationPlayerCommandOrigin : public PlayerCommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AUTOMATIONPLAYERCOMMANDORIGIN
public:
    class AutomationPlayerCommandOrigin& operator=(class AutomationPlayerCommandOrigin const&) = delete;
    AutomationPlayerCommandOrigin(class AutomationPlayerCommandOrigin const&) = delete;
    AutomationPlayerCommandOrigin() = delete;
#endif

public:
    /*0*/ virtual ~AutomationPlayerCommandOrigin();
    /*1*/ virtual std::string const& getRequestId() const;
    /*2*/ virtual std::string getName() const;
    /*9*/ virtual enum CommandPermissionLevel getPermissionsLevel() const;
    /*10*/ virtual std::unique_ptr<class CommandOrigin> clone() const;
    /*13*/ virtual bool hasChatPerms() const;
    /*14*/ virtual bool hasTellPerms() const;
    /*17*/ virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /*19*/ virtual class NetworkIdentifier const& getSourceId() const;
    /*23*/ virtual enum CommandOriginType getOriginType() const;
    /*24*/ virtual struct CommandOriginData toCommandOriginData() const;
    /*26*/ virtual void handleCommandOutputCallback(class Json::Value&&) const;
    /*27*/ virtual void updateValues();
    /*29*/ virtual class CompoundTag serialize() const;
    /*30*/ virtual bool isValid() const;
    MCAPI AutomationPlayerCommandOrigin(std::string const&, class Player&);
    MCAPI AutomationPlayerCommandOrigin(struct ActorUniqueID, class Level&, std::string const&, enum CommandPermissionLevel, class NetworkIdentifier const&);

protected:

private:

};