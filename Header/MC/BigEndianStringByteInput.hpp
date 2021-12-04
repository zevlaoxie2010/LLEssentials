// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "StringByteInput.hpp"
#define EXTRA_INCLUDE_PART_BIGENDIANSTRINGBYTEINPUT
#include "Extra/BigEndianStringByteInputAPI.hpp"
#undef EXTRA_INCLUDE_PART_BIGENDIANSTRINGBYTEINPUT
class BigEndianStringByteInput : public StringByteInput {
#include "Extra/BigEndianStringByteInputAPI.hpp"
public:
    /*0*/ virtual ~BigEndianStringByteInput();
    /*3*/ virtual float readFloat();
    /*4*/ virtual double readDouble();
    /*6*/ virtual short readShort();
    /*7*/ virtual int readInt();
    /*8*/ virtual __int64 readLongLong();
    /*9*/ virtual void unk_vfn_9();
    /*11*/ virtual bool readBigEndianBytes(void*, unsigned __int64);
};