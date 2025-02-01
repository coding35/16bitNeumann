cmake_minimum_required(VERSION 3.30)
project(16bitNeumann C)

set(CMAKE_C_STANDARD 11)

# Add the main executable
add_executable(
        16bitNeumann
        main.c
        gates/and.c
        gates/not.c
        gates/or.c
        gates/xor.c
        gates/mux.c
        gates/dmux.c
)

# Add the test executable for and
add_executable(
        test_and
        test/test_and.c
        gates/and.c
        unity/src/unity.c
)

# Add the test executable for not
add_executable(
        test_not
        test/test_not.c
        gates/not.c
        unity/src/unity.c
)

# Add the test executable for or
add_executable(
        test_or
        test/test_or.c
        gates/or.c
        unity/src/unity.c
)

# Add the test executable for xor
add_executable(
        test_xor
        test/test_xor.c
        gates/xor.c
        unity/src/unity.c
)

# Add the test executable for mux
add_executable(
        test_mux
        test/test_mux.c
        gates/mux.c
        unity/src/unity.c
)

# Add the test executable for dmux
add_executable(
        test_dmux
        test/test_dmux.c
        gates/dmux.c
        unity/src/unity.c
)

# Include Unity
include_directories(${CMAKE_SOURCE_DIR}/unity/src)

