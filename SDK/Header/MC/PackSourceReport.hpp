// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PackSourceReport {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSOURCEREPORT
public:
    class PackSourceReport& operator=(class PackSourceReport const&) = delete;
#endif

public:
    MCAPI PackSourceReport(class PackSourceReport const&);
    MCAPI PackSourceReport();
    MCAPI bool hasErrors() const;
    MCAPI ~PackSourceReport();

protected:

private:

};