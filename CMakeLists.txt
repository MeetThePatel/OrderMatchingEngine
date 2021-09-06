cmake_minimum_required(VERSION 3.20)
project(OrderMatchingEngine VERSION 0.0.0)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

set(SOURCE_FILES
        driver.cpp
        src/instrument.cpp)

add_executable(OrderMatchingEngine ${SOURCE_FILES})
