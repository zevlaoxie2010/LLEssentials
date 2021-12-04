// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_ITEMSTACKREQUESTACTIONHANDLER
#include "Extra/ItemStackRequestActionHandlerAPI.hpp"
#undef EXTRA_INCLUDE_PART_ITEMSTACKREQUESTACTIONHANDLER
class ItemStackRequestActionHandler {
#include "Extra/ItemStackRequestActionHandlerAPI.hpp"

public:
    MCAPI void _addResponseSlotInfo(struct ItemStackRequestHandlerSlotInfo const&, class ItemStack const&);
    MCAPI void _cacheLegacySlotIdAssignment(enum ContainerEnumName, unsigned char, class TypedClientNetId<struct ItemStackLegacyRequestIdTag, int, 0> const&, class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const&);
    MCAPI void _cacheSlotIdAssigment(class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const&, unsigned char, unsigned char, class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const&);
    MCAPI class std::shared_ptr<class SimpleSparseContainer> _getOrInitSparseContainer(enum ContainerEnumName);
    MCAPI enum ItemStackNetResult _handleRemove(class ItemStackRequestActionTransferBase const&, class ItemStack&, enum ItemStackRequestActionHandler::RemoveType);
    MCAPI void _initScreen(class ItemStackNetManagerScreen&);
    MCAPI struct ItemStackRequestHandlerSlotInfo _validateRequestSlot(struct ItemStackRequestSlotInfo const&, bool, bool);
    MCAPI void addFilteredStrings(class TypedClientNetId<struct ItemStackRequestIdTag, int, 0>, std::vector<std::string>);
    MCAPI class std::tuple<enum ItemStackNetResult, std::vector<struct ItemStackResponseContainerInfo>> endRequest(enum ItemStackNetResult);
    MCAPI std::vector<std::string> const& getFilteredStrings(class TypedClientNetId<struct ItemStackRequestIdTag, int, 0>) const;
    MCAPI class TypedClientNetId<struct ItemStackRequestIdTag, int, 0> const& getRequestId() const;
    MCAPI class ContainerScreenContext const& getScreenContext() const;
    MCAPI enum ItemStackNetResult handleRequestAction(class ItemStackRequestAction const&);

private:
    MCAPI enum ItemStackNetResult _handleDestroy(class ItemStackRequestActionDestroy const&);
    MCAPI enum ItemStackNetResult _handleTransfer(class ItemStackRequestActionTransferBase const&, bool, bool, bool);
    MCAPI class std::optional<struct ItemStackRequestActionHandler::RequestSlotIdAssignment> _resolveSlotIdAssignment(struct ItemStackRequestSlotInfo const&, class TypedRuntimeId<struct ContainerRuntimeIdTag, unsigned int, 0> const&);
    MCAPI struct ItemStackRequestActionHandler::ScreenData* _tryGetCurrentScreenData() const;
};