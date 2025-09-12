cmake_minimum_required(VERSION 3.25)

qt_add_executable(qt-sample-3.12
    main.cpp
)

target_link_libraries(qt-sample-3.12 PRIVATE Qt6::Widgets)
