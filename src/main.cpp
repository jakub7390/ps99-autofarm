// main.cpp — entry point. Wires config and subsystems together.

#include "ps99autofarm/settings.h"
#include "ps99autofarm/coins.h"
#include "ps99autofarm/hatch.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    ps99autofarm::Settings settings = ps99autofarm::Settings::load_default();
    ps99autofarm::Coins coins(settings.store_path);
    ps99autofarm::Hatch hatch(settings.store_path);
    std::fprintf(stderr, "[ps99-autofarm] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
