# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/mainz/development/libraries

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mainz/development/libraries/build

# Include any dependencies generated for this target.
include src/forward-list/CMakeFiles/forward-list.dir/depend.make

# Include the progress variables for this target.
include src/forward-list/CMakeFiles/forward-list.dir/progress.make

# Include the compile flags for this target's objects.
include src/forward-list/CMakeFiles/forward-list.dir/flags.make

# Object files for target forward-list
forward__list_OBJECTS =

# External object files for target forward-list
forward__list_EXTERNAL_OBJECTS =

../lib/libforward-list.so: src/forward-list/CMakeFiles/forward-list.dir/build.make
../lib/libforward-list.so: ../lib/liballocator.so
../lib/libforward-list.so: src/forward-list/CMakeFiles/forward-list.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mainz/development/libraries/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Linking CXX shared library ../../../lib/libforward-list.so"
	cd /home/mainz/development/libraries/build/src/forward-list && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/forward-list.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/forward-list/CMakeFiles/forward-list.dir/build: ../lib/libforward-list.so

.PHONY : src/forward-list/CMakeFiles/forward-list.dir/build

src/forward-list/CMakeFiles/forward-list.dir/clean:
	cd /home/mainz/development/libraries/build/src/forward-list && $(CMAKE_COMMAND) -P CMakeFiles/forward-list.dir/cmake_clean.cmake
.PHONY : src/forward-list/CMakeFiles/forward-list.dir/clean

src/forward-list/CMakeFiles/forward-list.dir/depend:
	cd /home/mainz/development/libraries/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mainz/development/libraries /home/mainz/development/libraries/src/forward-list /home/mainz/development/libraries/build /home/mainz/development/libraries/build/src/forward-list /home/mainz/development/libraries/build/src/forward-list/CMakeFiles/forward-list.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/forward-list/CMakeFiles/forward-list.dir/depend

