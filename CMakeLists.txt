cmake_minimum_required(VERSION 3.16)
project(DayBook3 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)

find_package(Qt6 REQUIRED COMPONENTS
    Core
    Widgets
)

add_subdirectory(src/modules/spreadsheet)

add_executable(DayBook3
    src/app/main.cpp
    src/app/MainWindow.cpp
)

target_link_libraries(DayBook3 PRIVATE
    spreadsheet_lib
    Qt6::Core
    Qt6::Widgets
)
