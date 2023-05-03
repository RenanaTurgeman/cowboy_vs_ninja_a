cmake_minimum_required(VERSION 3.25)
project(cowboy_vs_ninja_a)

set(CMAKE_CXX_STANDARD 14)

add_executable(cowboy_vs_ninja_a Demo.cpp sources/Character.cpp sources/Cowboy.cpp sources/Ninja.cpp sources/OldNinja.cpp sources/Point.cpp sources/SmartTeam.cpp sources/Team.cpp sources/Team2.cpp sources/TrainedNinja.cpp sources/YoungNinja.cpp)
