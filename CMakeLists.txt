cmake_minimum_required(VERSION 3.16)
project(DayBook3 LANGUAGES CXX)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

add_executable(DayBook3 main.cpp)

target_link_libraries(DayBook3 PRIVATE Qt6::Widgets)
