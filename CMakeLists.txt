cmake_minimum_required(VERSION 3.20)
project(OrderMatchingEngine VERSION 0.0.0)

set(CMAKE_CXX_STANDARD 20)
add_compile_options(-Wall -Wextra -pedantic -Werror)

find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

include_directories(include)

set(SOURCE_FILES
        driver.cpp
        src/instrument.cpp src/server/user.cpp src/server/userlist.cpp)

file(GLOB LIB_SOURCES CONFIGURE_DEPENDS src/**/*.cpp include/OrderMatchingEngine/**/*.h)
add_library(OrderMatchingEngineLib ${LIB_SOURCES})
target_include_directories(OrderMatchingEngineLib PUBLIC include PRIVATE src)

add_executable(OrderMatchingEngine ${SOURCE_FILES})

target_link_libraries(OrderMatchingEngine LINK_PUBLIC ${Boost_LIBRARIES})

add_subdirectory(tests)