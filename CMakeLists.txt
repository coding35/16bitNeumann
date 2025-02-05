cmake_minimum_required(VERSION 3.30)
project(16bitNeumann C)

set(CMAKE_C_STANDARD 11)

# Add the main executable
add_executable(
        16bitNeumann
        main.c
        components/gates/nand.c
        components/gates/and.c
        components/gates/not.c
        components/gates/or.c
        components/gates/xor.c
        components/gates/not16.c
        components/gates/and16.c
        components/gates/or16.c
        components/plexers/mux.c
        components/plexers/mux16.c
        components/plexers/dmux.c
        components/gates/or8way.c
        components/plexers/mux4way16.c

)

# Add the test executable for and
add_executable(
        test_and
        test/test_and.c
        components/gates/not.c
        components/gates/nand.c
        components/gates/and.c
        unity/src/unity.c
)

# Add the test executable for not
add_executable(
        test_not
        test/test_not.c
        components/gates/nand.c
        components/gates/not.c
        unity/src/unity.c
)

# Add the test executable for or
add_executable(
        test_or
        test/test_or.c
        components/gates/or.c
        unity/src/unity.c
)

# Add the test executable for xor
add_executable(
        test_xor
        test/test_xor.c
        components/gates/xor.c
        unity/src/unity.c
)

# Add the test executable for mux
add_executable(
        test_mux
        test/test_mux.c
        components/gates/nand.c
        components/gates/and.c
        components/gates/or.c
        components/gates/not.c
        components/plexers/mux.c
        unity/src/unity.c
)

# Add the test executable for dmux
add_executable(
        test_dmux
        test/test_dmux.c
        components/gates/nand.c
        components/gates/and.c
        components/gates/not.c
        components/plexers/dmux.c
        unity/src/unity.c
)

# Add the test executable for not16
add_executable(
        test_not16
        test/test_not16.c
        components/gates/nand.c
        components/gates/not.c
        components/gates/not16.c
        unity/src/unity.c
)

# Add the test executable for and16
add_executable(
        test_and16
        test/test_and16.c
        components/gates/not.c
        components/gates/nand.c
        components/gates/and.c
        components/gates/and16.c
        unity/src/unity.c
)

# Add the test executable for or16
add_executable(
        test_or16
        test/test_or16.c
        components/gates/or.c
        components/gates/or16.c
        unity/src/unity.c
)

# Add the test executable for mux16
add_executable(
        test_mux16
        test/test_mux16.c
        components/gates/nand.c
        components/gates/and.c
        components/gates/or.c
        components/gates/not.c
        components/plexers/mux.c
        components/plexers/mux16.c
        unity/src/unity.c
)

# Add the test executable for or8way
add_executable(
        test_or8way
        test/test_or8way.c
        components/gates/or.c
        components/gates/or8way.c
        unity/src/unity.c
)

# Add the test executable for mux4way16
add_executable(
        test_mux4way16
        test/test_mux4way16.c
        components/gates/nand.c
        components/gates/and.c
        components/gates/or.c
        components/gates/not.c
        components/plexers/mux.c
        components/plexers/mux16.c
        components/plexers/mux4way16.c
        unity/src/unity.c
)

# Include Unity
include_directories(${CMAKE_SOURCE_DIR}/unity/src)

# Add a custom target to run all tests
add_custom_target(run_tests
        COMMAND test_and
        COMMAND test_or
        COMMAND test_xor
        COMMAND test_not
        COMMAND test_dmux
        COMMAND test_mux
        COMMAND test_not16
        COMMAND test_and16
        COMMAND test_or16
        COMMAND test_mux16
        COMMAND test_or8way
        COMMAND test_mux4way16
        DEPENDS test_and test_not test_dmux
)