cmake_minimum_required(VERSION 3.16)
project(cpp_deeplearning)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp_deeplearning main.cpp mnist_ml/include/data.hpp mnist_ml/include/data_handler.hpp)