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
CMAKE_SOURCE_DIR = /home/at1102/Documents/CPP-17/projectLogger

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/at1102/Documents/CPP-17/projectLogger/build

# Include any dependencies generated for this target.
include CMakeFiles/projectLogger.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/projectLogger.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/projectLogger.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/projectLogger.dir/flags.make

CMakeFiles/projectLogger.dir/src/main.cpp.o: CMakeFiles/projectLogger.dir/flags.make
CMakeFiles/projectLogger.dir/src/main.cpp.o: /home/at1102/Documents/CPP-17/projectLogger/src/main.cpp
CMakeFiles/projectLogger.dir/src/main.cpp.o: CMakeFiles/projectLogger.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/at1102/Documents/CPP-17/projectLogger/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/projectLogger.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/projectLogger.dir/src/main.cpp.o -MF CMakeFiles/projectLogger.dir/src/main.cpp.o.d -o CMakeFiles/projectLogger.dir/src/main.cpp.o -c /home/at1102/Documents/CPP-17/projectLogger/src/main.cpp

CMakeFiles/projectLogger.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/projectLogger.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/at1102/Documents/CPP-17/projectLogger/src/main.cpp > CMakeFiles/projectLogger.dir/src/main.cpp.i

CMakeFiles/projectLogger.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/projectLogger.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/at1102/Documents/CPP-17/projectLogger/src/main.cpp -o CMakeFiles/projectLogger.dir/src/main.cpp.s

CMakeFiles/projectLogger.dir/src/loggerBase.cpp.o: CMakeFiles/projectLogger.dir/flags.make
CMakeFiles/projectLogger.dir/src/loggerBase.cpp.o: /home/at1102/Documents/CPP-17/projectLogger/src/loggerBase.cpp
CMakeFiles/projectLogger.dir/src/loggerBase.cpp.o: CMakeFiles/projectLogger.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/at1102/Documents/CPP-17/projectLogger/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/projectLogger.dir/src/loggerBase.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/projectLogger.dir/src/loggerBase.cpp.o -MF CMakeFiles/projectLogger.dir/src/loggerBase.cpp.o.d -o CMakeFiles/projectLogger.dir/src/loggerBase.cpp.o -c /home/at1102/Documents/CPP-17/projectLogger/src/loggerBase.cpp

CMakeFiles/projectLogger.dir/src/loggerBase.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/projectLogger.dir/src/loggerBase.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/at1102/Documents/CPP-17/projectLogger/src/loggerBase.cpp > CMakeFiles/projectLogger.dir/src/loggerBase.cpp.i

CMakeFiles/projectLogger.dir/src/loggerBase.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/projectLogger.dir/src/loggerBase.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/at1102/Documents/CPP-17/projectLogger/src/loggerBase.cpp -o CMakeFiles/projectLogger.dir/src/loggerBase.cpp.s

# Object files for target projectLogger
projectLogger_OBJECTS = \
"CMakeFiles/projectLogger.dir/src/main.cpp.o" \
"CMakeFiles/projectLogger.dir/src/loggerBase.cpp.o"

# External object files for target projectLogger
projectLogger_EXTERNAL_OBJECTS =

projectLogger: CMakeFiles/projectLogger.dir/src/main.cpp.o
projectLogger: CMakeFiles/projectLogger.dir/src/loggerBase.cpp.o
projectLogger: CMakeFiles/projectLogger.dir/build.make
projectLogger: CMakeFiles/projectLogger.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/at1102/Documents/CPP-17/projectLogger/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable projectLogger"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/projectLogger.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/projectLogger.dir/build: projectLogger
.PHONY : CMakeFiles/projectLogger.dir/build

CMakeFiles/projectLogger.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/projectLogger.dir/cmake_clean.cmake
.PHONY : CMakeFiles/projectLogger.dir/clean

CMakeFiles/projectLogger.dir/depend:
	cd /home/at1102/Documents/CPP-17/projectLogger/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/at1102/Documents/CPP-17/projectLogger /home/at1102/Documents/CPP-17/projectLogger /home/at1102/Documents/CPP-17/projectLogger/build /home/at1102/Documents/CPP-17/projectLogger/build /home/at1102/Documents/CPP-17/projectLogger/build/CMakeFiles/projectLogger.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/projectLogger.dir/depend
