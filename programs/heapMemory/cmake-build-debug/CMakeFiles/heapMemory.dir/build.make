# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/reganpalmer/OneDrive - Grand Canyon University/CST-210/programs/heapMemory"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/reganpalmer/OneDrive - Grand Canyon University/CST-210/programs/heapMemory/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/heapMemory.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/heapMemory.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/heapMemory.dir/flags.make

CMakeFiles/heapMemory.dir/main.cpp.o: CMakeFiles/heapMemory.dir/flags.make
CMakeFiles/heapMemory.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/reganpalmer/OneDrive - Grand Canyon University/CST-210/programs/heapMemory/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/heapMemory.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/heapMemory.dir/main.cpp.o -c "/Users/reganpalmer/OneDrive - Grand Canyon University/CST-210/programs/heapMemory/main.cpp"

CMakeFiles/heapMemory.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/heapMemory.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/reganpalmer/OneDrive - Grand Canyon University/CST-210/programs/heapMemory/main.cpp" > CMakeFiles/heapMemory.dir/main.cpp.i

CMakeFiles/heapMemory.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/heapMemory.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/reganpalmer/OneDrive - Grand Canyon University/CST-210/programs/heapMemory/main.cpp" -o CMakeFiles/heapMemory.dir/main.cpp.s

# Object files for target heapMemory
heapMemory_OBJECTS = \
"CMakeFiles/heapMemory.dir/main.cpp.o"

# External object files for target heapMemory
heapMemory_EXTERNAL_OBJECTS =

heapMemory: CMakeFiles/heapMemory.dir/main.cpp.o
heapMemory: CMakeFiles/heapMemory.dir/build.make
heapMemory: CMakeFiles/heapMemory.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/reganpalmer/OneDrive - Grand Canyon University/CST-210/programs/heapMemory/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable heapMemory"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/heapMemory.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/heapMemory.dir/build: heapMemory

.PHONY : CMakeFiles/heapMemory.dir/build

CMakeFiles/heapMemory.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/heapMemory.dir/cmake_clean.cmake
.PHONY : CMakeFiles/heapMemory.dir/clean

CMakeFiles/heapMemory.dir/depend:
	cd "/Users/reganpalmer/OneDrive - Grand Canyon University/CST-210/programs/heapMemory/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/reganpalmer/OneDrive - Grand Canyon University/CST-210/programs/heapMemory" "/Users/reganpalmer/OneDrive - Grand Canyon University/CST-210/programs/heapMemory" "/Users/reganpalmer/OneDrive - Grand Canyon University/CST-210/programs/heapMemory/cmake-build-debug" "/Users/reganpalmer/OneDrive - Grand Canyon University/CST-210/programs/heapMemory/cmake-build-debug" "/Users/reganpalmer/OneDrive - Grand Canyon University/CST-210/programs/heapMemory/cmake-build-debug/CMakeFiles/heapMemory.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/heapMemory.dir/depend

