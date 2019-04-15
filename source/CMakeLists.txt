cmake_minimum_required(VERSION 3.10)
project(programmiersprachen-aufgabe-1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Aufgage_1.7 1_3-DivisionChecker.cpp CatchSetup.cpp )
add_executable(Aufgabe_1.8 1-8_tests.cpp CatchSetup.cpp)
add_executable(Aufgabe_1.9 1-9_checksum.cpp CatchSetup.cpp)
add_executable(Aufgabe_1.10 1-10_sum_multiples.cpp CatchSetup.cpp)
add_executable(Aufgabe_1.11 1-11_fract.cpp CatchSetup.cpp)
add_executable(Aufgabe_1.12 CatchSetup.cpp 1-12_cylinder.cpp)
add_executable(Aufgabe_1.13 CatchSetup.cpp 1-13_factorial.cpp)
add_executable(Aufgabe_1.14 CatchSetup.cpp 1-14_is_prime.cpp)
add_executable(Aufgabe_1.15 1-15_mile_to_kilometer.cpp)