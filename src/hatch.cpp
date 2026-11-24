// hatch.cpp — part of ps99-autofarm.

#include "ps99autofarm/hatch.h"

#include <cstdio>

namespace ps99autofarm {

Hatch::Hatch(const std::string& config_path)
    : config_path_(config_path) {}

void Hatch::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Hatch::run() {
    if (verbose_) std::fprintf(stderr, "[ps99-autofarm] hatch: run\n");
    // core logic lives here
    return true;
}

}  // namespace ps99autofarm
