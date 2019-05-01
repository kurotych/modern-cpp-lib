# check packages
find_package(Threads REQUIRED)
find_package(GTest REQUIRED)

file(GLOB SRC_TEST_FILES *.cpp)

add_executable(cprogen_core_tests ${SRC_TEST_FILES})

target_link_libraries(cprogen_core_tests cprogen_core GTest::GTest Threads::Threads)

if(CMAKE_COMPILER_IS_GNUCXX)
    include(CodeCoverage)
    APPEND_COVERAGE_COMPILER_FLAGS()
    set(COVERAGE_LCOV_EXCLUDES '/usr/include/*')
    SETUP_TARGET_FOR_COVERAGE_LCOV(NAME cprogen_core_coverage
            EXECUTABLE cprogen_core_tests
            DEPENDENCIES cprogen_core)
endif()