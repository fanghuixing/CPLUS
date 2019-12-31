cmake_minimum_required(VERSION 3.15)
project(CPLUS)

set(CMAKE_CXX_STANDARD 14)
link_libraries(ws2_32)
add_executable(CPLUS Scan.cpp)
