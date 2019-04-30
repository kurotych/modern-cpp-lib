cmake_minimum_required(VERSION 3.10)
project(cprogen_core)

set(CMAKE_CXX_STANDARD 17)

# Set debug build type by default
if (NOT CMAKE_BUILD_TYPE OR CMAKE_BUILD_TYPE STREQUAL "")
    set(CMAKE_BUILD_TYPE "Debug" CACHE STRING "" FORCE)
endif()

file(GLOB SRC_LIB_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
add_library(cprogen_core SHARED ${SRC_LIB_FILES})

if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_subdirectory(tests)
endif()
