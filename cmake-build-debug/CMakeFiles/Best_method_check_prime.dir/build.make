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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Dat\CLionProjects\Best-method-check-prime

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Dat\CLionProjects\Best-method-check-prime\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Best_method_check_prime.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Best_method_check_prime.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Best_method_check_prime.dir/flags.make

CMakeFiles/Best_method_check_prime.dir/main.cpp.obj: CMakeFiles/Best_method_check_prime.dir/flags.make
CMakeFiles/Best_method_check_prime.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Dat\CLionProjects\Best-method-check-prime\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Best_method_check_prime.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Best_method_check_prime.dir\main.cpp.obj -c C:\Users\Dat\CLionProjects\Best-method-check-prime\main.cpp

CMakeFiles/Best_method_check_prime.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Best_method_check_prime.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Dat\CLionProjects\Best-method-check-prime\main.cpp > CMakeFiles\Best_method_check_prime.dir\main.cpp.i

CMakeFiles/Best_method_check_prime.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Best_method_check_prime.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Dat\CLionProjects\Best-method-check-prime\main.cpp -o CMakeFiles\Best_method_check_prime.dir\main.cpp.s

# Object files for target Best_method_check_prime
Best_method_check_prime_OBJECTS = \
"CMakeFiles/Best_method_check_prime.dir/main.cpp.obj"

# External object files for target Best_method_check_prime
Best_method_check_prime_EXTERNAL_OBJECTS =

Best_method_check_prime.exe: CMakeFiles/Best_method_check_prime.dir/main.cpp.obj
Best_method_check_prime.exe: CMakeFiles/Best_method_check_prime.dir/build.make
Best_method_check_prime.exe: CMakeFiles/Best_method_check_prime.dir/linklibs.rsp
Best_method_check_prime.exe: CMakeFiles/Best_method_check_prime.dir/objects1.rsp
Best_method_check_prime.exe: CMakeFiles/Best_method_check_prime.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Dat\CLionProjects\Best-method-check-prime\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Best_method_check_prime.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Best_method_check_prime.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Best_method_check_prime.dir/build: Best_method_check_prime.exe

.PHONY : CMakeFiles/Best_method_check_prime.dir/build

CMakeFiles/Best_method_check_prime.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Best_method_check_prime.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Best_method_check_prime.dir/clean

CMakeFiles/Best_method_check_prime.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Dat\CLionProjects\Best-method-check-prime C:\Users\Dat\CLionProjects\Best-method-check-prime C:\Users\Dat\CLionProjects\Best-method-check-prime\cmake-build-debug C:\Users\Dat\CLionProjects\Best-method-check-prime\cmake-build-debug C:\Users\Dat\CLionProjects\Best-method-check-prime\cmake-build-debug\CMakeFiles\Best_method_check_prime.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Best_method_check_prime.dir/depend
