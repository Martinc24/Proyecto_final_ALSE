# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/andres_m/3corte/Project_F

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/andres_m/3corte/build-Project_F-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/Project_F.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Project_F.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Project_F.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Project_F.dir/flags.make

CMakeFiles/Project_F.dir/Project_F_autogen/mocs_compilation.cpp.o: CMakeFiles/Project_F.dir/flags.make
CMakeFiles/Project_F.dir/Project_F_autogen/mocs_compilation.cpp.o: Project_F_autogen/mocs_compilation.cpp
CMakeFiles/Project_F.dir/Project_F_autogen/mocs_compilation.cpp.o: CMakeFiles/Project_F.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andres_m/3corte/build-Project_F-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Project_F.dir/Project_F_autogen/mocs_compilation.cpp.o"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Project_F.dir/Project_F_autogen/mocs_compilation.cpp.o -MF CMakeFiles/Project_F.dir/Project_F_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/Project_F.dir/Project_F_autogen/mocs_compilation.cpp.o -c /home/andres_m/3corte/build-Project_F-Desktop-Debug/Project_F_autogen/mocs_compilation.cpp

CMakeFiles/Project_F.dir/Project_F_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_F.dir/Project_F_autogen/mocs_compilation.cpp.i"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andres_m/3corte/build-Project_F-Desktop-Debug/Project_F_autogen/mocs_compilation.cpp > CMakeFiles/Project_F.dir/Project_F_autogen/mocs_compilation.cpp.i

CMakeFiles/Project_F.dir/Project_F_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_F.dir/Project_F_autogen/mocs_compilation.cpp.s"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andres_m/3corte/build-Project_F-Desktop-Debug/Project_F_autogen/mocs_compilation.cpp -o CMakeFiles/Project_F.dir/Project_F_autogen/mocs_compilation.cpp.s

CMakeFiles/Project_F.dir/main.cpp.o: CMakeFiles/Project_F.dir/flags.make
CMakeFiles/Project_F.dir/main.cpp.o: /home/andres_m/3corte/Project_F/main.cpp
CMakeFiles/Project_F.dir/main.cpp.o: CMakeFiles/Project_F.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andres_m/3corte/build-Project_F-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Project_F.dir/main.cpp.o"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Project_F.dir/main.cpp.o -MF CMakeFiles/Project_F.dir/main.cpp.o.d -o CMakeFiles/Project_F.dir/main.cpp.o -c /home/andres_m/3corte/Project_F/main.cpp

CMakeFiles/Project_F.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Project_F.dir/main.cpp.i"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/andres_m/3corte/Project_F/main.cpp > CMakeFiles/Project_F.dir/main.cpp.i

CMakeFiles/Project_F.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Project_F.dir/main.cpp.s"
	/usr/bin/clang++-14 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/andres_m/3corte/Project_F/main.cpp -o CMakeFiles/Project_F.dir/main.cpp.s

# Object files for target Project_F
Project_F_OBJECTS = \
"CMakeFiles/Project_F.dir/Project_F_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/Project_F.dir/main.cpp.o"

# External object files for target Project_F
Project_F_EXTERNAL_OBJECTS =

Project_F: CMakeFiles/Project_F.dir/Project_F_autogen/mocs_compilation.cpp.o
Project_F: CMakeFiles/Project_F.dir/main.cpp.o
Project_F: CMakeFiles/Project_F.dir/build.make
Project_F: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.3
Project_F: CMakeFiles/Project_F.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/andres_m/3corte/build-Project_F-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Project_F"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Project_F.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Project_F.dir/build: Project_F
.PHONY : CMakeFiles/Project_F.dir/build

CMakeFiles/Project_F.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Project_F.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Project_F.dir/clean

CMakeFiles/Project_F.dir/depend:
	cd /home/andres_m/3corte/build-Project_F-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/andres_m/3corte/Project_F /home/andres_m/3corte/Project_F /home/andres_m/3corte/build-Project_F-Desktop-Debug /home/andres_m/3corte/build-Project_F-Desktop-Debug /home/andres_m/3corte/build-Project_F-Desktop-Debug/CMakeFiles/Project_F.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Project_F.dir/depend

