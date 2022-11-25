cmake_minimum_required(VERSION 3.14)
project(BinaryInsertionSort)

set(CMAKE_CXX_STANDARD 11)

add_executable( BIS BinaryInsertionSort.h InsertionSort.cpp BinaryInsertionSort.cpp Ramen.cpp ramenRatings.csv LinkedList.cpp LinkedList.h)