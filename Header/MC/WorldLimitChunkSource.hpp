// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#include "ChunkSource.hpp"
#define EXTRA_INCLUDE_PART_WORLDLIMITCHUNKSOURCE
#include "Extra/WorldLimitChunkSourceAPI.hpp"
#undef EXTRA_INCLUDE_PART_WORLDLIMITCHUNKSOURCE
class WorldLimitChunkSource : public ChunkSource {
#include "Extra/WorldLimitChunkSourceAPI.hpp"
public:
    /*0*/ virtual ~WorldLimitChunkSource();
    /*3*/ virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const&);
    /*4*/ virtual class std::shared_ptr<class LevelChunk> getRandomChunk(class Random&);
    /*6*/ virtual class std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const&, int /*enum ChunkSource::LoadMode*/, bool);
    /*8*/ virtual bool postProcess(class ChunkViewSource&);
    /*9*/ virtual void checkAndReplaceChunk(class ChunkViewSource&, class LevelChunk&);
    /*18*/ virtual bool isWithinWorldLimit(class ChunkPos const&) const;
    /*19*/ virtual class std::unordered_map<class ChunkPos, class std::weak_ptr<class LevelChunk>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, class std::weak_ptr<class LevelChunk>>>> const* getChunkMap();
    /*21*/ virtual void clearDeletedEntities();
    /*22*/ virtual bool canCreateViews() const;
};