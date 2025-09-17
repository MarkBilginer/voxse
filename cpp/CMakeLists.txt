cmake_minimum_required(VERSION 3.24)
project(voxse CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


if (MSVC)
    add_compile_options(/permissive- /Zc:__cplusplus /Zc:preprocessor /W4)
endif()

add_executable(voxse src/main.cpp)

# Tell the target where to find headers like "voxse/config.hpp"
target_include_directories(voxse PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)