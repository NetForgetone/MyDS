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
include src/Vecter/CMakeFiles/vecter.dir/depend.make

# Include the progress variables for this target.
include src/Vecter/CMakeFiles/vecter.dir/progress.make

# Include the compile flags for this target's objects.
include src/Vecter/CMakeFiles/vecter.dir/flags.make

src/Vecter/CMakeFiles/vecter.dir/sequence_list.c.o: src/Vecter/CMakeFiles/vecter.dir/flags.make
src/Vecter/CMakeFiles/vecter.dir/sequence_list.c.o: ../src/Vecter/sequence_list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/object/MyDS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/Vecter/CMakeFiles/vecter.dir/sequence_list.c.o"
	cd /home/object/MyDS/build/src/Vecter && /usr/bin/gcc-7 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/vecter.dir/sequence_list.c.o   -c /home/object/MyDS/src/Vecter/sequence_list.c

src/Vecter/CMakeFiles/vecter.dir/sequence_list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/vecter.dir/sequence_list.c.i"
	cd /home/object/MyDS/build/src/Vecter && /usr/bin/gcc-7 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/object/MyDS/src/Vecter/sequence_list.c > CMakeFiles/vecter.dir/sequence_list.c.i

src/Vecter/CMakeFiles/vecter.dir/sequence_list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/vecter.dir/sequence_list.c.s"
	cd /home/object/MyDS/build/src/Vecter && /usr/bin/gcc-7 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/object/MyDS/src/Vecter/sequence_list.c -o CMakeFiles/vecter.dir/sequence_list.c.s

src/Vecter/CMakeFiles/vecter.dir/sequence_list.c.o.requires:

.PHONY : src/Vecter/CMakeFiles/vecter.dir/sequence_list.c.o.requires

src/Vecter/CMakeFiles/vecter.dir/sequence_list.c.o.provides: src/Vecter/CMakeFiles/vecter.dir/sequence_list.c.o.requires
	$(MAKE) -f src/Vecter/CMakeFiles/vecter.dir/build.make src/Vecter/CMakeFiles/vecter.dir/sequence_list.c.o.provides.build
.PHONY : src/Vecter/CMakeFiles/vecter.dir/sequence_list.c.o.provides

src/Vecter/CMakeFiles/vecter.dir/sequence_list.c.o.provides.build: src/Vecter/CMakeFiles/vecter.dir/sequence_list.c.o


# Object files for target vecter
vecter_OBJECTS = \
"CMakeFiles/vecter.dir/sequence_list.c.o"

# External object files for target vecter
vecter_EXTERNAL_OBJECTS =

../lib/libvecter_d.so: src/Vecter/CMakeFiles/vecter.dir/sequence_list.c.o
../lib/libvecter_d.so: src/Vecter/CMakeFiles/vecter.dir/build.make
../lib/libvecter_d.so: src/Vecter/CMakeFiles/vecter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/object/MyDS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library ../../../lib/libvecter_d.so"
	cd /home/object/MyDS/build/src/Vecter && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vecter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/Vecter/CMakeFiles/vecter.dir/build: ../lib/libvecter_d.so

.PHONY : src/Vecter/CMakeFiles/vecter.dir/build

src/Vecter/CMakeFiles/vecter.dir/requires: src/Vecter/CMakeFiles/vecter.dir/sequence_list.c.o.requires

.PHONY : src/Vecter/CMakeFiles/vecter.dir/requires

src/Vecter/CMakeFiles/vecter.dir/clean:
	cd /home/object/MyDS/build/src/Vecter && $(CMAKE_COMMAND) -P CMakeFiles/vecter.dir/cmake_clean.cmake
.PHONY : src/Vecter/CMakeFiles/vecter.dir/clean

src/Vecter/CMakeFiles/vecter.dir/depend:
	cd /home/object/MyDS/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/object/MyDS /home/object/MyDS/src/Vecter /home/object/MyDS/build /home/object/MyDS/build/src/Vecter /home/object/MyDS/build/src/Vecter/CMakeFiles/vecter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/Vecter/CMakeFiles/vecter.dir/depend

