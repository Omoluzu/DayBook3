project(spreadsheet_lib)

set(SOURCES
    src/SpreadsheetModule.cpp
    src/gui/SpreadsheetView.cpp
    src/gui/MainSpreadsheet.cpp
)

set(HEADERS
    include/spreadsheet/SpreadsheetModule.h
    include/spreadsheet/gui/SpreadsheetView.h
    include/spreadsheet/gui/MainSpreadsheet.h
)

add_library(spreadsheet_lib STATIC ${SOURCES} ${HEADERS})

target_include_directories(spreadsheet_lib
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${CMAKE_SOURCE_DIR}/src/core/include
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)

find_package(Qt6 REQUIRED COMPONENTS
    Core
    Widgets
)

target_link_libraries(spreadsheet_lib PUBLIC
    Qt6::Core
    Qt6::Widgets
)
