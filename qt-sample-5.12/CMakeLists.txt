cmake_minimum_required(VERSION 3.25)

qt_add_executable(qt-sample-5.12-ensureVisible
    5_12_ensureVisible/main.cpp)

target_link_libraries(qt-sample-5.12-ensureVisible PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.12-ensureWidgetVisible
    5_12_ensureWidgetVisible/main.cpp
)

target_link_libraries(qt-sample-5.12-ensureWidgetVisible PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.12-QScrollArea
    5_12_QScrollArea/main.cpp
)

target_link_libraries(qt-sample-5.12-QScrollArea PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.12-ScrollBarPolicy
    5_12_ScrollBarPolicy/main.cpp
)

target_link_libraries(qt-sample-5.12-ScrollBarPolicy PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.12-setAlignment
    5_12_setAlignment/main.cpp
)

target_link_libraries(qt-sample-5.12-setAlignment PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.12-setWidgetResizable
    5_12_setWidgetResizable/main.cpp
)

target_link_libraries(qt-sample-5.12-setWidgetResizable PRIVATE Qt6::Widgets)