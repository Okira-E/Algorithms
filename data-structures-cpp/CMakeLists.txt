cmake_minimum_required(VERSION 3.16)
project(playground)

set(CMAKE_CXX_STANDARD 17)

add_executable(playground pairwise_product.cpp main.cpp linked_list.cpp linked_list.h Queue_header.h Queue_imp.cpp)