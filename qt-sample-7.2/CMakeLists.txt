cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-7.2-QFontComboBox
    7_2_QFontComboBox/main.cpp
)

qt_add_executable(qt-sample-7.2-setCurrentFont
    7_2_setCurrentFont/main.cpp
)

qt_add_executable(qt-sample-7.2-setFontFilters
    7_2_setFontFilters/main.cpp
)

qt_add_executable(qt-sample-7.2-SIGNAL
    7_2_SIGNAL/main.cpp
    7_2_SIGNAL/widget.cpp
)