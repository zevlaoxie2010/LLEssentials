// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#include "FilterTest.hpp"
#define EXTRA_INCLUDE_PART_FILTERTESTHOURLYCLOCK
#include "Extra/FilterTestHourlyClockAPI.hpp"
#undef EXTRA_INCLUDE_PART_FILTERTESTHOURLYCLOCK
class FilterTestHourlyClock : public FilterTest {
#include "Extra/FilterTestHourlyClockAPI.hpp"
public:
    /*0*/ virtual ~FilterTestHourlyClock();
    /*1*/ virtual bool setup(struct FilterTest::Definition const&, struct FilterInputs const&);
    /*2*/ virtual bool evaluate(struct FilterContext const&) const;
    /*3*/ virtual void finalizeParsedValue(class IWorldRegistriesProvider&);
    /*4*/ virtual class gsl::basic_string_span<char const, -1> getName() const;
    /*6*/ virtual class Json::Value _serializeValue() const;
};