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
include CMakeFiles/MEGIN.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MEGIN.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MEGIN.dir/flags.make

CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.o: CMakeFiles/MEGIN.dir/flags.make
CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.o: ../src/Vecter/sequence_list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/object/MyDS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.o"
	/usr/bin/gcc-7 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.o   -c /home/object/MyDS/src/Vecter/sequence_list.c

CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.i"
	/usr/bin/gcc-7 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/object/MyDS/src/Vecter/sequence_list.c > CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.i

CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.s"
	/usr/bin/gcc-7 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/object/MyDS/src/Vecter/sequence_list.c -o CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.s

CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.o.requires:

.PHONY : CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.o.requires

CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.o.provides: CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.o.requires
	$(MAKE) -f CMakeFiles/MEGIN.dir/build.make CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.o.provides.build
.PHONY : CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.o.provides

CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.o.provides.build: CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.o


CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.o: CMakeFiles/MEGIN.dir/flags.make
CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.o: ../src/Tree/BSTree/BSTree.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/object/MyDS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.o"
	/usr/bin/gcc-7 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.o   -c /home/object/MyDS/src/Tree/BSTree/BSTree.c

CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.i"
	/usr/bin/gcc-7 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/object/MyDS/src/Tree/BSTree/BSTree.c > CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.i

CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.s"
	/usr/bin/gcc-7 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/object/MyDS/src/Tree/BSTree/BSTree.c -o CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.s

CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.o.requires:

.PHONY : CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.o.requires

CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.o.provides: CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.o.requires
	$(MAKE) -f CMakeFiles/MEGIN.dir/build.make CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.o.provides.build
.PHONY : CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.o.provides

CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.o.provides.build: CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.o


# Object files for target MEGIN
MEGIN_OBJECTS = \
"CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.o" \
"CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.o"

# External object files for target MEGIN
MEGIN_EXTERNAL_OBJECTS =

../Bin/MEGIN: CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.o
../Bin/MEGIN: CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.o
../Bin/MEGIN: CMakeFiles/MEGIN.dir/build.make
../Bin/MEGIN: CMakeFiles/MEGIN.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/object/MyDS/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable ../Bin/MEGIN"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MEGIN.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MEGIN.dir/build: ../Bin/MEGIN

.PHONY : CMakeFiles/MEGIN.dir/build

CMakeFiles/MEGIN.dir/requires: CMakeFiles/MEGIN.dir/src/Vecter/sequence_list.c.o.requires
CMakeFiles/MEGIN.dir/requires: CMakeFiles/MEGIN.dir/src/Tree/BSTree/BSTree.c.o.requires

.PHONY : CMakeFiles/MEGIN.dir/requires

CMakeFiles/MEGIN.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MEGIN.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MEGIN.dir/clean

CMakeFiles/MEGIN.dir/depend:
	cd /home/object/MyDS/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/object/MyDS /home/object/MyDS /home/object/MyDS/build /home/object/MyDS/build /home/object/MyDS/build/CMakeFiles/MEGIN.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MEGIN.dir/depend
