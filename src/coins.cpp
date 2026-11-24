// coins.cpp — part of ps99-autofarm.

#include "ps99autofarm/coins.h"

#include <cstdio>

namespace ps99autofarm {

Coins::Coins(const std::string& config_path)
    : config_path_(config_path) {}

void Coins::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Coins::run() {
    if (verbose_) std::fprintf(stderr, "[ps99-autofarm] coins: run\n");
    // core logic lives here
    return true;
}

}  // namespace ps99autofarm
