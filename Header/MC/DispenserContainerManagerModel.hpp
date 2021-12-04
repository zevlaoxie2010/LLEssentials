// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "LevelContainerManagerModel.hpp"
#define EXTRA_INCLUDE_PART_DISPENSERCONTAINERMANAGERMODEL
#include "Extra/DispenserContainerManagerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART_DISPENSERCONTAINERMANAGERMODEL
class DispenserContainerManagerModel : public LevelContainerManagerModel {
#include "Extra/DispenserContainerManagerModelAPI.hpp"
public:
    /*0*/ virtual ~DispenserContainerManagerModel();
    /*1*/ virtual int /*enum ContainerID*/ getContainerId() const;
    /*2*/ virtual void setContainerId(int /*enum ContainerID*/);
    /*3*/ virtual int /*enum ContainerType*/ getContainerType() const;
    /*4*/ virtual void setContainerType(int /*enum ContainerType*/);
    /*9*/ virtual void setData(int, int);
    /*16*/ virtual class ContainerScreenContext _postInit();
};