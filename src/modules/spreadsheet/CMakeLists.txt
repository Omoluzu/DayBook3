project(spreadsheet_lib)

set(SOURCES
    src/gui/SpreadsheetView.cpp
    src/gui/MainSpreadsheet.cpp
)

set(HEADERS
    include/spreadsheet/gui/SpreadsheetView.h
    include/spreadsheet/gui/MainSpreadsheet.h
)

add_library(spreadsheet_lib STATIC ${SOURCES} ${HEADERS})

target_include_directories(spreadsheet_lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

target_link_libraries(spreadsheet_lib PUBLIC Qt6::Widgets)
