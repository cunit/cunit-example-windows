# CMakeList.txt : CMake project for cunit-example-windows, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

file(GLOB PROTO_SRC ${CMAKE_CURRENT_LIST_DIR}/*.proto)
find_tool(Protobuf REQUIRED)
PROTOC(${CMAKE_CURRENT_BINARY_DIR}/generated PROTO_CPP_SRC ${PROTO_SRC})

add_executable (cunitexamplewindows "cunit-example-windows.cpp" "cunit-example-windows.h" ${PROTO_CPP_SRC})
target_include_directories(cunitexamplewindows PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/generated)

foreach(_pkg Protobuf)
  find_package(${_pkg} REQUIRED)
  message(STATUS "${_pkg}: ${${_pkg}_LIBRARIES}")
  target_link_libraries(cunitexamplewindows ${${_pkg}_LIBRARIES})
endforeach()

# TODO: Add tests and install targets if needed.
