# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/object/MyDS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/object/MyDS/build

# Include any dependencies generated for this target.
include CMakeFiles/LIST.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LIST.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LIST.dir/flags.make

CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.o: CMakeFiles/LIST.dir/flags.make
CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.o: ../src/Vecter/sequence_list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/object/MyDS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.o"
	/usr/bin/gcc-7 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.o   -c /home/object/MyDS/src/Vecter/sequence_list.c

CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.i"
	/usr/bin/gcc-7 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/object/MyDS/src/Vecter/sequence_list.c > CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.i

CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.s"
	/usr/bin/gcc-7 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/object/MyDS/src/Vecter/sequence_list.c -o CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.s

CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.o.requires:

.PHONY : CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.o.requires

CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.o.provides: CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.o.requires
	$(MAKE) -f CMakeFiles/LIST.dir/build.make CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.o.provides.build
.PHONY : CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.o.provides

CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.o.provides.build: CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.o


# Object files for target LIST
LIST_OBJECTS = \
"CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.o"

# External object files for target LIST
LIST_EXTERNAL_OBJECTS =

../Bin/LIST: CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.o
../Bin/LIST: CMakeFiles/LIST.dir/build.make
../Bin/LIST: CMakeFiles/LIST.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/object/MyDS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ../Bin/LIST"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LIST.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LIST.dir/build: ../Bin/LIST

.PHONY : CMakeFiles/LIST.dir/build

CMakeFiles/LIST.dir/requires: CMakeFiles/LIST.dir/src/Vecter/sequence_list.c.o.requires

.PHONY : CMakeFiles/LIST.dir/requires

CMakeFiles/LIST.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LIST.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LIST.dir/clean

CMakeFiles/LIST.dir/depend:
	cd /home/object/MyDS/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/object/MyDS /home/object/MyDS /home/object/MyDS/build /home/object/MyDS/build /home/object/MyDS/build/CMakeFiles/LIST.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LIST.dir/depend

