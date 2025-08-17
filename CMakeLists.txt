cmake_minimum_required(VERSION 3.20)
project(OldMaidenConsole CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(old_maiden src/main.cpp "src/Card.cpp" "src/Card.h")
target_include_directories(old_maiden PRIVATE include)