# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.24.3/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.24.3/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/hovogrigoryan/Documents/Picsart/PicsArtProjects

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hovogrigoryan/Documents/Picsart/PicsArtProjects/build

# Include any dependencies generated for this target.
include src/DLLoader/CMakeFiles/DLLoader.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/DLLoader/CMakeFiles/DLLoader.dir/compiler_depend.make

# Include the progress variables for this target.
include src/DLLoader/CMakeFiles/DLLoader.dir/progress.make

# Include the compile flags for this target's objects.
include src/DLLoader/CMakeFiles/DLLoader.dir/flags.make

src/DLLoader/CMakeFiles/DLLoader.dir/DLLoader.cpp.o: src/DLLoader/CMakeFiles/DLLoader.dir/flags.make
src/DLLoader/CMakeFiles/DLLoader.dir/DLLoader.cpp.o: /Users/hovogrigoryan/Documents/Picsart/PicsArtProjects/src/DLLoader/DLLoader.cpp
src/DLLoader/CMakeFiles/DLLoader.dir/DLLoader.cpp.o: src/DLLoader/CMakeFiles/DLLoader.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hovogrigoryan/Documents/Picsart/PicsArtProjects/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/DLLoader/CMakeFiles/DLLoader.dir/DLLoader.cpp.o"
	cd /Users/hovogrigoryan/Documents/Picsart/PicsArtProjects/build/src/DLLoader && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/DLLoader/CMakeFiles/DLLoader.dir/DLLoader.cpp.o -MF CMakeFiles/DLLoader.dir/DLLoader.cpp.o.d -o CMakeFiles/DLLoader.dir/DLLoader.cpp.o -c /Users/hovogrigoryan/Documents/Picsart/PicsArtProjects/src/DLLoader/DLLoader.cpp

src/DLLoader/CMakeFiles/DLLoader.dir/DLLoader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DLLoader.dir/DLLoader.cpp.i"
	cd /Users/hovogrigoryan/Documents/Picsart/PicsArtProjects/build/src/DLLoader && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hovogrigoryan/Documents/Picsart/PicsArtProjects/src/DLLoader/DLLoader.cpp > CMakeFiles/DLLoader.dir/DLLoader.cpp.i

src/DLLoader/CMakeFiles/DLLoader.dir/DLLoader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DLLoader.dir/DLLoader.cpp.s"
	cd /Users/hovogrigoryan/Documents/Picsart/PicsArtProjects/build/src/DLLoader && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hovogrigoryan/Documents/Picsart/PicsArtProjects/src/DLLoader/DLLoader.cpp -o CMakeFiles/DLLoader.dir/DLLoader.cpp.s

# Object files for target DLLoader
DLLoader_OBJECTS = \
"CMakeFiles/DLLoader.dir/DLLoader.cpp.o"

# External object files for target DLLoader
DLLoader_EXTERNAL_OBJECTS =

src/DLLoader/libDLLoader.a: src/DLLoader/CMakeFiles/DLLoader.dir/DLLoader.cpp.o
src/DLLoader/libDLLoader.a: src/DLLoader/CMakeFiles/DLLoader.dir/build.make
src/DLLoader/libDLLoader.a: src/DLLoader/CMakeFiles/DLLoader.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hovogrigoryan/Documents/Picsart/PicsArtProjects/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libDLLoader.a"
	cd /Users/hovogrigoryan/Documents/Picsart/PicsArtProjects/build/src/DLLoader && $(CMAKE_COMMAND) -P CMakeFiles/DLLoader.dir/cmake_clean_target.cmake
	cd /Users/hovogrigoryan/Documents/Picsart/PicsArtProjects/build/src/DLLoader && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DLLoader.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/DLLoader/CMakeFiles/DLLoader.dir/build: src/DLLoader/libDLLoader.a
.PHONY : src/DLLoader/CMakeFiles/DLLoader.dir/build

src/DLLoader/CMakeFiles/DLLoader.dir/clean:
	cd /Users/hovogrigoryan/Documents/Picsart/PicsArtProjects/build/src/DLLoader && $(CMAKE_COMMAND) -P CMakeFiles/DLLoader.dir/cmake_clean.cmake
.PHONY : src/DLLoader/CMakeFiles/DLLoader.dir/clean

src/DLLoader/CMakeFiles/DLLoader.dir/depend:
	cd /Users/hovogrigoryan/Documents/Picsart/PicsArtProjects/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hovogrigoryan/Documents/Picsart/PicsArtProjects /Users/hovogrigoryan/Documents/Picsart/PicsArtProjects/src/DLLoader /Users/hovogrigoryan/Documents/Picsart/PicsArtProjects/build /Users/hovogrigoryan/Documents/Picsart/PicsArtProjects/build/src/DLLoader /Users/hovogrigoryan/Documents/Picsart/PicsArtProjects/build/src/DLLoader/CMakeFiles/DLLoader.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/DLLoader/CMakeFiles/DLLoader.dir/depend
