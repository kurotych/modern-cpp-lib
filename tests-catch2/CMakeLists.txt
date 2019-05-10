cmake_minimum_required(VERSION 3.12)

file(GLOB SRC_TEST_FILES *.cpp *.hpp)

add_executable(${PROJECT_NAME}_tests ${SRC_TEST_FILES})

include_directories("../include" ".")

target_link_libraries(${PROJECT_NAME}_tests ${PROJECT_NAME})

include(CodeCoverage)
APPEND_COVERAGE_COMPILER_FLAGS()
set(COVERAGE_LCOV_EXCLUDES '/usr/include/*' '${PROJECT_SOURCE_DIR}/tests-*')
SETUP_TARGET_FOR_COVERAGE_LCOV(NAME ${PROJECT_NAME}_coverage
        EXECUTABLE ${PROJECT_NAME}_tests
        DEPENDENCIES ${PROJECT_NAME})