cmake_minimum_required(VERSION 3.28)
project(lab_7)

set(CMAKE_CXX_STANDARD 23)

add_executable(lab_7 main.cpp
        Node.h
        S_list.h
        D_list.h
        S_Node.h
        D_Node.h
        Q_list.h
        Q_array.h
        Stack_list.h
        Stack_array.h
        Circular_Q_list.h
        Circular_Q_array.h)
