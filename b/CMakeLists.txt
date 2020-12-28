cmake_minimum_required(VERSION 2.8.12)
project(example)

add_subdirectory(pybind11)
pybind11_add_module(example example.cpp)
SET( CMAKE_CXX_FLAGS "-std=c++11 -O3")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(PYTHON3_INC_DIR "/home/hlx2/anapy35/include/include/python3.5m" CACHE PATH "")
set(PYTHON_EXECUTABLE "/home/hlxx2/anapy35/bin/python3.5m")


target_include_directories(example PRIVATE ${PYTHON3_INC_DIR})


