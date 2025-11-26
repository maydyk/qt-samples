cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-6.3-QButtonGroup
    6_3_QButtonGroup/main.cpp
    6_3_QButtonGroup/widget.cpp
)

qt_add_executable(qt-sample-6.3-QRadioButton
    6_3_QRadioButton/main.cpp
    6_3_QRadioButton/widget.cpp
)

qt_add_executable(qt-sample-6.3-setIcon
    6_3_setIcon/main.cpp
    6_3_setIcon/widget.cpp
)