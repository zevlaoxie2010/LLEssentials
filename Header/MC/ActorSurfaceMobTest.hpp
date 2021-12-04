// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART_ACTORSURFACEMOBTEST
#include "Extra/ActorSurfaceMobTestAPI.hpp"
#undef EXTRA_INCLUDE_PART_ACTORSURFACEMOBTEST
class ActorSurfaceMobTest : public FilterTest {
#include "Extra/ActorSurfaceMobTestAPI.hpp"
public:
    /*0*/ virtual ~ActorSurfaceMobTest();
    /*2*/ virtual bool evaluate(struct FilterContext const&) const;
    /*3*/ virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    /*4*/ virtual class gsl::basic_string_span<char const, -1> getName() const;
};