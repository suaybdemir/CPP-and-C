cmake_minimum_required(VERSION 3.22)
project(Gtest)

# Find GTest package
find_package(GTest REQUIRED)

# Add your executable
add_executable(a.out main.cpp)

# Link your executable with GTest
target_link_libraries(a.out ${GTEST_LIBRARIES})

# Enable testing
enable_testing()

# Add your test
add_test(NAME add COMMAND a.out)
