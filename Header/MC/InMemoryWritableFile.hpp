// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_INMEMORYWRITABLEFILE
#include "Extra/InMemoryWritableFileAPI.hpp"
#undef EXTRA_INCLUDE_PART_INMEMORYWRITABLEFILE
class InMemoryWritableFile {
#include "Extra/InMemoryWritableFileAPI.hpp"
public:
    /*0*/ virtual ~InMemoryWritableFile();
    /*1*/ virtual class leveldb::Status Append(class leveldb::Slice const&);
    /*2*/ virtual class leveldb::Status Close();
};