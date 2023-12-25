cmake_minimum_required(VERSION 3.16.3)
project(Shitcoin VERSION 0.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

set(SRCS src/main.cxx)

add_executable(Shitcoin ${SRCS})
