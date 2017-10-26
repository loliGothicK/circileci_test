cmake_minimum_required(VERSION 2.8)
project(CranberriesLibrary)

add_definitions(-std=c++14 -O3 -Wall -Wextra -pedantic)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -stdlib=libc++ -lc++abi")

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR})

enable_testing()

message(STATUS "Building test")

set(target lib-link-test)
message(STATUS "Building library ${target}")

set(sources
	test.cpp
)

set_tests_properties(lib-link-test PROPERTIES LABELS "all")