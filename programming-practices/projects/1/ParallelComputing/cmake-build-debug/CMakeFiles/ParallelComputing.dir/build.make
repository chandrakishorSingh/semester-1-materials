# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/chandrakishorsingh/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/chandrakishorsingh/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ParallelComputing.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ParallelComputing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ParallelComputing.dir/flags.make

CMakeFiles/ParallelComputing.dir/parallelLUD.cpp.o: CMakeFiles/ParallelComputing.dir/flags.make
CMakeFiles/ParallelComputing.dir/parallelLUD.cpp.o: ../parallelLUD.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ParallelComputing.dir/parallelLUD.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ParallelComputing.dir/parallelLUD.cpp.o -c /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/parallelLUD.cpp

CMakeFiles/ParallelComputing.dir/parallelLUD.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ParallelComputing.dir/parallelLUD.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/parallelLUD.cpp > CMakeFiles/ParallelComputing.dir/parallelLUD.cpp.i

CMakeFiles/ParallelComputing.dir/parallelLUD.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ParallelComputing.dir/parallelLUD.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/parallelLUD.cpp -o CMakeFiles/ParallelComputing.dir/parallelLUD.cpp.s

CMakeFiles/ParallelComputing.dir/serialLUD.cpp.o: CMakeFiles/ParallelComputing.dir/flags.make
CMakeFiles/ParallelComputing.dir/serialLUD.cpp.o: ../serialLUD.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ParallelComputing.dir/serialLUD.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ParallelComputing.dir/serialLUD.cpp.o -c /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/serialLUD.cpp

CMakeFiles/ParallelComputing.dir/serialLUD.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ParallelComputing.dir/serialLUD.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/serialLUD.cpp > CMakeFiles/ParallelComputing.dir/serialLUD.cpp.i

CMakeFiles/ParallelComputing.dir/serialLUD.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ParallelComputing.dir/serialLUD.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/serialLUD.cpp -o CMakeFiles/ParallelComputing.dir/serialLUD.cpp.s

CMakeFiles/ParallelComputing.dir/ompLUD.cpp.o: CMakeFiles/ParallelComputing.dir/flags.make
CMakeFiles/ParallelComputing.dir/ompLUD.cpp.o: ../ompLUD.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ParallelComputing.dir/ompLUD.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ParallelComputing.dir/ompLUD.cpp.o -c /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/ompLUD.cpp

CMakeFiles/ParallelComputing.dir/ompLUD.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ParallelComputing.dir/ompLUD.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/ompLUD.cpp > CMakeFiles/ParallelComputing.dir/ompLUD.cpp.i

CMakeFiles/ParallelComputing.dir/ompLUD.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ParallelComputing.dir/ompLUD.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/ompLUD.cpp -o CMakeFiles/ParallelComputing.dir/ompLUD.cpp.s

CMakeFiles/ParallelComputing.dir/verification.cpp.o: CMakeFiles/ParallelComputing.dir/flags.make
CMakeFiles/ParallelComputing.dir/verification.cpp.o: ../verification.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ParallelComputing.dir/verification.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ParallelComputing.dir/verification.cpp.o -c /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/verification.cpp

CMakeFiles/ParallelComputing.dir/verification.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ParallelComputing.dir/verification.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/verification.cpp > CMakeFiles/ParallelComputing.dir/verification.cpp.i

CMakeFiles/ParallelComputing.dir/verification.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ParallelComputing.dir/verification.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/verification.cpp -o CMakeFiles/ParallelComputing.dir/verification.cpp.s

CMakeFiles/ParallelComputing.dir/utils.cpp.o: CMakeFiles/ParallelComputing.dir/flags.make
CMakeFiles/ParallelComputing.dir/utils.cpp.o: ../utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ParallelComputing.dir/utils.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ParallelComputing.dir/utils.cpp.o -c /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/utils.cpp

CMakeFiles/ParallelComputing.dir/utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ParallelComputing.dir/utils.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/utils.cpp > CMakeFiles/ParallelComputing.dir/utils.cpp.i

CMakeFiles/ParallelComputing.dir/utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ParallelComputing.dir/utils.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/utils.cpp -o CMakeFiles/ParallelComputing.dir/utils.cpp.s

# Object files for target ParallelComputing
ParallelComputing_OBJECTS = \
"CMakeFiles/ParallelComputing.dir/parallelLUD.cpp.o" \
"CMakeFiles/ParallelComputing.dir/serialLUD.cpp.o" \
"CMakeFiles/ParallelComputing.dir/ompLUD.cpp.o" \
"CMakeFiles/ParallelComputing.dir/verification.cpp.o" \
"CMakeFiles/ParallelComputing.dir/utils.cpp.o"

# External object files for target ParallelComputing
ParallelComputing_EXTERNAL_OBJECTS =

ParallelComputing: CMakeFiles/ParallelComputing.dir/parallelLUD.cpp.o
ParallelComputing: CMakeFiles/ParallelComputing.dir/serialLUD.cpp.o
ParallelComputing: CMakeFiles/ParallelComputing.dir/ompLUD.cpp.o
ParallelComputing: CMakeFiles/ParallelComputing.dir/verification.cpp.o
ParallelComputing: CMakeFiles/ParallelComputing.dir/utils.cpp.o
ParallelComputing: CMakeFiles/ParallelComputing.dir/build.make
ParallelComputing: CMakeFiles/ParallelComputing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable ParallelComputing"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ParallelComputing.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ParallelComputing.dir/build: ParallelComputing
.PHONY : CMakeFiles/ParallelComputing.dir/build

CMakeFiles/ParallelComputing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ParallelComputing.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ParallelComputing.dir/clean

CMakeFiles/ParallelComputing.dir/depend:
	cd /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/cmake-build-debug /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/cmake-build-debug /home/chandrakishorsingh/Documents/iiit-allahabad/semester-1/programming-practices/projects/1/ParallelComputing/cmake-build-debug/CMakeFiles/ParallelComputing.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ParallelComputing.dir/depend

