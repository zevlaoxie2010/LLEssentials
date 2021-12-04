// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "JsonUtil.hpp"
#define EXTRA_INCLUDE_PART_ONFALLONTRIGGERDESCRIPTION
#include "Extra/OnFallOnTriggerDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART_ONFALLONTRIGGERDESCRIPTION
struct OnFallOnTriggerDescription : public BlockTriggerDescription<struct OnInteractTrigger> {
#include "Extra/OnFallOnTriggerDescriptionAPI.hpp"
public:
    /*0*/ virtual ~OnFallOnTriggerDescription();
    /*1*/ virtual std::string const& getName() const;
    /*2*/ virtual void initializeComponent(class EntityContext&) const;
    /*3*/ virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>>&, class BlockComponentFactory const&) const;
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual void unk_vfn_5();
    /*6*/ virtual void unk_vfn_6();
    /*7*/ virtual void unk_vfn_7();
    /*8*/ virtual void unk_vfn_8();

public:
    MCAPI static std::string const NameID;
};