cmake_minimum_required(VERSION 3.12)
project(cprogen_core)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake-modules)

# Set debug build type by default
if (NOT CMAKE_BUILD_TYPE OR CMAKE_BUILD_TYPE STREQUAL "")
    set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "" FORCE)
endif()

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(CMAKE_CXX_FLAGS "-g --coverage -fprofile-arcs -ftest-coverage")
endif()

file(GLOB SRC_LIB_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_library(cprogen_core SHARED ${SRC_LIB_FILES})

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_subdirectory(tests)
endif()
