set(GTEST_LIB /usr/local/lib)
include_directories(
    /usr/local/include
    )
add_executable(gtest_example gtest_example.cpp)
target_link_libraries(gtest_example
    pthread
    ${GTEST_LIB}/libgtest.a
    ${GTEST_LIB}/libgtest_main.a
    )