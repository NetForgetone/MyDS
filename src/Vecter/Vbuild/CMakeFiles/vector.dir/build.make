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
CMAKE_SOURCE_DIR = /home/datastruct_Algorithm/Learn-Algorithms-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/datastruct_Algorithm/Learn-Algorithms-master

# Include any dependencies generated for this target.
include src/Vecter/CMakeFiles/vector.dir/depend.make

# Include the progress variables for this target.
include src/Vecter/CMakeFiles/vector.dir/progress.make

# Include the compile flags for this target's objects.
include src/Vecter/CMakeFiles/vector.dir/flags.make

src/Vecter/CMakeFiles/vector.dir/sequence_list.c.o: src/Vecter/CMakeFiles/vector.dir/flags.make
src/Vecter/CMakeFiles/vector.dir/sequence_list.c.o: src/Vecter/sequence_list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/datastruct_Algorithm/Learn-Algorithms-master/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/Vecter/CMakeFiles/vector.dir/sequence_list.c.o"
	cd /home/datastruct_Algorithm/Learn-Algorithms-master/src/Vecter && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/vector.dir/sequence_list.c.o   -c /home/datastruct_Algorithm/Learn-Algorithms-master/src/Vecter/sequence_list.c

src/Vecter/CMakeFiles/vector.dir/sequence_list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/vector.dir/sequence_list.c.i"
	cd /home/datastruct_Algorithm/Learn-Algorithms-master/src/Vecter && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/datastruct_Algorithm/Learn-Algorithms-master/src/Vecter/sequence_list.c > CMakeFiles/vector.dir/sequence_list.c.i

src/Vecter/CMakeFiles/vector.dir/sequence_list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/vector.dir/sequence_list.c.s"
	cd /home/datastruct_Algorithm/Learn-Algorithms-master/src/Vecter && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/datastruct_Algorithm/Learn-Algorithms-master/src/Vecter/sequence_list.c -o CMakeFiles/vector.dir/sequence_list.c.s

src/Vecter/CMakeFiles/vector.dir/sequence_list.c.o.requires:

.PHONY : src/Vecter/CMakeFiles/vector.dir/sequence_list.c.o.requires

src/Vecter/CMakeFiles/vector.dir/sequence_list.c.o.provides: src/Vecter/CMakeFiles/vector.dir/sequence_list.c.o.requires
	$(MAKE) -f src/Vecter/CMakeFiles/vector.dir/build.make src/Vecter/CMakeFiles/vector.dir/sequence_list.c.o.provides.build
.PHONY : src/Vecter/CMakeFiles/vector.dir/sequence_list.c.o.provides

src/Vecter/CMakeFiles/vector.dir/sequence_list.c.o.provides.build: src/Vecter/CMakeFiles/vector.dir/sequence_list.c.o


# Object files for target vector
vector_OBJECTS = \
"CMakeFiles/vector.dir/sequence_list.c.o"

# External object files for target vector
vector_EXTERNAL_OBJECTS =

lib/libvector.so: src/Vecter/CMakeFiles/vector.dir/sequence_list.c.o
lib/libvector.so: src/Vecter/CMakeFiles/vector.dir/build.make
lib/libvector.so: src/Vecter/CMakeFiles/vector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/datastruct_Algorithm/Learn-Algorithms-master/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library ../../lib/libvector.so"
	cd /home/datastruct_Algorithm/Learn-Algorithms-master/src/Vecter && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/Vecter/CMakeFiles/vector.dir/build: lib/libvector.so

.PHONY : src/Vecter/CMakeFiles/vector.dir/build

src/Vecter/CMakeFiles/vector.dir/requires: src/Vecter/CMakeFiles/vector.dir/sequence_list.c.o.requires

.PHONY : src/Vecter/CMakeFiles/vector.dir/requires

src/Vecter/CMakeFiles/vector.dir/clean:
	cd /home/datastruct_Algorithm/Learn-Algorithms-master/src/Vecter && $(CMAKE_COMMAND) -P CMakeFiles/vector.dir/cmake_clean.cmake
.PHONY : src/Vecter/CMakeFiles/vector.dir/clean

src/Vecter/CMakeFiles/vector.dir/depend:
	cd /home/datastruct_Algorithm/Learn-Algorithms-master && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/datastruct_Algorithm/Learn-Algorithms-master /home/datastruct_Algorithm/Learn-Algorithms-master/src/Vecter /home/datastruct_Algorithm/Learn-Algorithms-master /home/datastruct_Algorithm/Learn-Algorithms-master/src/Vecter /home/datastruct_Algorithm/Learn-Algorithms-master/src/Vecter/CMakeFiles/vector.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/Vecter/CMakeFiles/vector.dir/depend

