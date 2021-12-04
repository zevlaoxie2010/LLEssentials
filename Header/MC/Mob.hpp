// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Actor.hpp"
#define EXTRA_INCLUDE_PART_MOB
#include "Extra/MobAPI.hpp"
#undef EXTRA_INCLUDE_PART_MOB
class Mob : public Actor {
#include "Extra/MobAPI.hpp"
public:
    /*0*/ virtual bool hasComponent(class HashedString const&) const;
    /*7*/ virtual void outOfWorld();
    /*8*/ virtual void reloadHardcoded(int /*enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*9*/ virtual void reloadHardcodedClient(int /*enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*10*/ virtual void initializeComponents(int /*enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*13*/ virtual void _doInitialMove();
    /*14*/ virtual ~Mob();
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*22*/ virtual void unk_vfn_22();
    /*31*/ virtual float getInterpolatedBodyRot(float) const;
    /*32*/ virtual float getInterpolatedHeadRot(float) const;
    /*33*/ virtual float getInterpolatedBodyYaw(float) const;
    /*34*/ virtual float getYawSpeedInDegreesPerSecond() const;
    /*36*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*41*/ virtual void unk_vfn_41();
    /*42*/ virtual void blockedByShield(class ActorDamageSource const&, class Actor&);
    /*43*/ virtual void teleportTo(class Vec3 const&, bool, int, int);
    /*48*/ virtual void normalTick();
    /*49*/ virtual void baseTick();
    /*50*/ virtual void vehicleTick();
    /*52*/ virtual float getRidingHeight();
    /*53*/ virtual bool startRiding(class Actor&);
    /*54*/ virtual void addPassenger(class Actor&);
    /*61*/ virtual void unk_vfn_61();
    /*68*/ virtual void unk_vfn_68();
    /*78*/ virtual float getCameraOffset() const;
    /*82*/ virtual void unk_vfn_82();
    /*87*/ virtual void unk_vfn_87();
    /*88*/ virtual void playerTouch(class Player&);
    /*91*/ virtual bool isImmobile() const;
    /*93*/ virtual bool isPickable();
    /*94*/ virtual void unk_vfn_94();
    /*95*/ virtual bool isSleeping() const;
    /*96*/ virtual void setSleeping(bool);
    /*97*/ virtual void unk_vfn_97();
    /*99*/ virtual bool isBlocking() const;
    /*100*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*101*/ virtual bool isAlive() const;
    /*104*/ virtual void unk_vfn_104();
    /*105*/ virtual bool isSurfaceMob() const;
    /*106*/ virtual void unk_vfn_106();
    /*107*/ virtual void unk_vfn_107();
    /*108*/ virtual void unk_vfn_108();
    /*111*/ virtual void setTarget(class Actor*);
    /*112*/ virtual class Actor* findAttackTarget();
    /*113*/ virtual bool isValidTarget(class Actor*) const;
    /*114*/ virtual bool attack(class Actor&, int /*enum ActorDamageCause*/ const&);
    /*116*/ virtual void adjustDamageAmount(int&) const;
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*126*/ virtual bool canPowerJump() const;
    /*128*/ virtual bool isJumping() const;
    /*130*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*135*/ virtual int /*enum ActorDamageCause*/ getBlockDamageCause(class Block const&) const;
    /*136*/ virtual void actuallyHurt(int, class ActorDamageSource const&, bool);
    /*137*/ virtual void animateHurt();
    /*138*/ virtual bool doFireHurt(int);
    /*140*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*142*/ virtual void handleEntityEvent(int /*enum ActorEvent*/, int);
    /*143*/ virtual float getPickRadius();
    /*152*/ virtual void awardKillScore(class Actor&, int);
    /*156*/ virtual int /*enum ArmorMaterialType*/ getArmorMaterialTypeInSlot(int /*enum ArmorSlot*/) const;
    /*157*/ virtual int /*enum ArmorTextureType*/ getArmorMaterialTextureTypeInSlot(int /*enum ArmorSlot*/) const;
    /*158*/ virtual float getArmorColorInSlot(int /*enum ArmorSlot*/, int) const;
    /*160*/ virtual void setEquippedSlot(int /*enum EquipmentSlot*/, class ItemStack const&);
    /*171*/ virtual class HashedString const& queryEntityRenderer() const;
    /*172*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*174*/ virtual bool canFreeze() const;
    /*179*/ virtual int getPortalWaitTime() const;
    /*181*/ virtual bool canChangeDimensions() const;
    /*182*/ virtual void unk_vfn_182();
    /*184*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*186*/ virtual void causeFallDamage(float, float, class ActorDamageSource);
    /*193*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*194*/ virtual bool canBePulledIntoVehicle() const;
    /*195*/ virtual bool inCaravan() const;
    /*196*/ virtual void unk_vfn_196();
    /*199*/ virtual bool canSynchronizeNewEntity() const;
    /*200*/ virtual void stopRiding(bool, bool, bool);
    /*203*/ virtual void buildDebugInfo(std::string&) const;
    /*208*/ virtual int getDeathTime() const;
    /*219*/ virtual void swing();
    /*221*/ virtual void unk_vfn_221();
    /*222*/ virtual void unk_vfn_222();
    /*226*/ virtual float getYHeadRot() const;
    /*227*/ virtual bool isWorldBuilder() const;
    /*228*/ virtual void unk_vfn_228();
    /*229*/ virtual bool isAdventure() const;
    /*233*/ virtual bool canDestroyBlock(class Block const&) const;
    /*234*/ virtual void setAuxValue(int);
    /*240*/ virtual void stopSpinAttack();
    /*242*/ virtual void unk_vfn_242();
    /*245*/ virtual void unk_vfn_245();
    /*246*/ virtual void kill();
    /*247*/ virtual void die(class ActorDamageSource const&);
    /*248*/ virtual bool shouldDropDeathLoot() const;
    /*255*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*257*/ virtual void unk_vfn_257();
    /*258*/ virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    /*261*/ virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /*262*/ virtual void addAdditionalSaveData(class CompoundTag&);
    /*263*/ virtual void _playStepSound(class BlockPos const&, class Block const&);
    /*265*/ virtual void unk_vfn_265();
    /*272*/ virtual void _removePassenger(struct ActorUniqueID const&, bool, bool, bool);
    /*273*/ virtual void _onSizeUpdated();
    /*274*/ virtual void unk_vfn_274();
    /*275*/ virtual void knockback(class Actor*, int, float, float, float, float, float);
    /*276*/ virtual void spawnAnim();
    /*277*/ virtual void setSprinting(bool);
    /*278*/ virtual int /*enum LevelSoundEvent*/ getHurtSound();
    /*279*/ virtual int /*enum LevelSoundEvent*/ getDeathSound();
    /*280*/ virtual struct TextureUVCoordinateSet const* getItemInHandIcon(class ItemStack const&, int);
    /*281*/ virtual float getSpeed() const;
    /*282*/ virtual void setSpeed(float);
    /*283*/ virtual float getJumpPower() const;
    /*284*/ virtual bool hurtEffects(class ActorDamageSource const&, int, bool, bool);
    /*285*/ virtual int getMeleeWeaponDamageBonus(class Mob*);
    /*286*/ virtual int getMeleeKnockbackBonus();
    /*287*/ virtual void travel(float, float, float);
    /*288*/ virtual void travel(struct IMobMovementProxy&, float, float, float) const;
    /*289*/ virtual void applyFinalFriction(float, bool);
    /*290*/ virtual void updateWalkAnim();
    /*291*/ virtual void aiStep();
    /*292*/ virtual void aiStep(struct IMobMovementProxy&) const;
    /*293*/ virtual void pushActors();
    /*294*/ virtual void lookAt(class Actor*, float, float);
    /*295*/ virtual bool isLookingAtAnEntity();
    /*296*/ virtual bool checkSpawnRules(bool);
    /*297*/ virtual bool checkSpawnObstruction() const;
    /*298*/ virtual float getAttackAnim(float);
    /*299*/ virtual int getItemUseDuration() const;
    /*300*/ virtual float getItemUseStartupProgress() const;
    /*301*/ virtual float getItemUseIntervalProgress() const;
    /*302*/ virtual int getItemUseIntervalAxis() const;
    /*303*/ virtual int getTimeAlongSwing() const;
    /*304*/ virtual void unk_vfn_304();
    /*305*/ virtual float getMaxHeadXRot();
    /*306*/ virtual bool isAlliedTo(class Mob*);
    /*307*/ virtual bool doHurtTarget(class Actor*, int /*enum ActorDamageCause*/ const&);
    /*308*/ virtual void unk_vfn_308();
    /*309*/ virtual void leaveCaravan();
    /*310*/ virtual void joinCaravan(class Mob*);
    /*311*/ virtual bool hasCaravanTail() const;
    /*312*/ virtual struct ActorUniqueID getCaravanHead() const;
    /*313*/ virtual int getArmorValue();
    /*314*/ virtual float getArmorCoverPercentage() const;
    /*315*/ virtual void hurtArmorSlots(class ActorDamageSource const&, int, class std::bitset<4> const&);
    /*316*/ virtual void setDamagedArmor(int /*enum ArmorSlot*/, class ItemStack const&);
    /*317*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*318*/ virtual void sendArmor(class std::bitset<4> const&);
    /*319*/ virtual void containerChanged(int);
    /*320*/ virtual void updateEquipment();
    /*321*/ virtual int clearEquipment();
    /*322*/ virtual std::vector<int> getAllArmorID() const;
    /*323*/ virtual std::vector<class ItemStack const*> getAllHand() const;
    /*324*/ virtual std::vector<class ItemStack const*> getAllEquipment() const;
    /*325*/ virtual int getArmorTypeHash();
    /*326*/ virtual void dropEquipmentOnDeath(class ActorDamageSource const&, int);
    /*327*/ virtual void dropEquipmentOnDeath();
    /*328*/ virtual void clearVanishEnchantedItemsOnDeath();
    /*329*/ virtual void sendInventory(bool);
    /*330*/ virtual int getDamageAfterMagicAbsorb(class ActorDamageSource const&, int);
    /*331*/ virtual bool createAIGoals();
    /*332*/ virtual void onBorn(class Actor&, class Actor&);
    /*333*/ virtual bool setItemSlot(int /*enum EquipmentSlot*/, class ItemStack const&);
    /*334*/ virtual void setTransitioningSitting(bool);
    /*335*/ virtual void attackAnimation(class Actor*, float);
    /*336*/ virtual int getAttackTime();
    /*337*/ virtual float _getWalkTargetValue(class BlockPos const&);
    /*338*/ virtual bool canExistWhenDisallowMob() const;
    /*339*/ virtual void unk_vfn_339();
    /*340*/ virtual void ascendLadder();
    /*341*/ virtual void ascendBlockByJumping();
    /*342*/ virtual void descendBlockByCrouching();
    /*343*/ virtual void dropContainer();
    /*344*/ virtual std::unique_ptr<class BodyControl> initBodyControl();
    /*345*/ virtual void jumpFromGround();
    /*346*/ virtual void jumpFromGround(struct IMobMovementProxy&) const;
    /*347*/ virtual void updateAi();
    /*348*/ virtual void newServerAiStep();
    /*349*/ virtual void _serverAiMobStep();
    /*350*/ virtual int getDamageAfterEnchantReduction(class ActorDamageSource const&, int);
    /*351*/ virtual int getDamageAfterArmorAbsorb(class ActorDamageSource const&, int);
    /*352*/ virtual void dropBags();
    /*353*/ virtual void tickDeath();
    /*354*/ virtual void updateGliding();
    /*355*/ virtual void unk_vfn_355();
    /*356*/ virtual class AABB _getAdjustedAABBForSpawnCheck(class AABB const&, class Vec3 const&) const;

public:
    MCAPI void addSpeedModifier(class mce::UUID const&, std::string const&, float);
    MCAPI float calcMoveRelativeSpeed(enum TravelType);
    MCAPI bool checkTotemDeathProtection(class ActorDamageSource const&);
    MCAPI void createAI(std::vector<struct GoalDefinition>);
    MCAPI bool discardFriction() const;
    MCAPI void emitJumpPreventedEvent(class BlockPos const&);
    MCAPI void frostWalk();
    MCAPI class BlockPos getBoundOrigin() const;
    MCAPI int getCaravanSize() const;
    MCAPI int getEatCounter() const;
    MCAPI class Mob* getFirstCaravanHead();
    MCAPI float getFlightSpeed();
    MCAPI float getFrictionModifier() const;
    MCAPI int getGlidingTicks() const;
    MCAPI class ItemStack const& getItemSlot(enum EquipmentSlot) const;
    MCAPI float getJumpMultiplier();
    MCAPI struct Mob::JumpPreventionResult getJumpPrevention();
    MCAPI float getMovementComponentCurrentSpeed() const;
    MCAPI int getNoActionTime() const;
    MCAPI int getRollCounter() const;
    MCAPI enum MobSpawnMethod getSpawnMethod();
    MCAPI struct ActorUniqueID getTargetCaptain() const;
    MCAPI enum TravelType getTravelType();
    MCAPI float getYRotA() const;
    MCAPI float getZza() const;
    MCAPI bool hasBoundOrigin() const;
    MCAPI bool isEating() const;
    MCAPI bool isFrostWalking() const;
    MCAPI bool isGliding() const;
    MCAPI bool isLayingEgg() const;
    MCAPI bool isPregnant() const;
    MCAPI bool isRolling() const;
    MCAPI bool isSprinting() const;
    MCAPI bool isTransitioningSitting() const;
    MCAPI void onPlayerDimensionChanged(class Player*, class AutomaticID<class Dimension, int>);
    MCAPI void onPlayerJump(int);
    MCAPI void removeSpeedModifier(class mce::UUID const&);
    MCAPI void resetAttributes();
    MCAPI void resetNoActionTime();
    MCAPI void sendArmorDamageSlot(enum ArmorSlot);
    MCAPI void sendArmorSlot(enum ArmorSlot);
    MCAPI void setEatCounter(int);
    MCAPI void setEating(bool);
    MCAPI void setFlightSpeed(float);
    MCAPI void setFrictionModifier(float);
    MCAPI void setIsLayingEgg(bool);
    MCAPI void setIsPregnant(bool);
    MCAPI void setJumpVelRedux(bool);
    MCAPI void setJumping(bool);
    MCAPI void setMovementComponentCurrentSpeed(float);
    MCAPI void setNaturallySpawned(bool);
    MCAPI void setPassengerLockedBodyRot(float);
    MCAPI void setPassengerRotLimit(float);
    MCAPI void setRolling(bool);
    MCAPI void setSpawnMethod(enum MobSpawnMethod);
    MCAPI void setSpeedModifier(float);
    MCAPI void setSurfaceMob(bool);
    MCAPI void setTargetCaptain(struct ActorUniqueID);
    MCAPI void setXxa(float);
    MCAPI void setYHeadRot(float);
    MCAPI void setYRotA(float);
    MCAPI void setYya(float);
    MCAPI void setZza(float);
    MCAPI bool shouldApplyWaterGravity();
    MCAPI void snapToYBodyRot(float);
    MCAPI void snapToYHeadRot(float);

    MCAPI static int const ABSORPTION_FACTOR_MAX;
    MCAPI static int const ABSORPTION_FACTOR_MIN;
    MCAPI static int const ARMOR_DAMAGE_DIVISOR;
    MCAPI static float const ASCEND_BLOCK_BY_JUMPING_SPEED;
    MCAPI static float const DEFAULT_GRAVITY;
    MCAPI static float const FRICTION_CONSTANT;
    MCAPI static float const FRICTION_CONSTANT_MODIFIED;
    MCAPI static float const FRICTION_MODIFIER;
    MCAPI static float const GLIDING_FALL_RESET_DELTA;
    MCAPI static float const LADDER_CLIMB_SPEED;
    MCAPI static float const PLAYER_SWIMMING_SURFACE_OFFSET;
    MCAPI static int const REMOVE_PASSENGERS_DELAY;
    MCAPI static float const SLOW_FALL_GRAVITY;
    MCAPI static int const TOTAL_ROLL_STEPS;
    MCAPI static void _aiStep(struct IMobMovementProxy&);
    MCAPI static float _calcMoveRelativeSpeed(struct IMobMovementProxy&, enum TravelType);
    MCAPI static void _travel(struct IMobMovementProxy&, float, float, float);
    MCAPI static void _updateMobTravel(struct IMobMovementProxy&);
    MCAPI static float calculateJumpImpulse(struct IMobMovementProxy const&);
    MCAPI static struct Mob::JumpPreventionResult getJumpPrevention(struct IMobMovementProxy const&);
    MCAPI static enum TravelType getTravelType(struct IMobMovementProxy&);
    MCAPI static bool isImmobile(struct IActorMovementProxy const&);
    MCAPI static class Mob* tryGetFromEntity(class EntityContext&, bool);

private:
    MCAPI bool _initHardCodedComponents();
    MCAPI void _updateSprintingState();
    MCAPI void _verifyAttributes();

    MCAPI static bool _tryApplyingLevitation(struct IMobMovementProxy const&, class Vec3&);

protected:
    MCAPI void _doSprintParticleEffect();
    MCAPI void _endJump();
    MCAPI void _registerMobAttributes();
    MCAPI int getCurrentSwingDuration();
    MCAPI void processSoulSpeed();
    MCAPI std::unique_ptr<class ListTag> saveOffhand() const;
    MCAPI void tickEffects();
    MCAPI void updateAttackAnim();
    MCAPI bool updateGlidingDurability();

    MCAPI static int const MAX_INACTIVITY_TIMER;
    MCAPI static void _jumpFromGround(struct IMobMovementProxy&);
};