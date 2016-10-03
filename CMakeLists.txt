cmake_minimum_required(VERSION 3.6)
project(yanovoy02)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES CWindow.cpp CViewWindowInfo.cpp main.cpp)
add_executable(yanovoy02 ${SOURCE_FILES})