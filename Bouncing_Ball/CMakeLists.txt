cmake_minimum_required(VERSION 3.21)
project(Bouncing_Ball)

set(CMAKE_CXX_STANDARD 14)

add_executable(Bouncing_Ball main.cpp PoolBallNumber.cpp PoolBallNumber.h PoolBall.cpp PoolBall.h HelperFunctions.cpp HelperFunctions.h Ball.cpp Ball.h)

target_link_libraries(Bouncing_Ball sfml-graphics sfml-audio)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
