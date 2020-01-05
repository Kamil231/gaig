set (Boost_USE_STATIC_LIBS OFF)

SET(BOOST_ROOT ../deps/boost-build)

find_package (Boost REQUIRED COMPONENTS unit_test_framework)
include_directories (${Boost_INCLUDE_DIRS})

add_executable (tests test.cpp
                ../src/evolution/Circle.cpp
                ../src/rand_generation/uniform_random_parameter.cpp
                ../src/rand_generation/random_parameter.cpp)
target_link_libraries (tests ${Boost_LIBRARIES})