cmake_minimum_required(VERSION 3.20)
project(OrderMatchingEngine VERSION 0.0.0)

set(CMAKE_CXX_STANDARD 20)
add_compile_options(-Wall -Wextra -pedantic -Werror)

find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

include_directories(include)

set(SOURCE_FILES
        driver.cpp
        src/instrument.cpp src/server/user.cpp)

add_executable(OrderMatchingEngine ${SOURCE_FILES})

target_link_libraries(OrderMatchingEngine LINK_PUBLIC ${Boost_LIBRARIES})