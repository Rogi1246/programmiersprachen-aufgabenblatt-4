# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.1.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.1.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\cmake-build-debug"

# Include any dependencies generated for this target.
include source/CMakeFiles/example.dir/depend.make

# Include the progress variables for this target.
include source/CMakeFiles/example.dir/progress.make

# Include the compile flags for this target's objects.
include source/CMakeFiles/example.dir/flags.make

source/CMakeFiles/example.dir/window.cpp.obj: source/CMakeFiles/example.dir/flags.make
source/CMakeFiles/example.dir/window.cpp.obj: source/CMakeFiles/example.dir/includes_CXX.rsp
source/CMakeFiles/example.dir/window.cpp.obj: ../source/window.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object source/CMakeFiles/example.dir/window.cpp.obj"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\example.dir\window.cpp.obj -c "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\window.cpp"

source/CMakeFiles/example.dir/window.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example.dir/window.cpp.i"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\window.cpp" > CMakeFiles\example.dir\window.cpp.i

source/CMakeFiles/example.dir/window.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example.dir/window.cpp.s"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\window.cpp" -o CMakeFiles\example.dir\window.cpp.s

source/CMakeFiles/example.dir/window.cpp.obj.requires:

.PHONY : source/CMakeFiles/example.dir/window.cpp.obj.requires

source/CMakeFiles/example.dir/window.cpp.obj.provides: source/CMakeFiles/example.dir/window.cpp.obj.requires
	$(MAKE) -f source\CMakeFiles\example.dir\build.make source/CMakeFiles/example.dir/window.cpp.obj.provides.build
.PHONY : source/CMakeFiles/example.dir/window.cpp.obj.provides

source/CMakeFiles/example.dir/window.cpp.obj.provides.build: source/CMakeFiles/example.dir/window.cpp.obj


source/CMakeFiles/example.dir/glew.c.obj: source/CMakeFiles/example.dir/flags.make
source/CMakeFiles/example.dir/glew.c.obj: source/CMakeFiles/example.dir/includes_C.rsp
source/CMakeFiles/example.dir/glew.c.obj: ../source/glew.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object source/CMakeFiles/example.dir/glew.c.obj"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\example.dir\glew.c.obj   -c "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\glew.c"

source/CMakeFiles/example.dir/glew.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/example.dir/glew.c.i"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\glew.c" > CMakeFiles\example.dir\glew.c.i

source/CMakeFiles/example.dir/glew.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/example.dir/glew.c.s"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\glew.c" -o CMakeFiles\example.dir\glew.c.s

source/CMakeFiles/example.dir/glew.c.obj.requires:

.PHONY : source/CMakeFiles/example.dir/glew.c.obj.requires

source/CMakeFiles/example.dir/glew.c.obj.provides: source/CMakeFiles/example.dir/glew.c.obj.requires
	$(MAKE) -f source\CMakeFiles\example.dir\build.make source/CMakeFiles/example.dir/glew.c.obj.provides.build
.PHONY : source/CMakeFiles/example.dir/glew.c.obj.provides

source/CMakeFiles/example.dir/glew.c.obj.provides.build: source/CMakeFiles/example.dir/glew.c.obj


source/CMakeFiles/example.dir/example.cpp.obj: source/CMakeFiles/example.dir/flags.make
source/CMakeFiles/example.dir/example.cpp.obj: source/CMakeFiles/example.dir/includes_CXX.rsp
source/CMakeFiles/example.dir/example.cpp.obj: ../source/example.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object source/CMakeFiles/example.dir/example.cpp.obj"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\example.dir\example.cpp.obj -c "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\example.cpp"

source/CMakeFiles/example.dir/example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example.dir/example.cpp.i"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\example.cpp" > CMakeFiles\example.dir\example.cpp.i

source/CMakeFiles/example.dir/example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example.dir/example.cpp.s"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\example.cpp" -o CMakeFiles\example.dir\example.cpp.s

source/CMakeFiles/example.dir/example.cpp.obj.requires:

.PHONY : source/CMakeFiles/example.dir/example.cpp.obj.requires

source/CMakeFiles/example.dir/example.cpp.obj.provides: source/CMakeFiles/example.dir/example.cpp.obj.requires
	$(MAKE) -f source\CMakeFiles\example.dir\build.make source/CMakeFiles/example.dir/example.cpp.obj.provides.build
.PHONY : source/CMakeFiles/example.dir/example.cpp.obj.provides

source/CMakeFiles/example.dir/example.cpp.obj.provides.build: source/CMakeFiles/example.dir/example.cpp.obj


source/CMakeFiles/example.dir/vec2.cpp.obj: source/CMakeFiles/example.dir/flags.make
source/CMakeFiles/example.dir/vec2.cpp.obj: source/CMakeFiles/example.dir/includes_CXX.rsp
source/CMakeFiles/example.dir/vec2.cpp.obj: ../source/vec2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object source/CMakeFiles/example.dir/vec2.cpp.obj"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\example.dir\vec2.cpp.obj -c "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\vec2.cpp"

source/CMakeFiles/example.dir/vec2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example.dir/vec2.cpp.i"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\vec2.cpp" > CMakeFiles\example.dir\vec2.cpp.i

source/CMakeFiles/example.dir/vec2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example.dir/vec2.cpp.s"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\vec2.cpp" -o CMakeFiles\example.dir\vec2.cpp.s

source/CMakeFiles/example.dir/vec2.cpp.obj.requires:

.PHONY : source/CMakeFiles/example.dir/vec2.cpp.obj.requires

source/CMakeFiles/example.dir/vec2.cpp.obj.provides: source/CMakeFiles/example.dir/vec2.cpp.obj.requires
	$(MAKE) -f source\CMakeFiles\example.dir\build.make source/CMakeFiles/example.dir/vec2.cpp.obj.provides.build
.PHONY : source/CMakeFiles/example.dir/vec2.cpp.obj.provides

source/CMakeFiles/example.dir/vec2.cpp.obj.provides.build: source/CMakeFiles/example.dir/vec2.cpp.obj


source/CMakeFiles/example.dir/mat2.cpp.obj: source/CMakeFiles/example.dir/flags.make
source/CMakeFiles/example.dir/mat2.cpp.obj: source/CMakeFiles/example.dir/includes_CXX.rsp
source/CMakeFiles/example.dir/mat2.cpp.obj: ../source/mat2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object source/CMakeFiles/example.dir/mat2.cpp.obj"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\example.dir\mat2.cpp.obj -c "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\mat2.cpp"

source/CMakeFiles/example.dir/mat2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example.dir/mat2.cpp.i"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\mat2.cpp" > CMakeFiles\example.dir\mat2.cpp.i

source/CMakeFiles/example.dir/mat2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example.dir/mat2.cpp.s"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\mat2.cpp" -o CMakeFiles\example.dir\mat2.cpp.s

source/CMakeFiles/example.dir/mat2.cpp.obj.requires:

.PHONY : source/CMakeFiles/example.dir/mat2.cpp.obj.requires

source/CMakeFiles/example.dir/mat2.cpp.obj.provides: source/CMakeFiles/example.dir/mat2.cpp.obj.requires
	$(MAKE) -f source\CMakeFiles\example.dir\build.make source/CMakeFiles/example.dir/mat2.cpp.obj.provides.build
.PHONY : source/CMakeFiles/example.dir/mat2.cpp.obj.provides

source/CMakeFiles/example.dir/mat2.cpp.obj.provides.build: source/CMakeFiles/example.dir/mat2.cpp.obj


source/CMakeFiles/example.dir/rectangle.cpp.obj: source/CMakeFiles/example.dir/flags.make
source/CMakeFiles/example.dir/rectangle.cpp.obj: source/CMakeFiles/example.dir/includes_CXX.rsp
source/CMakeFiles/example.dir/rectangle.cpp.obj: ../source/rectangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object source/CMakeFiles/example.dir/rectangle.cpp.obj"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\example.dir\rectangle.cpp.obj -c "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\rectangle.cpp"

source/CMakeFiles/example.dir/rectangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example.dir/rectangle.cpp.i"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\rectangle.cpp" > CMakeFiles\example.dir\rectangle.cpp.i

source/CMakeFiles/example.dir/rectangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example.dir/rectangle.cpp.s"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\rectangle.cpp" -o CMakeFiles\example.dir\rectangle.cpp.s

source/CMakeFiles/example.dir/rectangle.cpp.obj.requires:

.PHONY : source/CMakeFiles/example.dir/rectangle.cpp.obj.requires

source/CMakeFiles/example.dir/rectangle.cpp.obj.provides: source/CMakeFiles/example.dir/rectangle.cpp.obj.requires
	$(MAKE) -f source\CMakeFiles\example.dir\build.make source/CMakeFiles/example.dir/rectangle.cpp.obj.provides.build
.PHONY : source/CMakeFiles/example.dir/rectangle.cpp.obj.provides

source/CMakeFiles/example.dir/rectangle.cpp.obj.provides.build: source/CMakeFiles/example.dir/rectangle.cpp.obj


source/CMakeFiles/example.dir/circle.cpp.obj: source/CMakeFiles/example.dir/flags.make
source/CMakeFiles/example.dir/circle.cpp.obj: source/CMakeFiles/example.dir/includes_CXX.rsp
source/CMakeFiles/example.dir/circle.cpp.obj: ../source/circle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object source/CMakeFiles/example.dir/circle.cpp.obj"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\example.dir\circle.cpp.obj -c "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\circle.cpp"

source/CMakeFiles/example.dir/circle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/example.dir/circle.cpp.i"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\circle.cpp" > CMakeFiles\example.dir\circle.cpp.i

source/CMakeFiles/example.dir/circle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/example.dir/circle.cpp.s"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source\circle.cpp" -o CMakeFiles\example.dir\circle.cpp.s

source/CMakeFiles/example.dir/circle.cpp.obj.requires:

.PHONY : source/CMakeFiles/example.dir/circle.cpp.obj.requires

source/CMakeFiles/example.dir/circle.cpp.obj.provides: source/CMakeFiles/example.dir/circle.cpp.obj.requires
	$(MAKE) -f source\CMakeFiles\example.dir\build.make source/CMakeFiles/example.dir/circle.cpp.obj.provides.build
.PHONY : source/CMakeFiles/example.dir/circle.cpp.obj.provides

source/CMakeFiles/example.dir/circle.cpp.obj.provides.build: source/CMakeFiles/example.dir/circle.cpp.obj


# Object files for target example
example_OBJECTS = \
"CMakeFiles/example.dir/window.cpp.obj" \
"CMakeFiles/example.dir/glew.c.obj" \
"CMakeFiles/example.dir/example.cpp.obj" \
"CMakeFiles/example.dir/vec2.cpp.obj" \
"CMakeFiles/example.dir/mat2.cpp.obj" \
"CMakeFiles/example.dir/rectangle.cpp.obj" \
"CMakeFiles/example.dir/circle.cpp.obj"

# External object files for target example
example_EXTERNAL_OBJECTS =

source/example.exe: source/CMakeFiles/example.dir/window.cpp.obj
source/example.exe: source/CMakeFiles/example.dir/glew.c.obj
source/example.exe: source/CMakeFiles/example.dir/example.cpp.obj
source/example.exe: source/CMakeFiles/example.dir/vec2.cpp.obj
source/example.exe: source/CMakeFiles/example.dir/mat2.cpp.obj
source/example.exe: source/CMakeFiles/example.dir/rectangle.cpp.obj
source/example.exe: source/CMakeFiles/example.dir/circle.cpp.obj
source/example.exe: source/CMakeFiles/example.dir/build.make
source/example.exe: external/glfw-3.2.1/src/libglfw3.a
source/example.exe: libnanovg.a
source/example.exe: source/CMakeFiles/example.dir/linklibs.rsp
source/example.exe: source/CMakeFiles/example.dir/objects1.rsp
source/example.exe: source/CMakeFiles/example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable example.exe"
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\example.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/CMakeFiles/example.dir/build: source/example.exe

.PHONY : source/CMakeFiles/example.dir/build

source/CMakeFiles/example.dir/requires: source/CMakeFiles/example.dir/window.cpp.obj.requires
source/CMakeFiles/example.dir/requires: source/CMakeFiles/example.dir/glew.c.obj.requires
source/CMakeFiles/example.dir/requires: source/CMakeFiles/example.dir/example.cpp.obj.requires
source/CMakeFiles/example.dir/requires: source/CMakeFiles/example.dir/vec2.cpp.obj.requires
source/CMakeFiles/example.dir/requires: source/CMakeFiles/example.dir/mat2.cpp.obj.requires
source/CMakeFiles/example.dir/requires: source/CMakeFiles/example.dir/rectangle.cpp.obj.requires
source/CMakeFiles/example.dir/requires: source/CMakeFiles/example.dir/circle.cpp.obj.requires

.PHONY : source/CMakeFiles/example.dir/requires

source/CMakeFiles/example.dir/clean:
	cd /d C:\Users\VANESS~1\PROGRA~3\CMAKE-~1\source && $(CMAKE_COMMAND) -P CMakeFiles\example.dir\cmake_clean.cmake
.PHONY : source/CMakeFiles/example.dir/clean

source/CMakeFiles/example.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2" "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\source" "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\cmake-build-debug" "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\cmake-build-debug\source" "C:\Users\Vanessa Retz\programmiersprachen-aufgabenblatt-2\cmake-build-debug\source\CMakeFiles\example.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : source/CMakeFiles/example.dir/depend

