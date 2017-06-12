cmake_minimum_required(VERSION 2.8.9)
project (ci-test)
add_executable(citest main.cpp)
add_executable(catch_test test.cpp)