cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-11.2
    main.cpp
    mywindow.cpp
    widget.cpp
)
