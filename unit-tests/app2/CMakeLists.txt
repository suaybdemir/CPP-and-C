cmake_minimum_required(VERSION 3.22)
project(Gtest)

find_package(GTest REQUIRED)

add_executable(out main.cpp)

target_link_libraries(out ${GTEST_LIBRARIES})

enable_testing()

add_test(NAME app2 COMMAND out)