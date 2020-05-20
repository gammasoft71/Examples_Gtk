cmake_minimum_required(VERSION 3.0)
project(window)

add_compile_options(-Wdeprecated-declarations)

find_package(PkgConfig)
pkg_check_modules(GTK gtk+-3.0)
include_directories(${GTK_INCLUDE_DIRS})
link_directories(${GTK_LIBRARY_DIRS})
link_libraries(${GTK_LIBRARIES})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
add_executable(${PROJECT_NAME} window.cpp)
