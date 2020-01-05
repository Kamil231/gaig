cmake_minimum_required(VERSION 3.15)
project(gaig)

set(CMAKE_CXX_STANDARD 14)
set(SFML_DIR deps/sfml/lib/cmake/SFML)
set(BOOST_DIR deps/boost/libs)

include_directories(src)
include_directories(deps/sfml/include/SFML)
include_directories(deps/boost)

find_package(SFML 2.5 COMPONENTS system window graphics)

add_executable(gaig
        src/img_utils/image.hpp
        src/img_utils/image_loader.hpp
        deps/sfml/include/SFML/Window.hpp
        gaig.cpp src/img_utils/sfml_img_utils/sfml_image.cpp
	src/img_utils/sfml_img_utils/sfml_image.h
        deps/sfml/include/SFML/Graphics/Image.hpp 
	src/img_utils/sfml_img_utils/sfml_pixel.cpp 
	src/img_utils/sfml_img_utils/sfml_pixel.h src/img_utils/pixel.h
        src/rand_generation/random_parameter.cpp 
	src/rand_generation/uniform_random_parameter.cpp 
	src/evolution/Circle.cpp 
	src/img_utils/sfml_img_utils/display_circle.cpp 
	src/img_utils/sfml_img_utils/display_circle.h  
	src/main_class/geneticEvolution.cpp
	src/main_class/geneticEvolution.h
	src/population/individual.cpp
	src/population/individual.h
	src/population/individual1.cpp
	src/population/individual1.h
	src/population/individual2.cpp
	src/population/individual2.h
	src/population/population1.cpp
	src/population/population1.h
	src/population/population2.cpp
	src/population/population2.h
	src/population/populationFactory.cpp
	src/population/populationFactory.h
	src/population/individualFactory.cpp
	src/population/individualFactory.h
	src/population/population.cpp
	src/population/population.h
	src/img_utils/sfml_img_utils/displayCircleVector.cpp 
	src/img_utils/sfml_img_utils/displayCircleVector.h)

target_link_libraries(gaig sfml-system sfml-window sfml-graphics)
