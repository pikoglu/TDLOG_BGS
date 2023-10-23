cmake_minimum_required(VERSION 2.6)
project(KHAMATE)
list(APPEND CMAKE_FRAMEWORK_PATH /Library/Frameworks) #Mac, why not auto?

find_package(Imagine REQUIRED)

add_executable(KHAMATE main.cpp
    graphics.cpp graphics.h
    players.cpp players.h)
ImagineUseModules(KHAMATE Graphics)


