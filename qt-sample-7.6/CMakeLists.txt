cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-7.6-clearSelection
    7_6_clearSelection/main.cpp
)

qt_add_executable(qt-sample-7.6-Columns
    7_6_Columns/main.cpp
)

qt_add_executable(qt-sample-7.6-hasSelection
    7_6_hasSelection/main.cpp
)

qt_add_executable(qt-sample-7.6-isRowSelected
    7_6_isRowSelected/main.cpp
)

qt_add_executable(qt-sample-7.6-rowIntersectsSelection
    7_6_rowIntersectsSelection/main.cpp
)

qt_add_executable(qt-sample-7.6-Rows
    7_6_Rows/main.cpp
)

qt_add_executable(qt-sample-7.6-selectedColumns
    7_6_selectedColumns/main.cpp
)

qt_add_executable(qt-sample-7.6-selectedIndexes
    7_6_selectedIndexes/main.cpp
)

qt_add_executable(qt-sample-7.6-selectedRows
    7_6_selectedRows/main.cpp
)

qt_add_executable(qt-sample-7.6-setCurrentIndex
    7_6_setCurrentIndex/main.cpp
)

qt_add_executable(qt-sample-7.6-SIGNAL
    7_6_SIGNAL/main.cpp
    7_6_SIGNAL/widget.cpp
)

qt_add_executable(qt-sample-7.6-Toggle
    7_6_Toggle/main.cpp
)
