# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/adam/.local/share/JetBrains/Toolbox/apps/clion/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /home/adam/.local/share/JetBrains/Toolbox/apps/clion/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/adam/Repos/16bitNeumann

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adam/Repos/16bitNeumann/cmake-build-debug

# Utility rule file for run_tests.

# Include any custom commands dependencies for this target.
include CMakeFiles/run_tests.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/run_tests.dir/progress.make

CMakeFiles/run_tests: test_and
CMakeFiles/run_tests: test_not
CMakeFiles/run_tests: test_dmux
	./test_and
	./test_or
	./test_xor
	./test_not
	./test_dmux
	./test_mux
	./test_not16
	./test_and16
	./test_or16
	./test_mux16
	./test_or8way
	./test_mux4way16
	./test_dmux4way

run_tests: CMakeFiles/run_tests
run_tests: CMakeFiles/run_tests.dir/build.make
.PHONY : run_tests

# Rule to build all files generated by this target.
CMakeFiles/run_tests.dir/build: run_tests
.PHONY : CMakeFiles/run_tests.dir/build

CMakeFiles/run_tests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/run_tests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/run_tests.dir/clean

CMakeFiles/run_tests.dir/depend:
	cd /home/adam/Repos/16bitNeumann/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adam/Repos/16bitNeumann /home/adam/Repos/16bitNeumann /home/adam/Repos/16bitNeumann/cmake-build-debug /home/adam/Repos/16bitNeumann/cmake-build-debug /home/adam/Repos/16bitNeumann/cmake-build-debug/CMakeFiles/run_tests.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/run_tests.dir/depend

