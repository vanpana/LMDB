# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = "C:\Program Files (x86)\JetBrains\CLion 2016.3.5\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\JetBrains\CLion 2016.3.5\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/LMDB.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LMDB.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LMDB.dir/flags.make

CMakeFiles/LMDB.dir/common/array.cpp.obj: CMakeFiles/LMDB.dir/flags.make
CMakeFiles/LMDB.dir/common/array.cpp.obj: ../common/array.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LMDB.dir/common/array.cpp.obj"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LMDB.dir\common\array.cpp.obj -c "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\common\array.cpp"

CMakeFiles/LMDB.dir/common/array.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LMDB.dir/common/array.cpp.i"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\common\array.cpp" > CMakeFiles\LMDB.dir\common\array.cpp.i

CMakeFiles/LMDB.dir/common/array.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LMDB.dir/common/array.cpp.s"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\common\array.cpp" -o CMakeFiles\LMDB.dir\common\array.cpp.s

CMakeFiles/LMDB.dir/common/array.cpp.obj.requires:

.PHONY : CMakeFiles/LMDB.dir/common/array.cpp.obj.requires

CMakeFiles/LMDB.dir/common/array.cpp.obj.provides: CMakeFiles/LMDB.dir/common/array.cpp.obj.requires
	$(MAKE) -f CMakeFiles\LMDB.dir\build.make CMakeFiles/LMDB.dir/common/array.cpp.obj.provides.build
.PHONY : CMakeFiles/LMDB.dir/common/array.cpp.obj.provides

CMakeFiles/LMDB.dir/common/array.cpp.obj.provides.build: CMakeFiles/LMDB.dir/common/array.cpp.obj


CMakeFiles/LMDB.dir/common/util.c.obj: CMakeFiles/LMDB.dir/flags.make
CMakeFiles/LMDB.dir/common/util.c.obj: ../common/util.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/LMDB.dir/common/util.c.obj"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\LMDB.dir\common\util.c.obj   -c "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\common\util.c"

CMakeFiles/LMDB.dir/common/util.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LMDB.dir/common/util.c.i"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\common\util.c" > CMakeFiles\LMDB.dir\common\util.c.i

CMakeFiles/LMDB.dir/common/util.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LMDB.dir/common/util.c.s"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\common\util.c" -o CMakeFiles\LMDB.dir\common\util.c.s

CMakeFiles/LMDB.dir/common/util.c.obj.requires:

.PHONY : CMakeFiles/LMDB.dir/common/util.c.obj.requires

CMakeFiles/LMDB.dir/common/util.c.obj.provides: CMakeFiles/LMDB.dir/common/util.c.obj.requires
	$(MAKE) -f CMakeFiles\LMDB.dir\build.make CMakeFiles/LMDB.dir/common/util.c.obj.provides.build
.PHONY : CMakeFiles/LMDB.dir/common/util.c.obj.provides

CMakeFiles/LMDB.dir/common/util.c.obj.provides.build: CMakeFiles/LMDB.dir/common/util.c.obj


CMakeFiles/LMDB.dir/controller/controller.cpp.obj: CMakeFiles/LMDB.dir/flags.make
CMakeFiles/LMDB.dir/controller/controller.cpp.obj: ../controller/controller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/LMDB.dir/controller/controller.cpp.obj"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LMDB.dir\controller\controller.cpp.obj -c "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\controller\controller.cpp"

CMakeFiles/LMDB.dir/controller/controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LMDB.dir/controller/controller.cpp.i"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\controller\controller.cpp" > CMakeFiles\LMDB.dir\controller\controller.cpp.i

CMakeFiles/LMDB.dir/controller/controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LMDB.dir/controller/controller.cpp.s"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\controller\controller.cpp" -o CMakeFiles\LMDB.dir\controller\controller.cpp.s

CMakeFiles/LMDB.dir/controller/controller.cpp.obj.requires:

.PHONY : CMakeFiles/LMDB.dir/controller/controller.cpp.obj.requires

CMakeFiles/LMDB.dir/controller/controller.cpp.obj.provides: CMakeFiles/LMDB.dir/controller/controller.cpp.obj.requires
	$(MAKE) -f CMakeFiles\LMDB.dir\build.make CMakeFiles/LMDB.dir/controller/controller.cpp.obj.provides.build
.PHONY : CMakeFiles/LMDB.dir/controller/controller.cpp.obj.provides

CMakeFiles/LMDB.dir/controller/controller.cpp.obj.provides.build: CMakeFiles/LMDB.dir/controller/controller.cpp.obj


CMakeFiles/LMDB.dir/domain/entities.cpp.obj: CMakeFiles/LMDB.dir/flags.make
CMakeFiles/LMDB.dir/domain/entities.cpp.obj: ../domain/entities.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/LMDB.dir/domain/entities.cpp.obj"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LMDB.dir\domain\entities.cpp.obj -c "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\domain\entities.cpp"

CMakeFiles/LMDB.dir/domain/entities.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LMDB.dir/domain/entities.cpp.i"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\domain\entities.cpp" > CMakeFiles\LMDB.dir\domain\entities.cpp.i

CMakeFiles/LMDB.dir/domain/entities.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LMDB.dir/domain/entities.cpp.s"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\domain\entities.cpp" -o CMakeFiles\LMDB.dir\domain\entities.cpp.s

CMakeFiles/LMDB.dir/domain/entities.cpp.obj.requires:

.PHONY : CMakeFiles/LMDB.dir/domain/entities.cpp.obj.requires

CMakeFiles/LMDB.dir/domain/entities.cpp.obj.provides: CMakeFiles/LMDB.dir/domain/entities.cpp.obj.requires
	$(MAKE) -f CMakeFiles\LMDB.dir\build.make CMakeFiles/LMDB.dir/domain/entities.cpp.obj.provides.build
.PHONY : CMakeFiles/LMDB.dir/domain/entities.cpp.obj.provides

CMakeFiles/LMDB.dir/domain/entities.cpp.obj.provides.build: CMakeFiles/LMDB.dir/domain/entities.cpp.obj


CMakeFiles/LMDB.dir/repository/repository.cpp.obj: CMakeFiles/LMDB.dir/flags.make
CMakeFiles/LMDB.dir/repository/repository.cpp.obj: ../repository/repository.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/LMDB.dir/repository/repository.cpp.obj"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LMDB.dir\repository\repository.cpp.obj -c "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\repository\repository.cpp"

CMakeFiles/LMDB.dir/repository/repository.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LMDB.dir/repository/repository.cpp.i"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\repository\repository.cpp" > CMakeFiles\LMDB.dir\repository\repository.cpp.i

CMakeFiles/LMDB.dir/repository/repository.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LMDB.dir/repository/repository.cpp.s"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\repository\repository.cpp" -o CMakeFiles\LMDB.dir\repository\repository.cpp.s

CMakeFiles/LMDB.dir/repository/repository.cpp.obj.requires:

.PHONY : CMakeFiles/LMDB.dir/repository/repository.cpp.obj.requires

CMakeFiles/LMDB.dir/repository/repository.cpp.obj.provides: CMakeFiles/LMDB.dir/repository/repository.cpp.obj.requires
	$(MAKE) -f CMakeFiles\LMDB.dir\build.make CMakeFiles/LMDB.dir/repository/repository.cpp.obj.provides.build
.PHONY : CMakeFiles/LMDB.dir/repository/repository.cpp.obj.provides

CMakeFiles/LMDB.dir/repository/repository.cpp.obj.provides.build: CMakeFiles/LMDB.dir/repository/repository.cpp.obj


CMakeFiles/LMDB.dir/ui/console.cpp.obj: CMakeFiles/LMDB.dir/flags.make
CMakeFiles/LMDB.dir/ui/console.cpp.obj: ../ui/console.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/LMDB.dir/ui/console.cpp.obj"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LMDB.dir\ui\console.cpp.obj -c "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\ui\console.cpp"

CMakeFiles/LMDB.dir/ui/console.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LMDB.dir/ui/console.cpp.i"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\ui\console.cpp" > CMakeFiles\LMDB.dir\ui\console.cpp.i

CMakeFiles/LMDB.dir/ui/console.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LMDB.dir/ui/console.cpp.s"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\ui\console.cpp" -o CMakeFiles\LMDB.dir\ui\console.cpp.s

CMakeFiles/LMDB.dir/ui/console.cpp.obj.requires:

.PHONY : CMakeFiles/LMDB.dir/ui/console.cpp.obj.requires

CMakeFiles/LMDB.dir/ui/console.cpp.obj.provides: CMakeFiles/LMDB.dir/ui/console.cpp.obj.requires
	$(MAKE) -f CMakeFiles\LMDB.dir\build.make CMakeFiles/LMDB.dir/ui/console.cpp.obj.provides.build
.PHONY : CMakeFiles/LMDB.dir/ui/console.cpp.obj.provides

CMakeFiles/LMDB.dir/ui/console.cpp.obj.provides.build: CMakeFiles/LMDB.dir/ui/console.cpp.obj


CMakeFiles/LMDB.dir/main.cpp.obj: CMakeFiles/LMDB.dir/flags.make
CMakeFiles/LMDB.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/LMDB.dir/main.cpp.obj"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\LMDB.dir\main.cpp.obj -c "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\main.cpp"

CMakeFiles/LMDB.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LMDB.dir/main.cpp.i"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\main.cpp" > CMakeFiles\LMDB.dir\main.cpp.i

CMakeFiles/LMDB.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LMDB.dir/main.cpp.s"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\main.cpp" -o CMakeFiles\LMDB.dir\main.cpp.s

CMakeFiles/LMDB.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/LMDB.dir/main.cpp.obj.requires

CMakeFiles/LMDB.dir/main.cpp.obj.provides: CMakeFiles/LMDB.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\LMDB.dir\build.make CMakeFiles/LMDB.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/LMDB.dir/main.cpp.obj.provides

CMakeFiles/LMDB.dir/main.cpp.obj.provides.build: CMakeFiles/LMDB.dir/main.cpp.obj


# Object files for target LMDB
LMDB_OBJECTS = \
"CMakeFiles/LMDB.dir/common/array.cpp.obj" \
"CMakeFiles/LMDB.dir/common/util.c.obj" \
"CMakeFiles/LMDB.dir/controller/controller.cpp.obj" \
"CMakeFiles/LMDB.dir/domain/entities.cpp.obj" \
"CMakeFiles/LMDB.dir/repository/repository.cpp.obj" \
"CMakeFiles/LMDB.dir/ui/console.cpp.obj" \
"CMakeFiles/LMDB.dir/main.cpp.obj"

# External object files for target LMDB
LMDB_EXTERNAL_OBJECTS =

LMDB.exe: CMakeFiles/LMDB.dir/common/array.cpp.obj
LMDB.exe: CMakeFiles/LMDB.dir/common/util.c.obj
LMDB.exe: CMakeFiles/LMDB.dir/controller/controller.cpp.obj
LMDB.exe: CMakeFiles/LMDB.dir/domain/entities.cpp.obj
LMDB.exe: CMakeFiles/LMDB.dir/repository/repository.cpp.obj
LMDB.exe: CMakeFiles/LMDB.dir/ui/console.cpp.obj
LMDB.exe: CMakeFiles/LMDB.dir/main.cpp.obj
LMDB.exe: CMakeFiles/LMDB.dir/build.make
LMDB.exe: CMakeFiles/LMDB.dir/linklibs.rsp
LMDB.exe: CMakeFiles/LMDB.dir/objects1.rsp
LMDB.exe: CMakeFiles/LMDB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable LMDB.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\LMDB.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LMDB.dir/build: LMDB.exe

.PHONY : CMakeFiles/LMDB.dir/build

CMakeFiles/LMDB.dir/requires: CMakeFiles/LMDB.dir/common/array.cpp.obj.requires
CMakeFiles/LMDB.dir/requires: CMakeFiles/LMDB.dir/common/util.c.obj.requires
CMakeFiles/LMDB.dir/requires: CMakeFiles/LMDB.dir/controller/controller.cpp.obj.requires
CMakeFiles/LMDB.dir/requires: CMakeFiles/LMDB.dir/domain/entities.cpp.obj.requires
CMakeFiles/LMDB.dir/requires: CMakeFiles/LMDB.dir/repository/repository.cpp.obj.requires
CMakeFiles/LMDB.dir/requires: CMakeFiles/LMDB.dir/ui/console.cpp.obj.requires
CMakeFiles/LMDB.dir/requires: CMakeFiles/LMDB.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/LMDB.dir/requires

CMakeFiles/LMDB.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\LMDB.dir\cmake_clean.cmake
.PHONY : CMakeFiles/LMDB.dir/clean

CMakeFiles/LMDB.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB" "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB" "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\cmake-build-debug" "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\cmake-build-debug" "C:\Users\Panaite Dorinel\Documents\GitHub\LMDB\cmake-build-debug\CMakeFiles\LMDB.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/LMDB.dir/depend

