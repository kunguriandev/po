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

# Include any dependencies generated for this target.
include CMakeFiles/qtCalc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/qtCalc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/qtCalc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/qtCalc.dir/flags.make

qtCalc_autogen/timestamp: /usr/lib/qt6/libexec/moc
qtCalc_autogen/timestamp: /usr/lib/qt6/libexec/uic
qtCalc_autogen/timestamp: CMakeFiles/qtCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/kungurian/dev/po2/po/qtproj4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target qtCalc"
	/usr/bin/cmake -E cmake_autogen /home/kungurian/dev/po2/po/qtproj4/build/CMakeFiles/qtCalc_autogen.dir/AutogenInfo.json ""
	/usr/bin/cmake -E touch /home/kungurian/dev/po2/po/qtproj4/build/qtCalc_autogen/timestamp

CMakeFiles/qtCalc.dir/qtCalc_autogen/mocs_compilation.cpp.o: CMakeFiles/qtCalc.dir/flags.make
CMakeFiles/qtCalc.dir/qtCalc_autogen/mocs_compilation.cpp.o: qtCalc_autogen/mocs_compilation.cpp
CMakeFiles/qtCalc.dir/qtCalc_autogen/mocs_compilation.cpp.o: CMakeFiles/qtCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kungurian/dev/po2/po/qtproj4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/qtCalc.dir/qtCalc_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qtCalc.dir/qtCalc_autogen/mocs_compilation.cpp.o -MF CMakeFiles/qtCalc.dir/qtCalc_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/qtCalc.dir/qtCalc_autogen/mocs_compilation.cpp.o -c /home/kungurian/dev/po2/po/qtproj4/build/qtCalc_autogen/mocs_compilation.cpp

CMakeFiles/qtCalc.dir/qtCalc_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qtCalc.dir/qtCalc_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kungurian/dev/po2/po/qtproj4/build/qtCalc_autogen/mocs_compilation.cpp > CMakeFiles/qtCalc.dir/qtCalc_autogen/mocs_compilation.cpp.i

CMakeFiles/qtCalc.dir/qtCalc_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qtCalc.dir/qtCalc_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kungurian/dev/po2/po/qtproj4/build/qtCalc_autogen/mocs_compilation.cpp -o CMakeFiles/qtCalc.dir/qtCalc_autogen/mocs_compilation.cpp.s

CMakeFiles/qtCalc.dir/src/main.cpp.o: CMakeFiles/qtCalc.dir/flags.make
CMakeFiles/qtCalc.dir/src/main.cpp.o: /home/kungurian/dev/po2/po/qtproj4/src/main.cpp
CMakeFiles/qtCalc.dir/src/main.cpp.o: CMakeFiles/qtCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kungurian/dev/po2/po/qtproj4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/qtCalc.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qtCalc.dir/src/main.cpp.o -MF CMakeFiles/qtCalc.dir/src/main.cpp.o.d -o CMakeFiles/qtCalc.dir/src/main.cpp.o -c /home/kungurian/dev/po2/po/qtproj4/src/main.cpp

CMakeFiles/qtCalc.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qtCalc.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kungurian/dev/po2/po/qtproj4/src/main.cpp > CMakeFiles/qtCalc.dir/src/main.cpp.i

CMakeFiles/qtCalc.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qtCalc.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kungurian/dev/po2/po/qtproj4/src/main.cpp -o CMakeFiles/qtCalc.dir/src/main.cpp.s

CMakeFiles/qtCalc.dir/src/mainwindow.cpp.o: CMakeFiles/qtCalc.dir/flags.make
CMakeFiles/qtCalc.dir/src/mainwindow.cpp.o: /home/kungurian/dev/po2/po/qtproj4/src/mainwindow.cpp
CMakeFiles/qtCalc.dir/src/mainwindow.cpp.o: CMakeFiles/qtCalc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/kungurian/dev/po2/po/qtproj4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/qtCalc.dir/src/mainwindow.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/qtCalc.dir/src/mainwindow.cpp.o -MF CMakeFiles/qtCalc.dir/src/mainwindow.cpp.o.d -o CMakeFiles/qtCalc.dir/src/mainwindow.cpp.o -c /home/kungurian/dev/po2/po/qtproj4/src/mainwindow.cpp

CMakeFiles/qtCalc.dir/src/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/qtCalc.dir/src/mainwindow.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kungurian/dev/po2/po/qtproj4/src/mainwindow.cpp > CMakeFiles/qtCalc.dir/src/mainwindow.cpp.i

CMakeFiles/qtCalc.dir/src/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/qtCalc.dir/src/mainwindow.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kungurian/dev/po2/po/qtproj4/src/mainwindow.cpp -o CMakeFiles/qtCalc.dir/src/mainwindow.cpp.s

# Object files for target qtCalc
qtCalc_OBJECTS = \
"CMakeFiles/qtCalc.dir/qtCalc_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/qtCalc.dir/src/main.cpp.o" \
"CMakeFiles/qtCalc.dir/src/mainwindow.cpp.o"

# External object files for target qtCalc
qtCalc_EXTERNAL_OBJECTS =

qtCalc: CMakeFiles/qtCalc.dir/qtCalc_autogen/mocs_compilation.cpp.o
qtCalc: CMakeFiles/qtCalc.dir/src/main.cpp.o
qtCalc: CMakeFiles/qtCalc.dir/src/mainwindow.cpp.o
qtCalc: CMakeFiles/qtCalc.dir/build.make
qtCalc: /usr/lib/x86_64-linux-gnu/libQt6Widgets.so.6.4.2
qtCalc: /usr/lib/x86_64-linux-gnu/libQt6Gui.so.6.4.2
qtCalc: /usr/lib/x86_64-linux-gnu/libQt6Core.so.6.4.2
qtCalc: /usr/lib/x86_64-linux-gnu/libGLX.so
qtCalc: /usr/lib/x86_64-linux-gnu/libOpenGL.so
qtCalc: CMakeFiles/qtCalc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/kungurian/dev/po2/po/qtproj4/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable qtCalc"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/qtCalc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/qtCalc.dir/build: qtCalc
.PHONY : CMakeFiles/qtCalc.dir/build

CMakeFiles/qtCalc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/qtCalc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/qtCalc.dir/clean

CMakeFiles/qtCalc.dir/depend: qtCalc_autogen/timestamp
	cd /home/kungurian/dev/po2/po/qtproj4/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kungurian/dev/po2/po/qtproj4 /home/kungurian/dev/po2/po/qtproj4 /home/kungurian/dev/po2/po/qtproj4/build /home/kungurian/dev/po2/po/qtproj4/build /home/kungurian/dev/po2/po/qtproj4/build/CMakeFiles/qtCalc.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/qtCalc.dir/depend

