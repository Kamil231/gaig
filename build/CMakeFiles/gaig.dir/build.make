# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kamil/Desktop/gaig

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kamil/Desktop/gaig/build

# Include any dependencies generated for this target.
include CMakeFiles/gaig.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gaig.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gaig.dir/flags.make

CMakeFiles/gaig.dir/gaig.cpp.o: CMakeFiles/gaig.dir/flags.make
CMakeFiles/gaig.dir/gaig.cpp.o: ../gaig.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/Desktop/gaig/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gaig.dir/gaig.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaig.dir/gaig.cpp.o -c /home/kamil/Desktop/gaig/gaig.cpp

CMakeFiles/gaig.dir/gaig.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaig.dir/gaig.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/Desktop/gaig/gaig.cpp > CMakeFiles/gaig.dir/gaig.cpp.i

CMakeFiles/gaig.dir/gaig.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaig.dir/gaig.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/Desktop/gaig/gaig.cpp -o CMakeFiles/gaig.dir/gaig.cpp.s

CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_image.cpp.o: CMakeFiles/gaig.dir/flags.make
CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_image.cpp.o: ../src/img_utils/sfml_img_utils/sfml_image.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/Desktop/gaig/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_image.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_image.cpp.o -c /home/kamil/Desktop/gaig/src/img_utils/sfml_img_utils/sfml_image.cpp

CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_image.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_image.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/Desktop/gaig/src/img_utils/sfml_img_utils/sfml_image.cpp > CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_image.cpp.i

CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_image.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_image.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/Desktop/gaig/src/img_utils/sfml_img_utils/sfml_image.cpp -o CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_image.cpp.s

CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_pixel.cpp.o: CMakeFiles/gaig.dir/flags.make
CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_pixel.cpp.o: ../src/img_utils/sfml_img_utils/sfml_pixel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/Desktop/gaig/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_pixel.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_pixel.cpp.o -c /home/kamil/Desktop/gaig/src/img_utils/sfml_img_utils/sfml_pixel.cpp

CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_pixel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_pixel.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/Desktop/gaig/src/img_utils/sfml_img_utils/sfml_pixel.cpp > CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_pixel.cpp.i

CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_pixel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_pixel.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/Desktop/gaig/src/img_utils/sfml_img_utils/sfml_pixel.cpp -o CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_pixel.cpp.s

CMakeFiles/gaig.dir/src/rand_generation/random_parameter.cpp.o: CMakeFiles/gaig.dir/flags.make
CMakeFiles/gaig.dir/src/rand_generation/random_parameter.cpp.o: ../src/rand_generation/random_parameter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/Desktop/gaig/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/gaig.dir/src/rand_generation/random_parameter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaig.dir/src/rand_generation/random_parameter.cpp.o -c /home/kamil/Desktop/gaig/src/rand_generation/random_parameter.cpp

CMakeFiles/gaig.dir/src/rand_generation/random_parameter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaig.dir/src/rand_generation/random_parameter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/Desktop/gaig/src/rand_generation/random_parameter.cpp > CMakeFiles/gaig.dir/src/rand_generation/random_parameter.cpp.i

CMakeFiles/gaig.dir/src/rand_generation/random_parameter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaig.dir/src/rand_generation/random_parameter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/Desktop/gaig/src/rand_generation/random_parameter.cpp -o CMakeFiles/gaig.dir/src/rand_generation/random_parameter.cpp.s

CMakeFiles/gaig.dir/src/rand_generation/uniform_random_parameter.cpp.o: CMakeFiles/gaig.dir/flags.make
CMakeFiles/gaig.dir/src/rand_generation/uniform_random_parameter.cpp.o: ../src/rand_generation/uniform_random_parameter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/Desktop/gaig/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/gaig.dir/src/rand_generation/uniform_random_parameter.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaig.dir/src/rand_generation/uniform_random_parameter.cpp.o -c /home/kamil/Desktop/gaig/src/rand_generation/uniform_random_parameter.cpp

CMakeFiles/gaig.dir/src/rand_generation/uniform_random_parameter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaig.dir/src/rand_generation/uniform_random_parameter.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/Desktop/gaig/src/rand_generation/uniform_random_parameter.cpp > CMakeFiles/gaig.dir/src/rand_generation/uniform_random_parameter.cpp.i

CMakeFiles/gaig.dir/src/rand_generation/uniform_random_parameter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaig.dir/src/rand_generation/uniform_random_parameter.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/Desktop/gaig/src/rand_generation/uniform_random_parameter.cpp -o CMakeFiles/gaig.dir/src/rand_generation/uniform_random_parameter.cpp.s

CMakeFiles/gaig.dir/src/evolution/Circle.cpp.o: CMakeFiles/gaig.dir/flags.make
CMakeFiles/gaig.dir/src/evolution/Circle.cpp.o: ../src/evolution/Circle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/Desktop/gaig/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/gaig.dir/src/evolution/Circle.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaig.dir/src/evolution/Circle.cpp.o -c /home/kamil/Desktop/gaig/src/evolution/Circle.cpp

CMakeFiles/gaig.dir/src/evolution/Circle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaig.dir/src/evolution/Circle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/Desktop/gaig/src/evolution/Circle.cpp > CMakeFiles/gaig.dir/src/evolution/Circle.cpp.i

CMakeFiles/gaig.dir/src/evolution/Circle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaig.dir/src/evolution/Circle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/Desktop/gaig/src/evolution/Circle.cpp -o CMakeFiles/gaig.dir/src/evolution/Circle.cpp.s

CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/display_circle.cpp.o: CMakeFiles/gaig.dir/flags.make
CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/display_circle.cpp.o: ../src/img_utils/sfml_img_utils/display_circle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/Desktop/gaig/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/display_circle.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/display_circle.cpp.o -c /home/kamil/Desktop/gaig/src/img_utils/sfml_img_utils/display_circle.cpp

CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/display_circle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/display_circle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/Desktop/gaig/src/img_utils/sfml_img_utils/display_circle.cpp > CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/display_circle.cpp.i

CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/display_circle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/display_circle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/Desktop/gaig/src/img_utils/sfml_img_utils/display_circle.cpp -o CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/display_circle.cpp.s

CMakeFiles/gaig.dir/src/main_class/geneticEvolution.cpp.o: CMakeFiles/gaig.dir/flags.make
CMakeFiles/gaig.dir/src/main_class/geneticEvolution.cpp.o: ../src/main_class/geneticEvolution.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/Desktop/gaig/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/gaig.dir/src/main_class/geneticEvolution.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaig.dir/src/main_class/geneticEvolution.cpp.o -c /home/kamil/Desktop/gaig/src/main_class/geneticEvolution.cpp

CMakeFiles/gaig.dir/src/main_class/geneticEvolution.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaig.dir/src/main_class/geneticEvolution.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/Desktop/gaig/src/main_class/geneticEvolution.cpp > CMakeFiles/gaig.dir/src/main_class/geneticEvolution.cpp.i

CMakeFiles/gaig.dir/src/main_class/geneticEvolution.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaig.dir/src/main_class/geneticEvolution.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/Desktop/gaig/src/main_class/geneticEvolution.cpp -o CMakeFiles/gaig.dir/src/main_class/geneticEvolution.cpp.s

CMakeFiles/gaig.dir/src/population/individual.cpp.o: CMakeFiles/gaig.dir/flags.make
CMakeFiles/gaig.dir/src/population/individual.cpp.o: ../src/population/individual.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/Desktop/gaig/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/gaig.dir/src/population/individual.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaig.dir/src/population/individual.cpp.o -c /home/kamil/Desktop/gaig/src/population/individual.cpp

CMakeFiles/gaig.dir/src/population/individual.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaig.dir/src/population/individual.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/Desktop/gaig/src/population/individual.cpp > CMakeFiles/gaig.dir/src/population/individual.cpp.i

CMakeFiles/gaig.dir/src/population/individual.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaig.dir/src/population/individual.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/Desktop/gaig/src/population/individual.cpp -o CMakeFiles/gaig.dir/src/population/individual.cpp.s

CMakeFiles/gaig.dir/src/population/individual1.cpp.o: CMakeFiles/gaig.dir/flags.make
CMakeFiles/gaig.dir/src/population/individual1.cpp.o: ../src/population/individual1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/Desktop/gaig/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/gaig.dir/src/population/individual1.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaig.dir/src/population/individual1.cpp.o -c /home/kamil/Desktop/gaig/src/population/individual1.cpp

CMakeFiles/gaig.dir/src/population/individual1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaig.dir/src/population/individual1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/Desktop/gaig/src/population/individual1.cpp > CMakeFiles/gaig.dir/src/population/individual1.cpp.i

CMakeFiles/gaig.dir/src/population/individual1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaig.dir/src/population/individual1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/Desktop/gaig/src/population/individual1.cpp -o CMakeFiles/gaig.dir/src/population/individual1.cpp.s

CMakeFiles/gaig.dir/src/population/individual2.cpp.o: CMakeFiles/gaig.dir/flags.make
CMakeFiles/gaig.dir/src/population/individual2.cpp.o: ../src/population/individual2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/Desktop/gaig/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/gaig.dir/src/population/individual2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaig.dir/src/population/individual2.cpp.o -c /home/kamil/Desktop/gaig/src/population/individual2.cpp

CMakeFiles/gaig.dir/src/population/individual2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaig.dir/src/population/individual2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/Desktop/gaig/src/population/individual2.cpp > CMakeFiles/gaig.dir/src/population/individual2.cpp.i

CMakeFiles/gaig.dir/src/population/individual2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaig.dir/src/population/individual2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/Desktop/gaig/src/population/individual2.cpp -o CMakeFiles/gaig.dir/src/population/individual2.cpp.s

CMakeFiles/gaig.dir/src/population/population1.cpp.o: CMakeFiles/gaig.dir/flags.make
CMakeFiles/gaig.dir/src/population/population1.cpp.o: ../src/population/population1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/Desktop/gaig/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/gaig.dir/src/population/population1.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaig.dir/src/population/population1.cpp.o -c /home/kamil/Desktop/gaig/src/population/population1.cpp

CMakeFiles/gaig.dir/src/population/population1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaig.dir/src/population/population1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/Desktop/gaig/src/population/population1.cpp > CMakeFiles/gaig.dir/src/population/population1.cpp.i

CMakeFiles/gaig.dir/src/population/population1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaig.dir/src/population/population1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/Desktop/gaig/src/population/population1.cpp -o CMakeFiles/gaig.dir/src/population/population1.cpp.s

CMakeFiles/gaig.dir/src/population/population2.cpp.o: CMakeFiles/gaig.dir/flags.make
CMakeFiles/gaig.dir/src/population/population2.cpp.o: ../src/population/population2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/Desktop/gaig/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/gaig.dir/src/population/population2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaig.dir/src/population/population2.cpp.o -c /home/kamil/Desktop/gaig/src/population/population2.cpp

CMakeFiles/gaig.dir/src/population/population2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaig.dir/src/population/population2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/Desktop/gaig/src/population/population2.cpp > CMakeFiles/gaig.dir/src/population/population2.cpp.i

CMakeFiles/gaig.dir/src/population/population2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaig.dir/src/population/population2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/Desktop/gaig/src/population/population2.cpp -o CMakeFiles/gaig.dir/src/population/population2.cpp.s

CMakeFiles/gaig.dir/src/population/populationFactory.cpp.o: CMakeFiles/gaig.dir/flags.make
CMakeFiles/gaig.dir/src/population/populationFactory.cpp.o: ../src/population/populationFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/Desktop/gaig/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/gaig.dir/src/population/populationFactory.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaig.dir/src/population/populationFactory.cpp.o -c /home/kamil/Desktop/gaig/src/population/populationFactory.cpp

CMakeFiles/gaig.dir/src/population/populationFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaig.dir/src/population/populationFactory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/Desktop/gaig/src/population/populationFactory.cpp > CMakeFiles/gaig.dir/src/population/populationFactory.cpp.i

CMakeFiles/gaig.dir/src/population/populationFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaig.dir/src/population/populationFactory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/Desktop/gaig/src/population/populationFactory.cpp -o CMakeFiles/gaig.dir/src/population/populationFactory.cpp.s

CMakeFiles/gaig.dir/src/population/individualFactory.cpp.o: CMakeFiles/gaig.dir/flags.make
CMakeFiles/gaig.dir/src/population/individualFactory.cpp.o: ../src/population/individualFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/Desktop/gaig/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/gaig.dir/src/population/individualFactory.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaig.dir/src/population/individualFactory.cpp.o -c /home/kamil/Desktop/gaig/src/population/individualFactory.cpp

CMakeFiles/gaig.dir/src/population/individualFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaig.dir/src/population/individualFactory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/Desktop/gaig/src/population/individualFactory.cpp > CMakeFiles/gaig.dir/src/population/individualFactory.cpp.i

CMakeFiles/gaig.dir/src/population/individualFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaig.dir/src/population/individualFactory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/Desktop/gaig/src/population/individualFactory.cpp -o CMakeFiles/gaig.dir/src/population/individualFactory.cpp.s

CMakeFiles/gaig.dir/src/population/population.cpp.o: CMakeFiles/gaig.dir/flags.make
CMakeFiles/gaig.dir/src/population/population.cpp.o: ../src/population/population.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/Desktop/gaig/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/gaig.dir/src/population/population.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaig.dir/src/population/population.cpp.o -c /home/kamil/Desktop/gaig/src/population/population.cpp

CMakeFiles/gaig.dir/src/population/population.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaig.dir/src/population/population.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/Desktop/gaig/src/population/population.cpp > CMakeFiles/gaig.dir/src/population/population.cpp.i

CMakeFiles/gaig.dir/src/population/population.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaig.dir/src/population/population.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/Desktop/gaig/src/population/population.cpp -o CMakeFiles/gaig.dir/src/population/population.cpp.s

CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/displayCircleVector.cpp.o: CMakeFiles/gaig.dir/flags.make
CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/displayCircleVector.cpp.o: ../src/img_utils/sfml_img_utils/displayCircleVector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kamil/Desktop/gaig/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building CXX object CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/displayCircleVector.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/displayCircleVector.cpp.o -c /home/kamil/Desktop/gaig/src/img_utils/sfml_img_utils/displayCircleVector.cpp

CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/displayCircleVector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/displayCircleVector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kamil/Desktop/gaig/src/img_utils/sfml_img_utils/displayCircleVector.cpp > CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/displayCircleVector.cpp.i

CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/displayCircleVector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/displayCircleVector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kamil/Desktop/gaig/src/img_utils/sfml_img_utils/displayCircleVector.cpp -o CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/displayCircleVector.cpp.s

# Object files for target gaig
gaig_OBJECTS = \
"CMakeFiles/gaig.dir/gaig.cpp.o" \
"CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_image.cpp.o" \
"CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_pixel.cpp.o" \
"CMakeFiles/gaig.dir/src/rand_generation/random_parameter.cpp.o" \
"CMakeFiles/gaig.dir/src/rand_generation/uniform_random_parameter.cpp.o" \
"CMakeFiles/gaig.dir/src/evolution/Circle.cpp.o" \
"CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/display_circle.cpp.o" \
"CMakeFiles/gaig.dir/src/main_class/geneticEvolution.cpp.o" \
"CMakeFiles/gaig.dir/src/population/individual.cpp.o" \
"CMakeFiles/gaig.dir/src/population/individual1.cpp.o" \
"CMakeFiles/gaig.dir/src/population/individual2.cpp.o" \
"CMakeFiles/gaig.dir/src/population/population1.cpp.o" \
"CMakeFiles/gaig.dir/src/population/population2.cpp.o" \
"CMakeFiles/gaig.dir/src/population/populationFactory.cpp.o" \
"CMakeFiles/gaig.dir/src/population/individualFactory.cpp.o" \
"CMakeFiles/gaig.dir/src/population/population.cpp.o" \
"CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/displayCircleVector.cpp.o"

# External object files for target gaig
gaig_EXTERNAL_OBJECTS =

gaig: CMakeFiles/gaig.dir/gaig.cpp.o
gaig: CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_image.cpp.o
gaig: CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/sfml_pixel.cpp.o
gaig: CMakeFiles/gaig.dir/src/rand_generation/random_parameter.cpp.o
gaig: CMakeFiles/gaig.dir/src/rand_generation/uniform_random_parameter.cpp.o
gaig: CMakeFiles/gaig.dir/src/evolution/Circle.cpp.o
gaig: CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/display_circle.cpp.o
gaig: CMakeFiles/gaig.dir/src/main_class/geneticEvolution.cpp.o
gaig: CMakeFiles/gaig.dir/src/population/individual.cpp.o
gaig: CMakeFiles/gaig.dir/src/population/individual1.cpp.o
gaig: CMakeFiles/gaig.dir/src/population/individual2.cpp.o
gaig: CMakeFiles/gaig.dir/src/population/population1.cpp.o
gaig: CMakeFiles/gaig.dir/src/population/population2.cpp.o
gaig: CMakeFiles/gaig.dir/src/population/populationFactory.cpp.o
gaig: CMakeFiles/gaig.dir/src/population/individualFactory.cpp.o
gaig: CMakeFiles/gaig.dir/src/population/population.cpp.o
gaig: CMakeFiles/gaig.dir/src/img_utils/sfml_img_utils/displayCircleVector.cpp.o
gaig: CMakeFiles/gaig.dir/build.make
gaig: ../deps/sfml/lib/libsfml-graphics.so.2.5.1
gaig: ../deps/sfml/lib/libsfml-window.so.2.5.1
gaig: ../deps/sfml/lib/libsfml-system.so.2.5.1
gaig: CMakeFiles/gaig.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kamil/Desktop/gaig/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Linking CXX executable gaig"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gaig.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gaig.dir/build: gaig

.PHONY : CMakeFiles/gaig.dir/build

CMakeFiles/gaig.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gaig.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gaig.dir/clean

CMakeFiles/gaig.dir/depend:
	cd /home/kamil/Desktop/gaig/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kamil/Desktop/gaig /home/kamil/Desktop/gaig /home/kamil/Desktop/gaig/build /home/kamil/Desktop/gaig/build /home/kamil/Desktop/gaig/build/CMakeFiles/gaig.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gaig.dir/depend

