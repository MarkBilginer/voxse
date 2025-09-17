//
// Created by markb on 9/17/2025.
//

//#if defined(__cpp_modules) && defined(_MSC_VER)
// MSVC supports the C++20 std module: this path tries it.
//import std;
//#else
// Fallback for any toolchain that doesn’t have std modules enabled.
//#include <iostream>
//#include <vector>
//#endif

#include <iostream>
#include "voxse/config.hpp"

int main() {
    std::cout << "VoxSE (C++) hello\n";

#if defined(_MSC_VER)
    std::cout << "Compiler: MSVC " << _MSC_VER << "\n";
#elif defined(__GNUC__)
    std::cout << "Compiler: GCC " << __GNUC__ << "." << __GNUC_MINOR__ << "\n";
#elif defined(__clang__)
    std::cout << "Compiler: Clang " << __clang_major__ << "." << __clang_minor__ << "\n";
#endif

    // Use a std type to prove the module/include provided it:
    //std::vector<int> v{2, 3};
    //std::cout << "2+3=" << (v[0] + v[1]) << "\n";

    std::cout << "C++ standard: " << __cplusplus << "\n"; // expect >= 202002 for C++20

#ifdef __cpp_concepts
    std::cout << "__cpp_concepts = " << __cpp_concepts << "\n";
#else
    std::cout << "__cpp_concepts not defined\n";
#endif
    return 0;
}
