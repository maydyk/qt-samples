cmake_minimum_required(VERSION 3.25)

qt_add_executable(qt-sample-5.10-icon
    5_10_icon/main.cpp
    )

target_link_libraries(qt-sample-5.10-icon PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.10-insertItem
    5_10_insertItem/main.cpp
    5_10_insertItem/widget.cpp
)

target_link_libraries(qt-sample-5.10-insertItem PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.10-QToolBox
    5_10_QToolBox/main.cpp
)

target_link_libraries(qt-sample-5.10-QToolBox PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.10-setCurrentIndex
    5_10_setCurrentIndex/main.cpp
    5_10_setCurrentIndex/widget.cpp
)

target_link_libraries(qt-sample-5.10-setCurrentIndex PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.10-setCurrentWidget
    5_10_setCurrentWidget/main.cpp
    5_10_setCurrentWidget/widget.cpp
)

target_link_libraries(qt-sample-5.10-setCurrentWidget PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.10-setItemEnabled
    5_10_setItemEnabled/main.cpp
    5_10_setItemEnabled/widget.cpp
)

target_link_libraries(qt-sample-5.10-setItemEnabled PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.10-setItemIcon
    5_10_setItemIcon/main.cpp
    5_10_setItemIcon/widget.cpp
)

target_link_libraries(qt-sample-5.10-setItemIcon PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.10-setItemText
    5_10_setItemText/main.cpp
    5_10_setItemText/widget.cpp
)

target_link_libraries(qt-sample-5.10-setItemText PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.10-setItemToolTip
    5_10_setItemToolTip/main.cpp
    5_10_setItemToolTip/widget.cpp
)

target_link_libraries(qt-sample-5.10-setItemToolTip PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.10-SIGNAL
    5_10_SIGNAL/main.cpp
    5_10_SIGNAL/widget.cpp
)

target_link_libraries(qt-sample-5.10-SIGNAL PRIVATE Qt6::Widgets)