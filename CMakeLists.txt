cmake_minimum_required(VERSION 2.8)
project(CranberriesLibrary)

add_definitions(-std=c++14 -O3 -Wall -Wextra -pedantic)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR})

enable_testing()

message(STATUS "Building test")

set(target lib-link-test)
message(STATUS "Building library ${target}")

set(sources
	test.cpp
)

add_executable(${target} ${sources})
add_test(test "${EXECUTABLE_OUTPUT_PATH}/${target}")
set_tests_properties(test PROPERTIES LABELS "all")