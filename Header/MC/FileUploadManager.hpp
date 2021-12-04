// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "Json.hpp"
#include "Core.hpp"
#define EXTRA_INCLUDE_PART_FILEUPLOADMANAGER
#include "Extra/FileUploadManagerAPI.hpp"
#undef EXTRA_INCLUDE_PART_FILEUPLOADMANAGER
class FileUploadManager {
#include "Extra/FileUploadManagerAPI.hpp"
public:
    /*0*/ virtual ~FileUploadManager();
    /*1*/ virtual float getUploadProgress() const;
    /*2*/ virtual void uploadFileToRealmStorage(std::string const&, class Core::Path const&, int, std::string const&) = 0;

public:
    MCAPI void addCallbackQueue(class std::function<void(void)>);
    MCAPI void setFailed(enum UploadError);
    MCAPI void setUseStream(bool);
    MCAPI void update();
    MCAPI void uploadChunk(int);
    MCAPI void uploadFile(std::string const&, class Core::Path const&, bool, class Json::Value const&);

private:
    MCAPI static std::string const BOUNDARY;

protected:
    MCAPI void _generateMultiPartHelper();
    MCAPI void _resumeUpload();
    MCAPI void _uploadChunk(struct FileChunkInfo const&);
    MCAPI void _uploadStream();

    MCAPI static int const CHUNK_UPLOAD_SIZE;
};