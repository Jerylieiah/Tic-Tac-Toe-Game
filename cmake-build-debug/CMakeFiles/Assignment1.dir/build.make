# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\jerem\CLionProjects\Assignment1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jerem\CLionProjects\Assignment1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Assignment1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment1.dir/flags.make

CMakeFiles/Assignment1.dir/main.cpp.obj: CMakeFiles/Assignment1.dir/flags.make
CMakeFiles/Assignment1.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jerem\CLionProjects\Assignment1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Assignment1.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Assignment1.dir\main.cpp.obj -c C:\Users\jerem\CLionProjects\Assignment1\main.cpp

CMakeFiles/Assignment1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment1.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jerem\CLionProjects\Assignment1\main.cpp > CMakeFiles\Assignment1.dir\main.cpp.i

CMakeFiles/Assignment1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment1.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jerem\CLionProjects\Assignment1\main.cpp -o CMakeFiles\Assignment1.dir\main.cpp.s

CMakeFiles/Assignment1.dir/board.cpp.obj: CMakeFiles/Assignment1.dir/flags.make
CMakeFiles/Assignment1.dir/board.cpp.obj: ../board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jerem\CLionProjects\Assignment1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Assignment1.dir/board.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Assignment1.dir\board.cpp.obj -c C:\Users\jerem\CLionProjects\Assignment1\board.cpp

CMakeFiles/Assignment1.dir/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment1.dir/board.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jerem\CLionProjects\Assignment1\board.cpp > CMakeFiles\Assignment1.dir\board.cpp.i

CMakeFiles/Assignment1.dir/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment1.dir/board.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jerem\CLionProjects\Assignment1\board.cpp -o CMakeFiles\Assignment1.dir\board.cpp.s

CMakeFiles/Assignment1.dir/player.cpp.obj: CMakeFiles/Assignment1.dir/flags.make
CMakeFiles/Assignment1.dir/player.cpp.obj: ../player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jerem\CLionProjects\Assignment1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Assignment1.dir/player.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Assignment1.dir\player.cpp.obj -c C:\Users\jerem\CLionProjects\Assignment1\player.cpp

CMakeFiles/Assignment1.dir/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment1.dir/player.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jerem\CLionProjects\Assignment1\player.cpp > CMakeFiles\Assignment1.dir\player.cpp.i

CMakeFiles/Assignment1.dir/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment1.dir/player.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jerem\CLionProjects\Assignment1\player.cpp -o CMakeFiles\Assignment1.dir\player.cpp.s

CMakeFiles/Assignment1.dir/mkGame.cpp.obj: CMakeFiles/Assignment1.dir/flags.make
CMakeFiles/Assignment1.dir/mkGame.cpp.obj: ../mkGame.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jerem\CLionProjects\Assignment1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Assignment1.dir/mkGame.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Assignment1.dir\mkGame.cpp.obj -c C:\Users\jerem\CLionProjects\Assignment1\mkGame.cpp

CMakeFiles/Assignment1.dir/mkGame.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment1.dir/mkGame.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jerem\CLionProjects\Assignment1\mkGame.cpp > CMakeFiles\Assignment1.dir\mkGame.cpp.i

CMakeFiles/Assignment1.dir/mkGame.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment1.dir/mkGame.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jerem\CLionProjects\Assignment1\mkGame.cpp -o CMakeFiles\Assignment1.dir\mkGame.cpp.s

# Object files for target Assignment1
Assignment1_OBJECTS = \
"CMakeFiles/Assignment1.dir/main.cpp.obj" \
"CMakeFiles/Assignment1.dir/board.cpp.obj" \
"CMakeFiles/Assignment1.dir/player.cpp.obj" \
"CMakeFiles/Assignment1.dir/mkGame.cpp.obj"

# External object files for target Assignment1
Assignment1_EXTERNAL_OBJECTS =

Assignment1.exe: CMakeFiles/Assignment1.dir/main.cpp.obj
Assignment1.exe: CMakeFiles/Assignment1.dir/board.cpp.obj
Assignment1.exe: CMakeFiles/Assignment1.dir/player.cpp.obj
Assignment1.exe: CMakeFiles/Assignment1.dir/mkGame.cpp.obj
Assignment1.exe: CMakeFiles/Assignment1.dir/build.make
Assignment1.exe: CMakeFiles/Assignment1.dir/linklibs.rsp
Assignment1.exe: CMakeFiles/Assignment1.dir/objects1.rsp
Assignment1.exe: CMakeFiles/Assignment1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\jerem\CLionProjects\Assignment1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Assignment1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Assignment1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment1.dir/build: Assignment1.exe

.PHONY : CMakeFiles/Assignment1.dir/build

CMakeFiles/Assignment1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Assignment1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Assignment1.dir/clean

CMakeFiles/Assignment1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jerem\CLionProjects\Assignment1 C:\Users\jerem\CLionProjects\Assignment1 C:\Users\jerem\CLionProjects\Assignment1\cmake-build-debug C:\Users\jerem\CLionProjects\Assignment1\cmake-build-debug C:\Users\jerem\CLionProjects\Assignment1\cmake-build-debug\CMakeFiles\Assignment1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Assignment1.dir/depend

