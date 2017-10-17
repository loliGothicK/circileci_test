set(GTEST_LIB /usr/local/lib)
include_directories(
    /usr/local/include/gtest/include
    )
add_executable(gtest_example gtest_example.cpp)
target_link_libraries(gtest_example
    pthread
    ${GTEST_ROOT}/libgtest.a
    ${GTEST_ROOT}/libgtest_main.a
    )