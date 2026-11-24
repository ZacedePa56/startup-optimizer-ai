// classify.cpp — part of startup-optimizer-ai.

#include "startupoptimizerai/classify.h"

#include <cstdio>

namespace startupoptimizerai {

Classify::Classify(const std::string& config_path)
    : config_path_(config_path) {}

void Classify::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Classify::run() {
    if (verbose_) std::fprintf(stderr, "[startup-optimizer-ai] classify: run\n");
    // core logic lives here
    return true;
}

}  // namespace startupoptimizerai
