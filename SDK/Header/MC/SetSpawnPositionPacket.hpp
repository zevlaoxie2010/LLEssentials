// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SetSpawnPositionPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETSPAWNPOSITIONPACKET
public:
    class SetSpawnPositionPacket& operator=(class SetSpawnPositionPacket const&) = delete;
    SetSpawnPositionPacket(class SetSpawnPositionPacket const&) = delete;
#endif

public:
    /*0*/ virtual ~SetSpawnPositionPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream&) const;
    /*4*/ virtual bool disallowBatching() const;
    /*5*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&);
    /*
    inline  ~SetSpawnPositionPacket(){
         (SetSpawnPositionPacket::*rv)();
        *((void**)&rv) = dlsym("??1SetSpawnPositionPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI SetSpawnPositionPacket(class AutomaticID<class Dimension, int>, class BlockPos const&, class BlockPos const&);
    MCAPI SetSpawnPositionPacket(enum SpawnPositionType, class AutomaticID<class Dimension, int>, class BlockPos const&);
    MCAPI SetSpawnPositionPacket();

protected:

private:

};