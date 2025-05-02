cmake_minimum_required(VERSION 3.10)
project(FLTKDemo)

find_package(FLTK REQUIRED)
add_executable(fltk_demo main.cpp)
target_link_libraries(fltk_demo ${FLTK_LIBRARIES})