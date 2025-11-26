cmake_minimum_required(VERSION 3.25)

qt_add_executable(qt-sample-5.2-addLayout
    5_2_addLayout/main.cpp
)

target_link_libraries(qt-sample-5.2-addLayout PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.2-addSpacing
    5_2_addSpacing/main.cpp
)

target_link_libraries(qt-sample-5.2-addSpacing PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.2-addStretch
    5_2_addStretch/main.cpp
)

target_link_libraries(qt-sample-5.2-addStretch PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.2-addWidget
    5_2_addWidget/main.cpp
)

target_link_libraries(qt-sample-5.2-addWidget PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.2-AlignAbsolute
    5_2_AlignAbsolute/main.cpp
)

target_link_libraries(qt-sample-5.2-AlignAbsolute PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.2-HAlignment
    5_2_HAlignment/main.cpp
)

target_link_libraries(qt-sample-5.2-HAlignment PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.2-insertLayout
    5_2_insertLayout/main.cpp
)

target_link_libraries(qt-sample-5.2-insertLayout PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.2-insertSpacing
    5_2_insertSpacing/main.cpp
)

target_link_libraries(qt-sample-5.2-insertSpacing PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.2-insertStretch
    5_2_insertStretch/main.cpp
)

target_link_libraries(qt-sample-5.2-insertStretch PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.2-insertWidget
    5_2_insertWidget/main.cpp
)

target_link_libraries(qt-sample-5.2-insertWidget PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.2-QHBoxLayout
    5_2_QHBoxLayout/main.cpp
)

target_link_libraries(qt-sample-5.2-QHBoxLayout PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.2-QVBoxLayout
    5_2_QVBoxLayout/main.cpp
)

target_link_libraries(qt-sample-5.2-QVBoxLayout PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.2-removeWidget
    5_2_removeWidget/main.cpp
)

target_link_libraries(qt-sample-5.2-removeWidget PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.2-setDirection
    5_2_setDirection/main.cpp
)

target_link_libraries(qt-sample-5.2-setDirection PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.2-setSpacing
    5_2_setSpacing/main.cpp
)

target_link_libraries(qt-sample-5.2-setSpacing PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.2-VAlignment
    5_2_VAlignment/main.cpp
)

target_link_libraries(qt-sample-5.2-VAlignment PRIVATE Qt6::Widgets)