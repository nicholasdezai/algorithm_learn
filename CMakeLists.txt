cmake_minimum_required(VERSION 3.26)
project(algorithm_learn)

set(CMAKE_CXX_STANDARD 14)

#add_executable(algorithm_learn main.cpp)
add_executable(quicksort DataStruct/sort/quicksort.cpp)
#add_executable(horse traversal "DFS_BFS/horse traversal.cpp")
add_executable(bubble DataStruct/sort/bubble.cpp)
add_executable(insertsort DataStruct/sort/insertsort.cpp)
add_executable(shellsort DataStruct/sort/shellsort.cpp)
add_executable(mergesort DataStruct/sort/mergesort.cpp)
add_executable(radixsort DataStruct/sort/radixsort.cpp)
add_executable(selectsort DataStruct/sort/selectsort.cpp)
add_executable(dnasort DataStruct/sort/dnasort.cpp)