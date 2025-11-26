cmake_minimum_required(VERSION 3.25)

qt_add_executable(qt-sample-4.9
    widget.h
    widget.cpp
    main.cpp
)

target_link_libraries(qt-sample-4.9 PRIVATE Qt6::Widgets)
