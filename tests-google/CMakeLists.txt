# check packages
find_package(Threads REQUIRED)
find_package(GTest REQUIRED)

file(GLOB SRC_TEST_FILES *.cpp)

add_executable(moderncpp_tests ${SRC_TEST_FILES})

target_link_libraries(moderncpp_tests moderncpp GTest::GTest Threads::Threads)

include(CodeCoverage)
APPEND_COVERAGE_COMPILER_FLAGS()
set(COVERAGE_LCOV_EXCLUDES '/usr/include/*')
SETUP_TARGET_FOR_COVERAGE_LCOV(NAME moderncpp_coverage
        EXECUTABLE moderncpp_tests
        DEPENDENCIES moderncpp)
