// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Bedrock.hpp"
#define EXTRA_INCLUDE_PART_SERVERPLAYERBLOCKUSEHANDLER
#include "Extra/ServerPlayerBlockUseHandlerAPI.hpp"
#undef EXTRA_INCLUDE_PART_SERVERPLAYERBLOCKUSEHANDLER
namespace ServerPlayerBlockUseHandler {
#include "Extra/ServerPlayerBlockUseHandlerAPI.hpp"

MCAPI enum ServerPlayerBlockUseHandler::PredictionValidationError getErrorForRejectedRequest(class ServerPlayer&, class ItemStackRequestActionMineBlock const&);
MCAPI void onAbortDestroyBlock(class ServerPlayer&, class BlockPos const&, int);
MCAPI void onBeforeMovementSimulation(class ServerPlayer&, class PlayerBlockActions const&, std::unique_ptr<class ItemStackRequestData>, class Bedrock::NonOwnerPointer<class TextFilteringProcessor>);
MCAPI void onCrackBlock(class ServerPlayer&, class BlockPos const&, int);
MCAPI void onStartDestroyBlock(class ServerPlayer&, class BlockPos const&, int);
MCAPI void onStopDestroyBlock(class ServerPlayer&);
MCAPI void serverTickBlockBreaking(class ServerPlayer&, class BlockPos const&, int);
MCAPI enum ServerPlayerBlockUseHandler::PredictionValidationError validateClientBlockBreakPrediction(class ServerPlayer&, class ItemStackRequestActionMineBlock const*, class BlockPos const&, class ItemStack const&, class ItemStack const&, struct PlayerBlockActionData const*);

} // namespace ServerPlayerBlockUseHandler