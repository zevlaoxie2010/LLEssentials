// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct FileChunkInfo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILECHUNKINFO
public:
    struct FileChunkInfo& operator=(struct FileChunkInfo const&) = delete;
    FileChunkInfo(struct FileChunkInfo const&) = delete;
    FileChunkInfo() = delete;
#endif

public:
    MCAPI FileChunkInfo(int, unsigned __int64, unsigned __int64);
    MCAPI bool isValid() const;
    MCAPI int size() const;

protected:

private:

};