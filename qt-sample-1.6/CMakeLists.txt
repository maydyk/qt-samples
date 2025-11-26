cmake_minimum_required(VERSION 3.25)

qt_add_executable(qt-sample-3
    widget.h
    widget.cpp
    main.cpp
    widget.ui
)

target_link_libraries(qt-sample-3 PRIVATE Qt6::Widgets)
