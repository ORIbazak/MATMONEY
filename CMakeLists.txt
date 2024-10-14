cmake_minimum_required(VERSION 3.23)
project(matmoney)

set(CMAKE_CXX_STANDARD 14)

add_executable(matmoney main.cpp Bursa.cpp Broker.cpp Option.cpp Stock.cpp)
