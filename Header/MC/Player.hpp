// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Mob.hpp"
#define EXTRA_INCLUDE_PART_PLAYER
#include "Extra/PlayerAPI.hpp"
#undef EXTRA_INCLUDE_PART_PLAYER
class Player : public Mob {
#include "Extra/PlayerAPI.hpp"
public:
    /*8*/ virtual void reloadHardcoded(int /*enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*10*/ virtual void initializeComponents(int /*enum Actor::InitializationMethod*/, class VariantParameterList const&);
    /*12*/ virtual void _serverInitItemStackIds();
    /*14*/ virtual ~Player();
    /*18*/ virtual void remove();
    /*20*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*22*/ virtual void unk_vfn_22();
    /*25*/ virtual class Vec3 getAttachPos(int /*enum ActorLocation*/, float) const;
    /*28*/ virtual void move(class Vec3 const&);
    /*29*/ virtual void move(struct IActorMovementProxy&, class Vec3 const&) const;
    /*36*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*41*/ virtual void unk_vfn_41();
    /*43*/ virtual void teleportTo(class Vec3 const&, bool, int, int);
    /*47*/ virtual std::unique_ptr<class AddActorBasePacket> tryCreateAddActorPacket();
    /*48*/ virtual void normalTick();
    /*50*/ virtual void vehicleTick();
    /*52*/ virtual float getRidingHeight();
    /*61*/ virtual void unk_vfn_61();
    /*65*/ virtual std::string getFormattedNameTag() const;
    /*68*/ virtual void unk_vfn_68();
    /*78*/ virtual float getCameraOffset() const;
    /*82*/ virtual void unk_vfn_82();
    /*87*/ virtual void unk_vfn_87();
    /*88*/ virtual void playerTouch(class Player&);
    /*91*/ virtual bool isImmobile() const;
    /*94*/ virtual void unk_vfn_94();
    /*95*/ virtual bool isSleeping() const;
    /*96*/ virtual void setSleeping(bool);
    /*97*/ virtual void unk_vfn_97();
    /*99*/ virtual bool isBlocking() const;
    /*100*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*104*/ virtual void unk_vfn_104();
    /*106*/ virtual void unk_vfn_106();
    /*107*/ virtual void unk_vfn_107();
    /*108*/ virtual void unk_vfn_108();
    /*112*/ virtual class Actor* findAttackTarget();
    /*113*/ virtual bool isValidTarget(class Actor*) const;
    /*114*/ virtual bool attack(class Actor&, int /*enum ActorDamageCause*/ const&);
    /*116*/ virtual void adjustDamageAmount(int&) const;
    /*120*/ virtual void onTame();
    /*121*/ virtual void onFailedTame();
    /*128*/ virtual bool isJumping() const;
    /*130*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*134*/ virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /*136*/ virtual void actuallyHurt(int, class ActorDamageSource const&, bool);
    /*140*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*141*/ virtual void feed(int);
    /*142*/ virtual void handleEntityEvent(int /*enum ActorEvent*/, int);
    /*143*/ virtual float getPickRadius();
    /*144*/ virtual class HashedString const& getActorRendererId() const;
    /*152*/ virtual void awardKillScore(class Actor&, int);
    /*153*/ virtual void setArmor(int /*enum ArmorSlot*/, class ItemStack const&);
    /*161*/ virtual class ItemStack const& getCarriedItem() const;
    /*162*/ virtual void setCarriedItem(class ItemStack const&);
    /*163*/ virtual void setOffhandSlot(class ItemStack const&);
    /*164*/ virtual class ItemStack const& getEquippedTotem() const;
    /*165*/ virtual bool consumeTotem();
    /*170*/ virtual int /*enum ActorType*/ getEntityTypeId() const;
    /*171*/ virtual class HashedString const& queryEntityRenderer() const;
    /*172*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*174*/ virtual bool canFreeze() const;
    /*178*/ virtual int getPortalCooldown() const;
    /*179*/ virtual int getPortalWaitTime() const;
    /*181*/ virtual bool canChangeDimensions() const;
    /*182*/ virtual void unk_vfn_182();
    /*184*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*191*/ virtual void onSynchedDataUpdate(int);
    /*192*/ virtual bool canAddPassenger(class Actor&) const;
    /*193*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*194*/ virtual bool canBePulledIntoVehicle() const;
    /*196*/ virtual void unk_vfn_196();
    /*198*/ virtual void sendMotionPacketIfNeeded();
    /*199*/ virtual bool canSynchronizeNewEntity() const;
    /*201*/ virtual void startSwimming();
    /*202*/ virtual void stopSwimming();
    /*204*/ virtual int /*enum CommandPermissionLevel*/ getCommandPermissionLevel() const;
    /*217*/ virtual class AnimationComponent& getAnimationComponent();
    /*220*/ virtual void useItem(class ItemStackBase&, int /*enum ItemUseMethod*/, bool);
    /*221*/ virtual void unk_vfn_221();
    /*222*/ virtual void unk_vfn_222();
    /*224*/ virtual float getMapDecorationRotation() const;
    /*227*/ virtual bool isWorldBuilder() const;
    /*228*/ virtual void unk_vfn_228();
    /*229*/ virtual bool isAdventure() const;
    /*230*/ virtual bool add(class ItemStack&);
    /*231*/ virtual bool drop(class ItemStack const&, bool);
    /*233*/ virtual bool canDestroyBlock(class Block const&) const;
    /*234*/ virtual void setAuxValue(int);
    /*235*/ virtual void setSize(float, float);
    /*239*/ virtual void startSpinAttack();
    /*240*/ virtual void stopSpinAttack();
    /*242*/ virtual void unk_vfn_242();
    /*245*/ virtual void unk_vfn_245();
    /*247*/ virtual void die(class ActorDamageSource const&);
    /*248*/ virtual bool shouldDropDeathLoot() const;
    /*257*/ virtual void unk_vfn_257();
    /*258*/ virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    /*261*/ virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /*262*/ virtual void addAdditionalSaveData(class CompoundTag&);
    /*265*/ virtual void unk_vfn_265();
    /*273*/ virtual void _onSizeUpdated();
    /*274*/ virtual void unk_vfn_274();
    /*276*/ virtual void spawnAnim();
    /*281*/ virtual float getSpeed() const;
    /*282*/ virtual void setSpeed(float);
    /*287*/ virtual void travel(float, float, float);
    /*288*/ virtual void travel(struct IMobMovementProxy&, float, float, float) const;
    /*291*/ virtual void aiStep();
    /*292*/ virtual void aiStep(struct IMobMovementProxy&) const;
    /*299*/ virtual int getItemUseDuration() const;
    /*300*/ virtual float getItemUseStartupProgress() const;
    /*301*/ virtual float getItemUseIntervalProgress() const;
    /*304*/ virtual void unk_vfn_304();
    /*306*/ virtual bool isAlliedTo(class Mob*);
    /*308*/ virtual void unk_vfn_308();
    /*317*/ virtual void sendArmorDamage(class std::bitset<4> const&);
    /*323*/ virtual std::vector<class ItemStack const*> getAllHand() const;
    /*324*/ virtual std::vector<class ItemStack const*> getAllEquipment() const;
    /*326*/ virtual void dropEquipmentOnDeath(class ActorDamageSource const&, int);
    /*327*/ virtual void dropEquipmentOnDeath();
    /*328*/ virtual void clearVanishEnchantedItemsOnDeath();
    /*329*/ virtual void sendInventory(bool);
    /*332*/ virtual void onBorn(class Actor&, class Actor&);
    /*336*/ virtual int getAttackTime();
    /*337*/ virtual float _getWalkTargetValue(class BlockPos const&);
    /*338*/ virtual bool canExistWhenDisallowMob() const;
    /*339*/ virtual void unk_vfn_339();
    /*344*/ virtual std::unique_ptr<class BodyControl> initBodyControl();
    /*345*/ virtual void jumpFromGround();
    /*346*/ virtual void jumpFromGround(struct IMobMovementProxy&) const;
    /*347*/ virtual void updateAi();
    /*349*/ virtual void _serverAiMobStep();
    /*354*/ virtual void updateGliding();
    /*355*/ virtual void unk_vfn_355();
    /*357*/ virtual void prepareRegion(class ChunkSource&);
    /*358*/ virtual void destroyRegion();
    /*359*/ virtual void suspendRegion();
    /*360*/ virtual void resendAllChunks();
    /*361*/ virtual void _fireWillChangeDimension();
    /*362*/ virtual void _fireDimensionChanged();
    /*363*/ virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    /*364*/ virtual void tickWorld(struct Tick const&);
    /*365*/ virtual void unk_vfn_365();
    /*366*/ virtual std::vector<class ChunkPos> const& getTickingOffsets() const;
    /*367*/ virtual void moveView();
    /*368*/ virtual void setName(std::string const&);
    /*369*/ virtual void checkMovementStats(class Vec3 const&);
    /*370*/ virtual void unk_vfn_370();
    /*371*/ virtual void unk_vfn_371();
    /*372*/ virtual void respawn();
    /*373*/ virtual void unk_vfn_373();
    /*374*/ virtual void resetPos(bool);
    /*375*/ virtual void unk_vfn_375();
    /*376*/ virtual bool hasResource(int);
    /*377*/ virtual void completeUsingItem();
    /*378*/ virtual void setPermissions(int /*enum CommandPermissionLevel*/);
    /*379*/ virtual void startDestroying();
    /*380*/ virtual void stopDestroying();
    /*381*/ virtual void unk_vfn_381();
    /*382*/ virtual void unk_vfn_382();
    /*383*/ virtual void openTrading(struct ActorUniqueID const&, bool);
    /*384*/ virtual bool canOpenContainerScreen();
    /*385*/ virtual void unk_vfn_385();
    /*386*/ virtual void unk_vfn_386();
    /*387*/ virtual void openInventory();
    /*388*/ virtual void unk_vfn_388();
    /*389*/ virtual void unk_vfn_389();
    /*390*/ virtual void displayTextObjectMessage(class TextObjectRoot const&, std::string const&, std::string const&);
    /*391*/ virtual void displayTextObjectWhisperMessage(class ResolvedTextObject const&, std::string const&, std::string const&);
    /*392*/ virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&);
    /*393*/ virtual int /*enum BedSleepingResult*/ startSleepInBed(class BlockPos const&);
    /*394*/ virtual void stopSleepInBed(bool, bool);
    /*395*/ virtual bool canStartSleepInBed();
    /*396*/ virtual int getSleepTimer() const;
    /*397*/ virtual int getPreviousTickSleepTimer() const;
    /*398*/ virtual void unk_vfn_398();
    /*399*/ virtual void unk_vfn_399();
    /*400*/ virtual bool isHostingPlayer() const;
    /*401*/ virtual bool isLoading() const;
    /*402*/ virtual bool isPlayerInitialized() const;
    /*403*/ virtual void unk_vfn_403();
    /*404*/ virtual void registerTrackedBoss(struct ActorUniqueID);
    /*405*/ virtual void unRegisterTrackedBoss(struct ActorUniqueID);
    /*406*/ virtual void setPlayerGameType(int /*enum GameType*/);
    /*407*/ virtual void initHUDContainerManager();
    /*408*/ virtual void _crit(class Actor&);
    /*409*/ virtual class IMinecraftEventing* getEventing() const;
    /*410*/ virtual void unk_vfn_410();
    /*411*/ virtual void sendEventPacket(class EventPacket&) const;
    /*412*/ virtual void addExperience(int);
    /*413*/ virtual void addLevels(int);
    /*414*/ virtual void setContainerData(class IContainerManager&, int, int)                                                               = 0;
    /*415*/ virtual void slotChanged(class IContainerManager&, class Container&, int, class ItemStack const&, class ItemStack const&, bool) = 0;
    /*416*/ virtual void inventoryChanged(class Container&, int, class ItemStack const&, class ItemStack const&, bool);
    /*417*/ virtual void refreshContainer(class IContainerManager&) = 0;
    /*418*/ virtual void deleteContainerManager();
    /*419*/ virtual void setFieldOfViewModifier(float);
    /*420*/ virtual bool is2DPositionRelevant(class AutomaticID<class Dimension, int>, class BlockPos const&);
    /*421*/ virtual bool isActorRelevant(class Actor const&);
    /*422*/ virtual bool isTeacher() const = 0;
    /*423*/ virtual void onSuspension();
    /*424*/ virtual void onLinkedSlotsChanged();
    /*425*/ virtual void startCooldown(class Item const*);
    /*426*/ virtual int getItemCooldownLeft(class HashedString const&) const;
    /*427*/ virtual int getItemCooldownLeft(unsigned __int64) const;
    /*428*/ virtual int getMaxItemCooldownLeft() const;
    /*429*/ virtual bool isItemInCooldown(class HashedString const&) const;
    /*430*/ virtual void sendInventoryTransaction(class InventoryTransaction const&) const                         = 0;
    /*431*/ virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>) const = 0;
    /*432*/ virtual void sendNetworkPacket(class Packet&) const;
    /*433*/ virtual class PlayerEventCoordinator& getPlayerEventCoordinator() = 0;
    /*434*/ virtual class MoveInputHandler* getMoveInputHandler()             = 0;
    /*435*/ virtual int /*enum InputMode*/ getInputMode() const               = 0;
    /*436*/ virtual int /*enum ClientPlayMode*/ getPlayMode() const           = 0;
    /*437*/ virtual void reportMovementTelemetry(int /*enum MovementEventType*/);
    /*438*/ virtual void unk_vfn_438();
    /*439*/ virtual std::string getXuid() const;
    /*440*/ virtual struct PlayerMovementSettings const& getMovementSettings() const;
    /*441*/ virtual void onMovePlayerPacketNormal(class Vec3 const&, class Vec2 const&, float);
    /*442*/ virtual class std::shared_ptr<class ChunkViewSource> _createChunkSource(class ChunkSource&);

public:
    MCAPI void broadcastPlayerSpawnedMobEvent(enum ActorType, enum MobSpawnMethod);
    MCAPI bool canBeSeenOnMap() const;
    MCAPI bool canDestroy(class Block const&) const;
    MCAPI bool canUseAbility(enum AbilitiesIndex) const;
    MCAPI bool canUseOperatorBlocks() const;
    MCAPI void causeFoodExhaustion(float);
    MCAPI void clearRespawnPosition();
    MCAPI void eat(class ItemStack const&);
    MCAPI void eat(int, float);
    MCAPI bool equippedArmorItemCanBeMoved(class ItemStack const&) const;
    MCAPI void fireDimensionChangedEvent(class AutomaticID<class Dimension, int>);
    MCAPI bool forceAllowEating() const;
    MCAPI class Agent* getAgent() const;
    MCAPI struct ActorUniqueID getAgentID() const;
    MCAPI class Agent* getAgentIfAllowed(bool, struct ActorUniqueID) const;
    MCAPI class BlockPos const& getBedPosition() const;
    MCAPI __int64 getBlockedUsingDamagedShieldTimeStamp() const;
    MCAPI __int64 getBlockedUsingShieldTimeStamp() const;
    MCAPI __int64 getBlockingStartTimeStamp() const;
    MCAPI class Vec3 getCapePos(float);
    MCAPI class std::weak_ptr<class IContainerManager> getContainerManager();
    MCAPI class ItemStack const& getCurrentActiveShield() const;
    MCAPI float getDestroyProgress(class Block const&) const;
    MCAPI float getDestroySpeed(class Block const&) const;
    MCAPI int getDirection() const;
    MCAPI int getEnchantmentSeed() const;
    MCAPI class AutomaticID<class Dimension, int> getExpectedSpawnDimensionId() const;
    MCAPI class BlockPos const& getExpectedSpawnPosition() const;
    MCAPI std::string getInteractText() const;
    MCAPI class Container& getInventory();
    MCAPI class ItemStack const& getItemInUse() const;
    MCAPI std::string getItemInteractText(class Item const&) const;
    MCAPI class ItemStackNetManagerBase const* getItemStackNetManager() const;
    MCAPI class ItemStackNetManagerBase* getItemStackNetManager();
    MCAPI float getLuck();
    MCAPI int getMapIndex();
    MCAPI void getNewEnchantmentSeed();
    MCAPI class AABB getPickupArea() const;
    MCAPI enum BuildPlatform getPlatform() const;
    MCAPI std::string const& getPlatformOnlineId() const;
    MCAPI enum GameType getPlayerGameType() const;
    MCAPI int getPlayerIndex() const;
    MCAPI int getPlayerLevel() const;
    MCAPI enum PlayerPermissionLevel getPlayerPermissionLevel() const;
    MCAPI std::string const& getPlayerSessionId() const;
    MCAPI class ItemStack const& getPlayerUIItem(enum PlayerUISlot);
    MCAPI class BlockPos const& getRespawnAnchorPosition() const;
    MCAPI class ItemStack const& getSelectedItem() const;
    MCAPI int getSelectedItemSlot() const;
    MCAPI class SerializedSkin& getSkin();
    MCAPI class SerializedSkin const& getSkin() const;
    MCAPI float getSleepRotation() const;
    MCAPI class AutomaticID<class Dimension, int> getSpawnDimension() const;
    MCAPI class BlockPos const& getSpawnPosition() const;
    MCAPI class PlayerInventory& getSupplies();
    MCAPI class PlayerInventory const& getSupplies() const;
    MCAPI std::vector<struct ActorUniqueID> const& getTrackedBosses();
    MCAPI enum GameType getUnmappedPlayerGameType() const;
    MCAPI bool getUsedPotion();
    MCAPI int getXpNeededForNextLevel() const;
    MCAPI bool hasBedPosition() const;
    MCAPI bool hasOpenContainer() const;
    MCAPI bool hasOpenContainerOfContainerType(enum ContainerType) const;
    MCAPI bool hasOwnedChunkSource() const;
    MCAPI bool hasResource(class ItemDescriptor const&);
    MCAPI bool hasRespawnAnchorPosition() const;
    MCAPI bool hasRespawnPosition() const;
    MCAPI bool interact(class Actor&, class Vec3 const&);
    MCAPI bool isBouncing() const;
    MCAPI bool isForcedRespawn() const;
    MCAPI bool isHiddenFrom(class Mob&) const;
    MCAPI bool isHungry() const;
    MCAPI bool isHurt();
    MCAPI bool isInCreativeMode() const;
    MCAPI bool isInRaid() const;
    MCAPI bool isRespawningFromTheEnd() const;
    MCAPI bool isSleepingLongEnough() const;
    MCAPI bool isSpawned() const;
    MCAPI bool isSurvival() const;
    MCAPI bool isUsingItem() const;
    MCAPI void moveSpawnView(class Vec3 const&, class AutomaticID<class Dimension, int>);
    MCAPI void recheckSpawnPosition();
    MCAPI void releaseUsingItem();
    MCAPI void resetPlayerLevel();
    MCAPI void resetToDefaultGameMode();
    MCAPI void setAgent(class Agent*);
    MCAPI void setAllPlayersSleeping();
    MCAPI void setBedRespawnPosition(class BlockPos const&);
    MCAPI void setBlockRespawnUntilClientMessage(bool);
    MCAPI void setChunkRadius(unsigned int);
    MCAPI void setContainerManager(class std::shared_ptr<class IContainerManager>);
    MCAPI void setCursorSelectedItem(class ItemStack const&);
    MCAPI void setCursorSelectedItemGroup(class ItemGroup const&);
    MCAPI void setEnchantmentSeed(int);
    MCAPI void setHasSeenCredits(bool);
    MCAPI void setMapIndex(int);
    MCAPI void setPlatformOnlineId(std::string const&);
    MCAPI void setPlayerIndex(int);
    MCAPI void setPlayerUIItem(enum PlayerUISlot, class ItemStack const&);
    MCAPI void setRespawnPosition(class BlockPos const&, class AutomaticID<class Dimension, int>);
    MCAPI void setRespawnPositionCandidate();
    MCAPI void setRespawnReady(class Vec3 const&);
    MCAPI void setSelectedItem(class ItemStack const&);
    MCAPI void setSpawnBlockRespawnPosition(class BlockPos const&, class AutomaticID<class Dimension, int>);
    MCAPI void setUsedPotion(bool);
    MCAPI bool shouldShowCredits() const;
    MCAPI void spawnExperienceOrb(class Vec3 const&, int);
    MCAPI void startGliding();
    MCAPI void startUsingItem(class ItemStack const&, int);
    MCAPI void stopGliding();
    MCAPI void stopUsingItem();
    MCAPI bool take(class Actor&, int, int);
    MCAPI void updateInventoryTransactions();
    MCAPI void updateSkin(class SerializedSkin const&, int);
    MCAPI void updateSpawnChunkView();
    MCAPI void updateTrackedBosses();
    MCAPI void useSelectedItem(enum ItemUseMethod, bool);

    MCAPI static float const DEFAULT_BB_HEIGHT;
    MCAPI static float const DEFAULT_BB_WIDTH;
    MCAPI static float const DEFAULT_FLY_SPEED;
    MCAPI static float const DEFAULT_PLAYER_HEIGHT_OFFSET;
    MCAPI static float const DEFAULT_WALK_SPEED;
    MCAPI static float const DISTANCE_TO_TRANSFORM_EVENT;
    MCAPI static float const DISTANCE_TO_TRAVELLED_EVENT;
    MCAPI static class Attribute const EXHAUSTION;
    MCAPI static class Attribute const EXPERIENCE;
    MCAPI static int const GLIDE_STOP_DELAY;
    MCAPI static class Attribute const HUNGER;
    MCAPI static class Attribute const LEVEL;
    MCAPI static float const PLAYER_ALIVE_HEIGHT;
    MCAPI static float const PLAYER_ALIVE_WIDTH;
    MCAPI static float const PLAYER_DEAD_HEIGHT;
    MCAPI static float const PLAYER_DEAD_WIDTH;
    MCAPI static float const PLAYER_DOWN_SWIM_SPEED;
    MCAPI static float const PLAYER_GLIDING_CAMERA_OFFSET;
    MCAPI static float const PLAYER_SLEEPING_CAMERA_OFFSET;
    MCAPI static float const PLAYER_SLEEPING_HEIGHT;
    MCAPI static float const PLAYER_SLEEPING_WIDTH;
    MCAPI static float const PLAYER_SNEAK_OFFSET;
    MCAPI static float const PLAYER_SWIMMING_CAMERA_OFFSET;
    MCAPI static float const PLAYER_SWIM_BREACH_ANGLE;
    MCAPI static float const PLAYER_SWIM_ENTER_THRESHOLD;
    MCAPI static float const PLAYER_SWIM_FLY_MULTI;
    MCAPI static float const PLAYER_UP_SWIM_SPEED;
    MCAPI static class Attribute const SATURATION;
    MCAPI static unsigned int const SPAWN_CHUNK_LARGE_JUMP;
    MCAPI static unsigned int const SPAWN_CHUNK_RADIUS;
    MCAPI static void _aiStep(struct IPlayerMovementProxy&);
    MCAPI static void _jumpFromGround(struct IPlayerMovementProxy&);
    MCAPI static void _travel(struct IPlayerMovementProxy&, float, float, float);
    MCAPI static bool canJump(struct IPlayerMovementProxy&);
    MCAPI static bool checkAndFixSpawnPosition(class Vec3&, std::vector<class gsl::not_null<class BlockSource*>>, class AABB, bool, bool, bool, bool, bool, bool, short);
    MCAPI static bool checkNeedAutoJump(struct IPlayerMovementProxy*, float, float);
    MCAPI static void goDownInWater(struct IActorMovementProxy&);
    MCAPI static void handleJumpEffects(struct IPlayerMovementProxy&);
    MCAPI static class Player* tryGetFromEntity(class EntityContext&, bool);
    MCAPI static class Player* tryGetFromEntity(class OwnerPtrT<struct EntityRefTraits> const&, bool);

private:
    MCAPI void _addLevels(int);
    MCAPI bool _blockUsingShield(class ActorDamageSource const&, float);
    MCAPI void _ensureSafeSpawnPosition(class Vec3&);
    MCAPI bool _findFallbackSpawnPosition(class Vec3&, std::vector<class gsl::not_null<class BlockSource*>>, unsigned int);
    MCAPI void _handleCarriedItemInteractText();
    MCAPI bool _isChunkSourceLoaded(class Vec3 const&, class BlockSource const&) const;
    MCAPI void _registerElytraLoopSound();
    MCAPI void _sendShieldUpdatePacket(class ShieldItem const&, class ItemStack const&, class ItemStack const&, enum ContainerID, int);
    MCAPI void _tickLevelChunks(struct Tick const&);

protected:
    MCAPI bool _checkAndFixSpawnPosition(class Vec3&, std::vector<class gsl::not_null<class BlockSource*>>, bool, bool, bool, bool, bool) const;
    MCAPI void _chooseSpawnArea();
    MCAPI bool _chooseSpawnPositionWithinArea();
    MCAPI void _registerPlayerAttributes();
    MCAPI void _updateInteraction();
    MCAPI bool _validateSpawnPositionAvailability(class Vec3 const&, class BlockSource*, class Vec3 const* const) const;
    MCAPI bool checkBed(class BlockSource*, class Vec3 const* const);
    MCAPI bool checkSpawnBlock(class BlockSource const&) const;
};