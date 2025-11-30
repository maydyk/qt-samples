cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-9.5-createItemGroup
    9_5_createItemGroup/main.cpp
)

qt_add_executable(qt-sample-9.5-QGraphicsItemGroup
    9_5_QGraphicsItemGroup/main.cpp
)

qt_add_executable(qt-sample-9.5-setGroup
    9_5_setGroup/main.cpp
)
