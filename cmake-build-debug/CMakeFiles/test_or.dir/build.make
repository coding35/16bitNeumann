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

# Include any dependencies generated for this target.
include CMakeFiles/test_or.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test_or.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test_or.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_or.dir/flags.make

CMakeFiles/test_or.dir/test/test_or.c.o: CMakeFiles/test_or.dir/flags.make
CMakeFiles/test_or.dir/test/test_or.c.o: /home/adam/Repos/16bitNeumann/test/test_or.c
CMakeFiles/test_or.dir/test/test_or.c.o: CMakeFiles/test_or.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adam/Repos/16bitNeumann/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test_or.dir/test/test_or.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/test_or.dir/test/test_or.c.o -MF CMakeFiles/test_or.dir/test/test_or.c.o.d -o CMakeFiles/test_or.dir/test/test_or.c.o -c /home/adam/Repos/16bitNeumann/test/test_or.c

CMakeFiles/test_or.dir/test/test_or.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/test_or.dir/test/test_or.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adam/Repos/16bitNeumann/test/test_or.c > CMakeFiles/test_or.dir/test/test_or.c.i

CMakeFiles/test_or.dir/test/test_or.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/test_or.dir/test/test_or.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adam/Repos/16bitNeumann/test/test_or.c -o CMakeFiles/test_or.dir/test/test_or.c.s

CMakeFiles/test_or.dir/components/gates/nand.c.o: CMakeFiles/test_or.dir/flags.make
CMakeFiles/test_or.dir/components/gates/nand.c.o: /home/adam/Repos/16bitNeumann/components/gates/nand.c
CMakeFiles/test_or.dir/components/gates/nand.c.o: CMakeFiles/test_or.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adam/Repos/16bitNeumann/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/test_or.dir/components/gates/nand.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/test_or.dir/components/gates/nand.c.o -MF CMakeFiles/test_or.dir/components/gates/nand.c.o.d -o CMakeFiles/test_or.dir/components/gates/nand.c.o -c /home/adam/Repos/16bitNeumann/components/gates/nand.c

CMakeFiles/test_or.dir/components/gates/nand.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/test_or.dir/components/gates/nand.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adam/Repos/16bitNeumann/components/gates/nand.c > CMakeFiles/test_or.dir/components/gates/nand.c.i

CMakeFiles/test_or.dir/components/gates/nand.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/test_or.dir/components/gates/nand.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adam/Repos/16bitNeumann/components/gates/nand.c -o CMakeFiles/test_or.dir/components/gates/nand.c.s

CMakeFiles/test_or.dir/components/gates/not.c.o: CMakeFiles/test_or.dir/flags.make
CMakeFiles/test_or.dir/components/gates/not.c.o: /home/adam/Repos/16bitNeumann/components/gates/not.c
CMakeFiles/test_or.dir/components/gates/not.c.o: CMakeFiles/test_or.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adam/Repos/16bitNeumann/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/test_or.dir/components/gates/not.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/test_or.dir/components/gates/not.c.o -MF CMakeFiles/test_or.dir/components/gates/not.c.o.d -o CMakeFiles/test_or.dir/components/gates/not.c.o -c /home/adam/Repos/16bitNeumann/components/gates/not.c

CMakeFiles/test_or.dir/components/gates/not.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/test_or.dir/components/gates/not.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adam/Repos/16bitNeumann/components/gates/not.c > CMakeFiles/test_or.dir/components/gates/not.c.i

CMakeFiles/test_or.dir/components/gates/not.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/test_or.dir/components/gates/not.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adam/Repos/16bitNeumann/components/gates/not.c -o CMakeFiles/test_or.dir/components/gates/not.c.s

CMakeFiles/test_or.dir/components/gates/and.c.o: CMakeFiles/test_or.dir/flags.make
CMakeFiles/test_or.dir/components/gates/and.c.o: /home/adam/Repos/16bitNeumann/components/gates/and.c
CMakeFiles/test_or.dir/components/gates/and.c.o: CMakeFiles/test_or.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adam/Repos/16bitNeumann/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/test_or.dir/components/gates/and.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/test_or.dir/components/gates/and.c.o -MF CMakeFiles/test_or.dir/components/gates/and.c.o.d -o CMakeFiles/test_or.dir/components/gates/and.c.o -c /home/adam/Repos/16bitNeumann/components/gates/and.c

CMakeFiles/test_or.dir/components/gates/and.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/test_or.dir/components/gates/and.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adam/Repos/16bitNeumann/components/gates/and.c > CMakeFiles/test_or.dir/components/gates/and.c.i

CMakeFiles/test_or.dir/components/gates/and.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/test_or.dir/components/gates/and.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adam/Repos/16bitNeumann/components/gates/and.c -o CMakeFiles/test_or.dir/components/gates/and.c.s

CMakeFiles/test_or.dir/components/gates/or.c.o: CMakeFiles/test_or.dir/flags.make
CMakeFiles/test_or.dir/components/gates/or.c.o: /home/adam/Repos/16bitNeumann/components/gates/or.c
CMakeFiles/test_or.dir/components/gates/or.c.o: CMakeFiles/test_or.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adam/Repos/16bitNeumann/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/test_or.dir/components/gates/or.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/test_or.dir/components/gates/or.c.o -MF CMakeFiles/test_or.dir/components/gates/or.c.o.d -o CMakeFiles/test_or.dir/components/gates/or.c.o -c /home/adam/Repos/16bitNeumann/components/gates/or.c

CMakeFiles/test_or.dir/components/gates/or.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/test_or.dir/components/gates/or.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adam/Repos/16bitNeumann/components/gates/or.c > CMakeFiles/test_or.dir/components/gates/or.c.i

CMakeFiles/test_or.dir/components/gates/or.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/test_or.dir/components/gates/or.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adam/Repos/16bitNeumann/components/gates/or.c -o CMakeFiles/test_or.dir/components/gates/or.c.s

CMakeFiles/test_or.dir/unity/src/unity.c.o: CMakeFiles/test_or.dir/flags.make
CMakeFiles/test_or.dir/unity/src/unity.c.o: /home/adam/Repos/16bitNeumann/unity/src/unity.c
CMakeFiles/test_or.dir/unity/src/unity.c.o: CMakeFiles/test_or.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/adam/Repos/16bitNeumann/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/test_or.dir/unity/src/unity.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/test_or.dir/unity/src/unity.c.o -MF CMakeFiles/test_or.dir/unity/src/unity.c.o.d -o CMakeFiles/test_or.dir/unity/src/unity.c.o -c /home/adam/Repos/16bitNeumann/unity/src/unity.c

CMakeFiles/test_or.dir/unity/src/unity.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/test_or.dir/unity/src/unity.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/adam/Repos/16bitNeumann/unity/src/unity.c > CMakeFiles/test_or.dir/unity/src/unity.c.i

CMakeFiles/test_or.dir/unity/src/unity.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/test_or.dir/unity/src/unity.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/adam/Repos/16bitNeumann/unity/src/unity.c -o CMakeFiles/test_or.dir/unity/src/unity.c.s

# Object files for target test_or
test_or_OBJECTS = \
"CMakeFiles/test_or.dir/test/test_or.c.o" \
"CMakeFiles/test_or.dir/components/gates/nand.c.o" \
"CMakeFiles/test_or.dir/components/gates/not.c.o" \
"CMakeFiles/test_or.dir/components/gates/and.c.o" \
"CMakeFiles/test_or.dir/components/gates/or.c.o" \
"CMakeFiles/test_or.dir/unity/src/unity.c.o"

# External object files for target test_or
test_or_EXTERNAL_OBJECTS =

test_or: CMakeFiles/test_or.dir/test/test_or.c.o
test_or: CMakeFiles/test_or.dir/components/gates/nand.c.o
test_or: CMakeFiles/test_or.dir/components/gates/not.c.o
test_or: CMakeFiles/test_or.dir/components/gates/and.c.o
test_or: CMakeFiles/test_or.dir/components/gates/or.c.o
test_or: CMakeFiles/test_or.dir/unity/src/unity.c.o
test_or: CMakeFiles/test_or.dir/build.make
test_or: CMakeFiles/test_or.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/adam/Repos/16bitNeumann/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable test_or"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_or.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_or.dir/build: test_or
.PHONY : CMakeFiles/test_or.dir/build

CMakeFiles/test_or.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_or.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_or.dir/clean

CMakeFiles/test_or.dir/depend:
	cd /home/adam/Repos/16bitNeumann/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/adam/Repos/16bitNeumann /home/adam/Repos/16bitNeumann /home/adam/Repos/16bitNeumann/cmake-build-debug /home/adam/Repos/16bitNeumann/cmake-build-debug /home/adam/Repos/16bitNeumann/cmake-build-debug/CMakeFiles/test_or.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/test_or.dir/depend

