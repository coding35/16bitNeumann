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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/adam/Repos/16bitNeumann

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/adam/Repos/16bitNeumann/build

# Include any dependencies generated for this target.
include CMakeFiles/test_xor.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_xor.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_xor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_xor.dir/flags.make

CMakeFiles/test_xor.dir/test/test_xor.c.o: CMakeFiles/test_xor.dir/flags.make
CMakeFiles/test_xor.dir/test/test_xor.c.o: /home/adam/Repos/16bitNeumann/test/test_xor.c
CMakeFiles/test_xor.dir/test/test_xor.c.o: CMakeFiles/test_xor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adam/Repos/16bitNeumann/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test_xor.dir/test/test_xor.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/test_xor.dir/test/test_xor.c.o -MF CMakeFiles/test_xor.dir/test/test_xor.c.o.d -o CMakeFiles/test_xor.dir/test/test_xor.c.o -c /home/adam/Repos/16bitNeumann/test/test_xor.c

CMakeFiles/test_xor.dir/test/test_xor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/test_xor.dir/test/test_xor.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adam/Repos/16bitNeumann/test/test_xor.c > CMakeFiles/test_xor.dir/test/test_xor.c.i

CMakeFiles/test_xor.dir/test/test_xor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/test_xor.dir/test/test_xor.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adam/Repos/16bitNeumann/test/test_xor.c -o CMakeFiles/test_xor.dir/test/test_xor.c.s

CMakeFiles/test_xor.dir/components/gates/xor.c.o: CMakeFiles/test_xor.dir/flags.make
CMakeFiles/test_xor.dir/components/gates/xor.c.o: /home/adam/Repos/16bitNeumann/components/gates/xor.c
CMakeFiles/test_xor.dir/components/gates/xor.c.o: CMakeFiles/test_xor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adam/Repos/16bitNeumann/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/test_xor.dir/components/gates/xor.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/test_xor.dir/components/gates/xor.c.o -MF CMakeFiles/test_xor.dir/components/gates/xor.c.o.d -o CMakeFiles/test_xor.dir/components/gates/xor.c.o -c /home/adam/Repos/16bitNeumann/components/gates/xor.c

CMakeFiles/test_xor.dir/components/gates/xor.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/test_xor.dir/components/gates/xor.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adam/Repos/16bitNeumann/components/gates/xor.c > CMakeFiles/test_xor.dir/components/gates/xor.c.i

CMakeFiles/test_xor.dir/components/gates/xor.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/test_xor.dir/components/gates/xor.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adam/Repos/16bitNeumann/components/gates/xor.c -o CMakeFiles/test_xor.dir/components/gates/xor.c.s

CMakeFiles/test_xor.dir/unity/src/unity.c.o: CMakeFiles/test_xor.dir/flags.make
CMakeFiles/test_xor.dir/unity/src/unity.c.o: /home/adam/Repos/16bitNeumann/unity/src/unity.c
CMakeFiles/test_xor.dir/unity/src/unity.c.o: CMakeFiles/test_xor.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adam/Repos/16bitNeumann/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/test_xor.dir/unity/src/unity.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/test_xor.dir/unity/src/unity.c.o -MF CMakeFiles/test_xor.dir/unity/src/unity.c.o.d -o CMakeFiles/test_xor.dir/unity/src/unity.c.o -c /home/adam/Repos/16bitNeumann/unity/src/unity.c

CMakeFiles/test_xor.dir/unity/src/unity.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/test_xor.dir/unity/src/unity.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adam/Repos/16bitNeumann/unity/src/unity.c > CMakeFiles/test_xor.dir/unity/src/unity.c.i

CMakeFiles/test_xor.dir/unity/src/unity.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/test_xor.dir/unity/src/unity.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adam/Repos/16bitNeumann/unity/src/unity.c -o CMakeFiles/test_xor.dir/unity/src/unity.c.s

# Object files for target test_xor
test_xor_OBJECTS = \
"CMakeFiles/test_xor.dir/test/test_xor.c.o" \
"CMakeFiles/test_xor.dir/components/gates/xor.c.o" \
"CMakeFiles/test_xor.dir/unity/src/unity.c.o"

# External object files for target test_xor
test_xor_EXTERNAL_OBJECTS =

test_xor: CMakeFiles/test_xor.dir/test/test_xor.c.o
test_xor: CMakeFiles/test_xor.dir/components/gates/xor.c.o
test_xor: CMakeFiles/test_xor.dir/unity/src/unity.c.o
test_xor: CMakeFiles/test_xor.dir/build.make
test_xor: CMakeFiles/test_xor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/adam/Repos/16bitNeumann/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable test_xor"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_xor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_xor.dir/build: test_xor
.PHONY : CMakeFiles/test_xor.dir/build

CMakeFiles/test_xor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_xor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_xor.dir/clean

CMakeFiles/test_xor.dir/depend:
	cd /home/adam/Repos/16bitNeumann/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adam/Repos/16bitNeumann /home/adam/Repos/16bitNeumann /home/adam/Repos/16bitNeumann/build /home/adam/Repos/16bitNeumann/build /home/adam/Repos/16bitNeumann/build/CMakeFiles/test_xor.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/test_xor.dir/depend

