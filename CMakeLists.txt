cmake_minimum_required (VERSION 2.8)

find_package(Boost 1.53 REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

#add_definitions(-O2) # weighted_median == 2.44749
#add_definitions(-O0) # weighted_median == 2.49747

add_executable(test src/main.cpp)
