cmake_minimum_required(VERSION 3.12)
project(test_catch)


file(GLOB SRC_TEST_FILES *.cpp *.hpp)

add_executable(${PROJECT_NAME} ${SRC_TEST_FILES})

include_directories("../include" ".")

target_link_libraries(${PROJECT_NAME} moderncpp)

include(CodeCoverage)
APPEND_COVERAGE_COMPILER_FLAGS()
set(COVERAGE_LCOV_EXCLUDES '/usr/include/*' '*/catch.hpp')
SETUP_TARGET_FOR_COVERAGE_LCOV(NAME test_catch_cov
        EXECUTABLE ${PROJECT_NAME}
        DEPENDENCIES moderncpp)