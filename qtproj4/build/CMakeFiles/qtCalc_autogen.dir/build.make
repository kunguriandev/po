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
CMAKE_SOURCE_DIR = /home/kungurian/dev/po2/po/qtproj4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kungurian/dev/po2/po/qtproj4/build

# Utility rule file for qtCalc_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/qtCalc_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/qtCalc_autogen.dir/progress.make

CMakeFiles/qtCalc_autogen: qtCalc_autogen/timestamp

qtCalc_autogen/timestamp: /usr/lib/qt6/libexec/moc
qtCalc_autogen/timestamp: /usr/lib/qt6/libexec/uic
qtCalc_autogen/timestamp: CMakeFiles/qtCalc_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/kungurian/dev/po2/po/qtproj4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target qtCalc"
	/usr/bin/cmake -E cmake_autogen /home/kungurian/dev/po2/po/qtproj4/build/CMakeFiles/qtCalc_autogen.dir/AutogenInfo.json ""
	/usr/bin/cmake -E touch /home/kungurian/dev/po2/po/qtproj4/build/qtCalc_autogen/timestamp

qtCalc_autogen: CMakeFiles/qtCalc_autogen
qtCalc_autogen: qtCalc_autogen/timestamp
qtCalc_autogen: CMakeFiles/qtCalc_autogen.dir/build.make
.PHONY : qtCalc_autogen

# Rule to build all files generated by this target.
CMakeFiles/qtCalc_autogen.dir/build: qtCalc_autogen
.PHONY : CMakeFiles/qtCalc_autogen.dir/build

CMakeFiles/qtCalc_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/qtCalc_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/qtCalc_autogen.dir/clean

CMakeFiles/qtCalc_autogen.dir/depend:
	cd /home/kungurian/dev/po2/po/qtproj4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kungurian/dev/po2/po/qtproj4 /home/kungurian/dev/po2/po/qtproj4 /home/kungurian/dev/po2/po/qtproj4/build /home/kungurian/dev/po2/po/qtproj4/build /home/kungurian/dev/po2/po/qtproj4/build/CMakeFiles/qtCalc_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/qtCalc_autogen.dir/depend

