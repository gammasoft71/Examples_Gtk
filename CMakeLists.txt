cmake_minimum_required(VERSION 3.2)
project(GtkExamples)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

if ("${CMAKE_BUILD_TYPE}" STREQUAL "")
  set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})
else()
  set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/${CMAKE_BUILD_TYPE})
endif()

add_subdirectory("src/application")
add_subdirectory("src/common_controls")
add_subdirectory("src/containers")
add_subdirectory("src/hello_world")
