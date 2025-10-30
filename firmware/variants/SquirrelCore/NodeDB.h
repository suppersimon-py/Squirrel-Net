#pragma once
// Dummy NodeDB for standalone SquirrelCore builds

struct NodeInfo {
    int id = 0;
    const char* name = "Local";
};

namespace NodeDB {
    inline NodeInfo getLocalNode() {
        return {0, "Local"};
    }
}
