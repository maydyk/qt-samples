cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-6.12-QProgressBar
    6_12_QProgressBar/main.cpp
)

qt_add_executable(qt-sample-6.12-setInvertedAppearance
    6_12_setInvertedAppearance/main.cpp
)

qt_add_executable(qt-sample-6.12-setRange
    6_12_setRange/main.cpp
)

qt_add_executable(qt-sample-6.12-setTextVisible
    6_12_setTextVisible/main.cpp
)

qt_add_executable(qt-sample-6.12-Vertical
    6_12_Vertical/main.cpp
)