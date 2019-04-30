# check packages
find_package(Threads REQUIRED)
find_package(GTest REQUIRED)

file(GLOB SRC_TEST_FILES *.cpp)

add_executable(cprogen_core_tests ${SRC_TEST_FILES})

target_link_libraries(cprogen_core_tests cprogen_core GTest::GTest Threads::Threads)