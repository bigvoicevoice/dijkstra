cmake_minimum_required(VERSION 3.14)
project(dijkstra)

set(CMAKE_CXX_STANDARD 14)

add_executable(dijkstra main.cpp SparseGraph.h Edge.h Dijkstra.h IndexMinHeap.h DenseGraph.h ReadGraph.h)