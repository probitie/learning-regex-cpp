cmake_minimum_required(VERSION 3.5)

project(learning-regex LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(learning-regex main.cpp)

install(TARGETS learning-regex
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
