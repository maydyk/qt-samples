cmake_minimum_required(VERSION 3.25)

qt_add_executable(qt-sample-5.7-QGroupBox
    5_7_QGroupBox/main.cpp
)

target_link_libraries(qt-sample-5.7-QGroupBox PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.7-setAlignment
    5_7_setAlignment/main.cpp
)

target_link_libraries(qt-sample-5.7-setAlignment PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.7-setCheckable
    5_7_setCheckable/main.cpp
)

target_link_libraries(qt-sample-5.7-setCheckable PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.7-setFlat
    5_7_setFlat/main.cpp
)

target_link_libraries(qt-sample-5.7-setFlat PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.7-toggled
    5_7_toggled/main.cpp
)

target_link_libraries(qt-sample-5.7-toggled PRIVATE Qt6::Widgets)