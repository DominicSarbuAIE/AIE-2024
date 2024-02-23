cmake_minimum_required(VERSION 3.27)
project(StringUtilityClass)

set(CMAKE_CXX_STANDARD 17)

add_executable(StringUtilityClass main.cpp
        StringUtil.cpp
        StringUtil.h)
