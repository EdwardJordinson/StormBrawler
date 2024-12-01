cmake_minimum_required(VERSION 3.30.0)
project(stormbrawler VERSION 0.0.1)

find_package(OpenGL REQUIRED)
add_subdirectory(src/glfw-3.4)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} OpenGL::GL)
target_link_libraries(${PROJECT_NAME} glfw)

