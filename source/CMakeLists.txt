cmake_minimum_required(VERSION 3.10)
project(programmiersprachen-aufgabe-1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Aufgage_1.7 1_3-DivisionChecker.cpp CatchSetup.cpp )
add_executable(Aufgabe_1.8 tests.cpp CatchSetup.cpp)
add_executable(Aufgabe_1.9 checksum.cpp CatchSetup.cpp)
add_executable(Aufgabe_1.10 sum_multiples.cpp CatchSetup.cpp)
add_executable(Aufgabe_1.11 fract.cpp CatchSetup.cpp)
add_executable(Aufgabe_1.12 CatchSetup.cpp cylinder.cpp)
add_executable(Aufgabe_1.13 CatchSetup.cpp factorial.cpp)