cmake_minimum_required(VERSION 3.15)
project(Primitiv)

set(CMAKE_CXX_STANDARD  20)
add_executable(Primitiv main.cpp)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )

target_link_libraries(Primitiv ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})



target_link_libraries(Primitiv sfml-graphics sfml-audio)