// scan.cpp — part of startup-optimizer-ai.

#include "startupoptimizerai/scan.h"

#include <cstdio>

namespace startupoptimizerai {

Scan::Scan(const std::string& config_path)
    : config_path_(config_path) {}

void Scan::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Scan::run() {
    if (verbose_) std::fprintf(stderr, "[startup-optimizer-ai] scan: run\n");
    // core logic lives here
    return true;
}

}  // namespace startupoptimizerai
