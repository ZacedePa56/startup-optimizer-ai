// main.cpp — entry point. Wires config and subsystems together.

#include "startupoptimizerai/settings.h"
#include "startupoptimizerai/scan.h"
#include "startupoptimizerai/classify.h"
#include "startupoptimizerai/tune.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    startupoptimizerai::Settings settings = startupoptimizerai::Settings::load_default();
    startupoptimizerai::Scan scan(settings.store_path);
    startupoptimizerai::Classify classify(settings.store_path);
    startupoptimizerai::Tune tune(settings.store_path);
    std::fprintf(stderr, "[startup-optimizer-ai] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
