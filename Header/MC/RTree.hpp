// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART_RTREE
#include "Extra/RTreeAPI.hpp"
#undef EXTRA_INCLUDE_PART_RTREE
class RTree {
#include "Extra/RTreeAPI.hpp"

public:
    MCAPI static class std::optional<class RTree> create(std::vector<struct BiomeNoiseTarget> const&);

private:
    MCAPI static class std::optional<class RTree::Node> build(std::vector<class RTree::Node>&&);
};