cmake_minimum_required(VERSION 3.25)

qt_add_executable(qt-sample-5.11-insertWidget
    5_11_insertWidget/main.cpp
    5_11_insertWidget/widget.cpp
)

target_link_libraries(qt-sample-5.11-insertWidget PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.11-QSplitter
    5_11_QSplitter/main.cpp
)

target_link_libraries(qt-sample-5.11-QSplitter PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.11-saveState
    5_11_saveState/main.cpp
    5_11_saveState/widget.cpp
)

target_link_libraries(qt-sample-5.11-saveState PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.11-setChildrenCollapsible
    5_11_setChildrenCollapsible/main.cpp
    5_11_setChildrenCollapsible/widget.cpp
)

target_link_libraries(qt-sample-5.11-setChildrenCollapsible PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.11-setCollapsible
    5_11_setCollapsible/main.cpp
    5_11_setCollapsible/widget.cpp
)

target_link_libraries(qt-sample-5.11-setCollapsible PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.11-setHandleWidth
    5_11_setHandleWidth/main.cpp
    5_11_setHandleWidth/widget.cpp
)

target_link_libraries(qt-sample-5.11-setHandleWidth PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.11-setOpaqueResize
    5_11_setOpaqueResize/main.cpp
    5_11_setOpaqueResize/widget.cpp
)

target_link_libraries(qt-sample-5.11-setOpaqueResize PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.11-setSizes
    5_11_setSizes/main.cpp
    5_11_setSizes/widget.cpp
)

target_link_libraries(qt-sample-5.11-setSizes PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.11-setStretchFactor
    5_11_setStretchFactor/main.cpp
    5_11_setStretchFactor/widget.cpp
)

target_link_libraries(qt-sample-5.11-setStretchFactor PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.11-SIGNAL
    5_11_SIGNAL/main.cpp
    5_11_SIGNAL/widget.cpp
)

target_link_libraries(qt-sample-5.11-SIGNAL PRIVATE Qt6::Widgets)