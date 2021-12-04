// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#define EXTRA_INCLUDE_PART_IFILECHUNKUPLOADER
#include "Extra/IFileChunkUploaderAPI.hpp"
#undef EXTRA_INCLUDE_PART_IFILECHUNKUPLOADER
class IFileChunkUploader {
#include "Extra/IFileChunkUploaderAPI.hpp"
public:
    /*0*/ virtual ~IFileChunkUploader();
    /*1*/ virtual void unk_vfn_1();
    /*2*/ virtual void initFileUploader(std::string const&, struct FileInfo const&, int, class Json::Value const&, class std::function<void(bool)>) = 0;
    /*3*/ virtual void getServerMissingChunks(struct FileInfo const&, class std::function<void(std::vector<struct FileChunkInfo>)>) const;
    /*4*/ virtual void unk_vfn_4();
    /*5*/ virtual void uploadChunk(struct FileInfo const&, struct FileChunkInfo const&, std::vector<unsigned char> const&, class std::function<void(bool)>);
    /*6*/ virtual void uploadStream(struct FileInfo const&, unsigned __int64, std::string const&, class std::function<void(int /*enum IFileChunkUploader::UploadStreamResult*/)>);
    /*7*/ virtual bool canCancelUpload(struct FileInfo const&) const = 0;
    /*8*/ virtual void unk_vfn_8();
    /*9*/ virtual int /*enum UploadError*/ getInitErrorCode() const      = 0;
    /*10*/ virtual float getUploadProgress(struct FileInfo const&) const = 0;
    /*11*/ virtual struct FileChunkInfo getChunkInfo(struct FileInfo const&, int) const;
};