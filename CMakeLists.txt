cmake_minimum_required(VERSION 3.10)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled main.cpp
         Home.cpp Home.h Apartment.cpp Apartment.h People.cpp People.h City.cpp City.h)
