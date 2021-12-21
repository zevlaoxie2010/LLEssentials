// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Monster.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Creeper : public Monster {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREEPER
public:
    class Creeper& operator=(class Creeper const&) = delete;
    Creeper(class Creeper const&) = delete;
    Creeper() = delete;
#endif

public:
    /*0*/ virtual ~Creeper();
    /*1*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*2*/ virtual void __unk_vfn_0();
    /*3*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*4*/ virtual void __unk_vfn_1();
    /*5*/ virtual void normalTick();
    /*6*/ virtual float getRidingHeight();
    /*7*/ virtual void __unk_vfn_2();
    /*8*/ virtual void __unk_vfn_3();
    /*9*/ virtual float getCameraOffset() const;
    /*10*/ virtual void __unk_vfn_4();
    /*11*/ virtual void __unk_vfn_5();
    /*12*/ virtual void playerTouch(class Player&);
    /*13*/ virtual void __unk_vfn_6();
    /*14*/ virtual void __unk_vfn_7();
    /*15*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*16*/ virtual void __unk_vfn_8();
    /*17*/ virtual void __unk_vfn_9();
    /*18*/ virtual void __unk_vfn_10();
    /*19*/ virtual void __unk_vfn_11();
    /*20*/ virtual bool isValidTarget(class Actor*) const;
    /*21*/ virtual void adjustDamageAmount(int&) const;
    /*22*/ virtual void onTame();
    /*23*/ virtual void onFailedTame();
    /*24*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*25*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*26*/ virtual float getPickRadius();
    /*27*/ virtual void awardKillScore(class Actor&, int);
    /*28*/ virtual class HashedString const& queryEntityRenderer() const;
    /*29*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*30*/ virtual int getPortalWaitTime() const;
    /*31*/ virtual bool canChangeDimensions() const;
    /*32*/ virtual void __unk_vfn_12();
    /*33*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*34*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*35*/ virtual bool canBePulledIntoVehicle() const;
    /*36*/ virtual void __unk_vfn_13();
    /*37*/ virtual bool canSynchronizeNewEntity() const;
    /*38*/ virtual void __unk_vfn_14();
    /*39*/ virtual void __unk_vfn_15();
    /*40*/ virtual bool isWorldBuilder() const;
    /*41*/ virtual void __unk_vfn_16();
    /*42*/ virtual bool isAdventure() const;
    /*43*/ virtual bool canDestroyBlock(class Block const&) const;
    /*44*/ virtual void setAuxValue(int);
    /*45*/ virtual void stopSpinAttack();
    /*46*/ virtual void __unk_vfn_17();
    /*47*/ virtual void __unk_vfn_18();
    /*48*/ virtual void die(class ActorDamageSource const&);
    /*49*/ virtual void __unk_vfn_19();
    /*50*/ virtual void __unk_vfn_20();
    /*51*/ virtual void _onSizeUpdated();
    /*52*/ virtual void __unk_vfn_21();
    /*53*/ virtual void spawnAnim();
    /*54*/ virtual void aiStep();
    /*55*/ virtual bool checkSpawnRules(bool);
    /*56*/ virtual int getItemUseDuration() const;
    /*57*/ virtual float getItemUseStartupProgress() const;
    /*58*/ virtual float getItemUseIntervalProgress() const;
    /*59*/ virtual void __unk_vfn_22();
    /*60*/ virtual bool isAlliedTo(class Mob*);
    /*61*/ virtual void __unk_vfn_23();
    /*62*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*63*/ virtual void onBorn(class Actor&, class Actor&);
    /*64*/ virtual int getAttackTime();
    /*65*/ virtual void __unk_vfn_24();
    /*66*/ virtual void _serverAiMobStep();
    /*67*/ virtual void __unk_vfn_25();
    /*
    inline bool useNewAi() const{
        bool (Creeper::*rv)() const;
        *((void**)&rv) = dlsym("?useNewAi@Creeper@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI Creeper(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class OwnerPtrT<struct EntityRefTraits> const&);
    MCAPI int getSwellDir();
    MCAPI float getSwelling(float) const;

protected:

private:
    MCAPI void _setSwellDir(int);

};