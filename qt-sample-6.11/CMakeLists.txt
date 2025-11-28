cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-6.11-Filled
    6_11_Filled/main.cpp
)

qt_add_executable(qt-sample-6.11-Flat
    6_11_Flat/main.cpp
)

qt_add_executable(qt-sample-6.11-Outline
    6_11_Outline/main.cpp
)

qt_add_executable(qt-sample-6.11-QLCDNumber 
    6_11_QLCDNumber/main.cpp
)

qt_add_executable(qt-sample-6.11-setBinMode
    6_11_setBinMode/main.cpp
)

qt_add_executable(qt-sample-6.11-setMode
    6_11_setMode/main.cpp
)

qt_add_executable(qt-sample-6.11-setSmallDecimalPoint
    6_11_setSmallDecimalPoint/main.cpp
)