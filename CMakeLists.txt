# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)
include(${CMAKE_CURRENT_LIST_DIR}/.cunit/cunit.cmake)
project ("cunit-example-windows")

# Include sub-projects.
add_subdirectory ("cunit-example-windows")
