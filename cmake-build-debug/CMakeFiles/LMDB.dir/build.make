# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/LMDB.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LMDB.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LMDB.dir/flags.make

CMakeFiles/LMDB.dir/common/array.cpp.o: CMakeFiles/LMDB.dir/flags.make
CMakeFiles/LMDB.dir/common/array.cpp.o: ../common/array.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LMDB.dir/common/array.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LMDB.dir/common/array.cpp.o -c "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/common/array.cpp"

CMakeFiles/LMDB.dir/common/array.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LMDB.dir/common/array.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/common/array.cpp" > CMakeFiles/LMDB.dir/common/array.cpp.i

CMakeFiles/LMDB.dir/common/array.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LMDB.dir/common/array.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/common/array.cpp" -o CMakeFiles/LMDB.dir/common/array.cpp.s

CMakeFiles/LMDB.dir/common/array.cpp.o.requires:

.PHONY : CMakeFiles/LMDB.dir/common/array.cpp.o.requires

CMakeFiles/LMDB.dir/common/array.cpp.o.provides: CMakeFiles/LMDB.dir/common/array.cpp.o.requires
	$(MAKE) -f CMakeFiles/LMDB.dir/build.make CMakeFiles/LMDB.dir/common/array.cpp.o.provides.build
.PHONY : CMakeFiles/LMDB.dir/common/array.cpp.o.provides

CMakeFiles/LMDB.dir/common/array.cpp.o.provides.build: CMakeFiles/LMDB.dir/common/array.cpp.o


CMakeFiles/LMDB.dir/common/util.c.o: CMakeFiles/LMDB.dir/flags.make
CMakeFiles/LMDB.dir/common/util.c.o: ../common/util.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/LMDB.dir/common/util.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/LMDB.dir/common/util.c.o   -c "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/common/util.c"

CMakeFiles/LMDB.dir/common/util.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/LMDB.dir/common/util.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/common/util.c" > CMakeFiles/LMDB.dir/common/util.c.i

CMakeFiles/LMDB.dir/common/util.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/LMDB.dir/common/util.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/common/util.c" -o CMakeFiles/LMDB.dir/common/util.c.s

CMakeFiles/LMDB.dir/common/util.c.o.requires:

.PHONY : CMakeFiles/LMDB.dir/common/util.c.o.requires

CMakeFiles/LMDB.dir/common/util.c.o.provides: CMakeFiles/LMDB.dir/common/util.c.o.requires
	$(MAKE) -f CMakeFiles/LMDB.dir/build.make CMakeFiles/LMDB.dir/common/util.c.o.provides.build
.PHONY : CMakeFiles/LMDB.dir/common/util.c.o.provides

CMakeFiles/LMDB.dir/common/util.c.o.provides.build: CMakeFiles/LMDB.dir/common/util.c.o


CMakeFiles/LMDB.dir/controller/controller.cpp.o: CMakeFiles/LMDB.dir/flags.make
CMakeFiles/LMDB.dir/controller/controller.cpp.o: ../controller/controller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/LMDB.dir/controller/controller.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LMDB.dir/controller/controller.cpp.o -c "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/controller/controller.cpp"

CMakeFiles/LMDB.dir/controller/controller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LMDB.dir/controller/controller.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/controller/controller.cpp" > CMakeFiles/LMDB.dir/controller/controller.cpp.i

CMakeFiles/LMDB.dir/controller/controller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LMDB.dir/controller/controller.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/controller/controller.cpp" -o CMakeFiles/LMDB.dir/controller/controller.cpp.s

CMakeFiles/LMDB.dir/controller/controller.cpp.o.requires:

.PHONY : CMakeFiles/LMDB.dir/controller/controller.cpp.o.requires

CMakeFiles/LMDB.dir/controller/controller.cpp.o.provides: CMakeFiles/LMDB.dir/controller/controller.cpp.o.requires
	$(MAKE) -f CMakeFiles/LMDB.dir/build.make CMakeFiles/LMDB.dir/controller/controller.cpp.o.provides.build
.PHONY : CMakeFiles/LMDB.dir/controller/controller.cpp.o.provides

CMakeFiles/LMDB.dir/controller/controller.cpp.o.provides.build: CMakeFiles/LMDB.dir/controller/controller.cpp.o


CMakeFiles/LMDB.dir/domain/entities.cpp.o: CMakeFiles/LMDB.dir/flags.make
CMakeFiles/LMDB.dir/domain/entities.cpp.o: ../domain/entities.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/LMDB.dir/domain/entities.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LMDB.dir/domain/entities.cpp.o -c "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/domain/entities.cpp"

CMakeFiles/LMDB.dir/domain/entities.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LMDB.dir/domain/entities.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/domain/entities.cpp" > CMakeFiles/LMDB.dir/domain/entities.cpp.i

CMakeFiles/LMDB.dir/domain/entities.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LMDB.dir/domain/entities.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/domain/entities.cpp" -o CMakeFiles/LMDB.dir/domain/entities.cpp.s

CMakeFiles/LMDB.dir/domain/entities.cpp.o.requires:

.PHONY : CMakeFiles/LMDB.dir/domain/entities.cpp.o.requires

CMakeFiles/LMDB.dir/domain/entities.cpp.o.provides: CMakeFiles/LMDB.dir/domain/entities.cpp.o.requires
	$(MAKE) -f CMakeFiles/LMDB.dir/build.make CMakeFiles/LMDB.dir/domain/entities.cpp.o.provides.build
.PHONY : CMakeFiles/LMDB.dir/domain/entities.cpp.o.provides

CMakeFiles/LMDB.dir/domain/entities.cpp.o.provides.build: CMakeFiles/LMDB.dir/domain/entities.cpp.o


CMakeFiles/LMDB.dir/repository/repository.cpp.o: CMakeFiles/LMDB.dir/flags.make
CMakeFiles/LMDB.dir/repository/repository.cpp.o: ../repository/repository.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/LMDB.dir/repository/repository.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LMDB.dir/repository/repository.cpp.o -c "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/repository/repository.cpp"

CMakeFiles/LMDB.dir/repository/repository.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LMDB.dir/repository/repository.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/repository/repository.cpp" > CMakeFiles/LMDB.dir/repository/repository.cpp.i

CMakeFiles/LMDB.dir/repository/repository.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LMDB.dir/repository/repository.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/repository/repository.cpp" -o CMakeFiles/LMDB.dir/repository/repository.cpp.s

CMakeFiles/LMDB.dir/repository/repository.cpp.o.requires:

.PHONY : CMakeFiles/LMDB.dir/repository/repository.cpp.o.requires

CMakeFiles/LMDB.dir/repository/repository.cpp.o.provides: CMakeFiles/LMDB.dir/repository/repository.cpp.o.requires
	$(MAKE) -f CMakeFiles/LMDB.dir/build.make CMakeFiles/LMDB.dir/repository/repository.cpp.o.provides.build
.PHONY : CMakeFiles/LMDB.dir/repository/repository.cpp.o.provides

CMakeFiles/LMDB.dir/repository/repository.cpp.o.provides.build: CMakeFiles/LMDB.dir/repository/repository.cpp.o


CMakeFiles/LMDB.dir/ui/console.cpp.o: CMakeFiles/LMDB.dir/flags.make
CMakeFiles/LMDB.dir/ui/console.cpp.o: ../ui/console.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/LMDB.dir/ui/console.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LMDB.dir/ui/console.cpp.o -c "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/ui/console.cpp"

CMakeFiles/LMDB.dir/ui/console.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LMDB.dir/ui/console.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/ui/console.cpp" > CMakeFiles/LMDB.dir/ui/console.cpp.i

CMakeFiles/LMDB.dir/ui/console.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LMDB.dir/ui/console.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/ui/console.cpp" -o CMakeFiles/LMDB.dir/ui/console.cpp.s

CMakeFiles/LMDB.dir/ui/console.cpp.o.requires:

.PHONY : CMakeFiles/LMDB.dir/ui/console.cpp.o.requires

CMakeFiles/LMDB.dir/ui/console.cpp.o.provides: CMakeFiles/LMDB.dir/ui/console.cpp.o.requires
	$(MAKE) -f CMakeFiles/LMDB.dir/build.make CMakeFiles/LMDB.dir/ui/console.cpp.o.provides.build
.PHONY : CMakeFiles/LMDB.dir/ui/console.cpp.o.provides

CMakeFiles/LMDB.dir/ui/console.cpp.o.provides.build: CMakeFiles/LMDB.dir/ui/console.cpp.o


CMakeFiles/LMDB.dir/main.cpp.o: CMakeFiles/LMDB.dir/flags.make
CMakeFiles/LMDB.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/LMDB.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LMDB.dir/main.cpp.o -c "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/main.cpp"

CMakeFiles/LMDB.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LMDB.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/main.cpp" > CMakeFiles/LMDB.dir/main.cpp.i

CMakeFiles/LMDB.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LMDB.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/main.cpp" -o CMakeFiles/LMDB.dir/main.cpp.s

CMakeFiles/LMDB.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/LMDB.dir/main.cpp.o.requires

CMakeFiles/LMDB.dir/main.cpp.o.provides: CMakeFiles/LMDB.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/LMDB.dir/build.make CMakeFiles/LMDB.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/LMDB.dir/main.cpp.o.provides

CMakeFiles/LMDB.dir/main.cpp.o.provides.build: CMakeFiles/LMDB.dir/main.cpp.o


# Object files for target LMDB
LMDB_OBJECTS = \
"CMakeFiles/LMDB.dir/common/array.cpp.o" \
"CMakeFiles/LMDB.dir/common/util.c.o" \
"CMakeFiles/LMDB.dir/controller/controller.cpp.o" \
"CMakeFiles/LMDB.dir/domain/entities.cpp.o" \
"CMakeFiles/LMDB.dir/repository/repository.cpp.o" \
"CMakeFiles/LMDB.dir/ui/console.cpp.o" \
"CMakeFiles/LMDB.dir/main.cpp.o"

# External object files for target LMDB
LMDB_EXTERNAL_OBJECTS =

LMDB: CMakeFiles/LMDB.dir/common/array.cpp.o
LMDB: CMakeFiles/LMDB.dir/common/util.c.o
LMDB: CMakeFiles/LMDB.dir/controller/controller.cpp.o
LMDB: CMakeFiles/LMDB.dir/domain/entities.cpp.o
LMDB: CMakeFiles/LMDB.dir/repository/repository.cpp.o
LMDB: CMakeFiles/LMDB.dir/ui/console.cpp.o
LMDB: CMakeFiles/LMDB.dir/main.cpp.o
LMDB: CMakeFiles/LMDB.dir/build.make
LMDB: CMakeFiles/LMDB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable LMDB"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LMDB.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LMDB.dir/build: LMDB

.PHONY : CMakeFiles/LMDB.dir/build

CMakeFiles/LMDB.dir/requires: CMakeFiles/LMDB.dir/common/array.cpp.o.requires
CMakeFiles/LMDB.dir/requires: CMakeFiles/LMDB.dir/common/util.c.o.requires
CMakeFiles/LMDB.dir/requires: CMakeFiles/LMDB.dir/controller/controller.cpp.o.requires
CMakeFiles/LMDB.dir/requires: CMakeFiles/LMDB.dir/domain/entities.cpp.o.requires
CMakeFiles/LMDB.dir/requires: CMakeFiles/LMDB.dir/repository/repository.cpp.o.requires
CMakeFiles/LMDB.dir/requires: CMakeFiles/LMDB.dir/ui/console.cpp.o.requires
CMakeFiles/LMDB.dir/requires: CMakeFiles/LMDB.dir/main.cpp.o.requires

.PHONY : CMakeFiles/LMDB.dir/requires

CMakeFiles/LMDB.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LMDB.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LMDB.dir/clean

CMakeFiles/LMDB.dir/depend:
	cd "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB" "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB" "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/cmake-build-debug" "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/cmake-build-debug" "/Users/vanpana/Google Drive/Uni/An 1/Semestrul 2 - Mac/OOP/LMDB/cmake-build-debug/CMakeFiles/LMDB.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/LMDB.dir/depend

