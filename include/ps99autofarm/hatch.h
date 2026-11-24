// hatch — part of ps99-autofarm.

#pragma once

#include <string>
#include <vector>

namespace ps99autofarm {

class Hatch {
public:
    explicit Hatch(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace ps99autofarm
