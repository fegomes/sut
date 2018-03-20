cmake_minimum_required(VERSION 3.9)
project(sut VERSION 0.0.1 DESCRIPTION "generate unit test for cpp")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${sut_SOURCE_DIR}/bin)

add_subdirectory(third_library)

include_directories(${sut_SOURCE_DIR}/third_library/spdlog/include)

add_executable(sut main.cpp)