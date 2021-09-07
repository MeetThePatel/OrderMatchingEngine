project(OrderMatchingEngineTests)
add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_FILES
        server/UserTests.cpp server/UserListTests.cpp)

add_executable(OrderMatchingEngineTestsRun ${TEST_FILES})

target_link_libraries(OrderMatchingEngineTestsRun OrderMatchingEngineLib)
target_link_libraries(OrderMatchingEngineTestsRun gtest gtest_main)