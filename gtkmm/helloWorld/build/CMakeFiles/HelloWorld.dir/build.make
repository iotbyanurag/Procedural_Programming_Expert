# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/at1102/Documents/Procedural-Programming/gtkmm/helloWorld

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/at1102/Documents/Procedural-Programming/gtkmm/helloWorld/build

# Include any dependencies generated for this target.
include CMakeFiles/HelloWorld.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/HelloWorld.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/HelloWorld.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HelloWorld.dir/flags.make

CMakeFiles/HelloWorld.dir/main.cpp.o: CMakeFiles/HelloWorld.dir/flags.make
CMakeFiles/HelloWorld.dir/main.cpp.o: /home/at1102/Documents/Procedural-Programming/gtkmm/helloWorld/main.cpp
CMakeFiles/HelloWorld.dir/main.cpp.o: CMakeFiles/HelloWorld.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/at1102/Documents/Procedural-Programming/gtkmm/helloWorld/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HelloWorld.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/HelloWorld.dir/main.cpp.o -MF CMakeFiles/HelloWorld.dir/main.cpp.o.d -o CMakeFiles/HelloWorld.dir/main.cpp.o -c /home/at1102/Documents/Procedural-Programming/gtkmm/helloWorld/main.cpp

CMakeFiles/HelloWorld.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/HelloWorld.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/at1102/Documents/Procedural-Programming/gtkmm/helloWorld/main.cpp > CMakeFiles/HelloWorld.dir/main.cpp.i

CMakeFiles/HelloWorld.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/HelloWorld.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/at1102/Documents/Procedural-Programming/gtkmm/helloWorld/main.cpp -o CMakeFiles/HelloWorld.dir/main.cpp.s

# Object files for target HelloWorld
HelloWorld_OBJECTS = \
"CMakeFiles/HelloWorld.dir/main.cpp.o"

# External object files for target HelloWorld
HelloWorld_EXTERNAL_OBJECTS =

HelloWorld: CMakeFiles/HelloWorld.dir/main.cpp.o
HelloWorld: CMakeFiles/HelloWorld.dir/build.make
HelloWorld: CMakeFiles/HelloWorld.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/at1102/Documents/Procedural-Programming/gtkmm/helloWorld/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HelloWorld"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HelloWorld.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HelloWorld.dir/build: HelloWorld
.PHONY : CMakeFiles/HelloWorld.dir/build

CMakeFiles/HelloWorld.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HelloWorld.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HelloWorld.dir/clean

CMakeFiles/HelloWorld.dir/depend:
	cd /home/at1102/Documents/Procedural-Programming/gtkmm/helloWorld/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/at1102/Documents/Procedural-Programming/gtkmm/helloWorld /home/at1102/Documents/Procedural-Programming/gtkmm/helloWorld /home/at1102/Documents/Procedural-Programming/gtkmm/helloWorld/build /home/at1102/Documents/Procedural-Programming/gtkmm/helloWorld/build /home/at1102/Documents/Procedural-Programming/gtkmm/helloWorld/build/CMakeFiles/HelloWorld.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/HelloWorld.dir/depend
