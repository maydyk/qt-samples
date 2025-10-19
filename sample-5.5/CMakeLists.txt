cmake_minimum_required(VERSION 3.25)

qt_add_executable(qt-sample-5.5-QStackedLayout
    5_5_QStackedLayout/main.cpp
    5_5_QStackedLayout/widget.cpp
)

target_link_libraries(qt-sample-5.5-QStackedLayout PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.5-QStackedWidget
    5_5_QStackedWidget/main.cpp
    5_5_QStackedWidget/widget.cpp
)

target_link_libraries(qt-sample-5.5-QStackedWidget PRIVATE Qt::Widgets)
