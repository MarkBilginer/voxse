//
// Created by markb on 9/17/2025.
//

#ifndef VOXSE_CONFIG_HPP
#define VOXSE_CONFIG_HPP

#if __cpp_concepts < 201907L
#error "C++20 concepts not enabled!"
#endif

namespace voxse {
    inline constexpr const char* version = "0.1.0-dev";
}

#endif //VOXSE_CONFIG_HPP