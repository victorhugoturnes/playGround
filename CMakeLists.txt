cmake_minimum_required(VERSION 3.13)
project(playGround C)

set(CMAKE_C_STANDARD 99)

add_executable(playGround main.c funtionPointer/Structures/list/LinkedList.c funtionPointer/Structures/list/LinkedList.h Sorter/mergeSort.c Sorter/mergeSort.h)