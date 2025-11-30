cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-10.1-exec
    10_1_exec/main.cpp
    10_1_exec/mydialog.cpp
    10_1_exec/widget.cpp
)

qt_add_executable(qt-sample-10.1-setSizeGripEnabled
    10_1_setSizeGripEnabled/main.cpp
    10_1_setSizeGripEnabled/mydialog.cpp
    10_1_setSizeGripEnabled/widget.cpp
)
