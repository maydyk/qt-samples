cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-6.14-QDial
    6_14_QDial/main.cpp
)

qt_add_executable(qt-sample-6.14-setWrapping
    6_14_setWrapping/main.cpp
)

qt_add_executable(qt-sample-6.14-SIGNAL
    6_14_SIGNAL/main.cpp
    6_14_SIGNAL/widget.cpp
)