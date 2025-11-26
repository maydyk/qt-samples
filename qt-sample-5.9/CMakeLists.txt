cmake_minimum_required(VERSION 3.25)

qt_add_executable(qt-sample-5.9-ElideLeft
    5_9_ElideLeft/widget.cpp
    5_9_ElideLeft/main.cpp
)

target_link_libraries(qt-sample-5.9-ElideLeft PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-ElideMiddle
    5_9_ElideMiddle/main.cpp
    5_9_ElideMiddle/widget.cpp
)

target_link_libraries(qt-sample-5.9-ElideMiddle PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-ElideNone
    5_9_ElideNone/main.cpp
    5_9_ElideNone/widget.cpp
)

target_link_libraries(qt-sample-5.9-ElideNone PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-ElideRight
    5_9_ElideRight/main.cpp
    5_9_ElideRight/widget.cpp
)

target_link_libraries(qt-sample-5.9-ElideRight PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-icon
    5_9_icon/main.cpp
)

target_link_libraries(qt-sample-5.9-icon PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-insertTab
    5_9_insertTab/main.cpp
    5_9_insertTab/widget.cpp
)

target_link_libraries(qt-sample-5.9-insertTab PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-QTabWidget
    5_9_QTabWidget/main.cpp
)

target_link_libraries(qt-sample-5.9-QTabWidget PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-setCurrentIndex 
    5_9_setCurrentIndex/main.cpp
    5_9_setCurrentIndex/widget.cpp
)

target_link_libraries(qt-sample-5.9-setCurrentIndex PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-setCurrentWidget
    5_9_setCurrentWidget/main.cpp
    5_9_setCurrentWidget/widget.cpp
)

target_link_libraries(qt-sample-5.9-setCurrentWidget PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-setDocumentMode
    5_9_setDocumentMode/main.cpp
    5_9_setDocumentMode/widget.cpp
)

target_link_libraries(qt-sample-5.9-setDocumentMode PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-setMovable
    5_9_setMovable/main.cpp
    5_9_setMovable/widget.cpp
)

target_link_libraries(qt-sample-5.9-setMovable PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-setTabBarAutoHide
    5_9_setTabBarAutoHide/main.cpp
    5_9_setTabBarAutoHide/widget.cpp
)

target_link_libraries(qt-sample-5.9-setTabBarAutoHide PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-setTabEnabled
    5_9_setTabEnabled/main.cpp
    5_9_setTabEnabled/widget.cpp
)

target_link_libraries(qt-sample-5.9-setTabEnabled PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-setTabIcon
    5_9_setTabIcon/main.cpp
    5_9_setTabIcon/widget.cpp
)

target_link_libraries(qt-sample-5.9-setTabIcon PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-setTabPosition_East
    5_9_setTabPosition_East/main.cpp
    5_9_setTabPosition_East/widget.cpp
)

target_link_libraries(qt-sample-5.9-setTabPosition_East PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-setTabPosition_South
    5_9_setTabPosition_South/main.cpp
    5_9_setTabPosition_South/widget.cpp
)

target_link_libraries(qt-sample-5.9-setTabPosition_South PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-setTabPosition_West
    5_9_setTabPosition_West/main.cpp
    5_9_setTabPosition_West/widget.cpp
)

target_link_libraries(qt-sample-5.9-setTabPosition_West PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-setTabsClosable
    5_9_setTabsClosable/main.cpp
    5_9_setTabsClosable/widget.cpp
)

target_link_libraries(qt-sample-5.9-setTabsClosable PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-setTabShape
    5_9_setTabShape/main.cpp
    5_9_setTabShape/widget.cpp
)

target_link_libraries(qt-sample-5.9-setTabShape PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-setTabText
    5_9_setTabText/main.cpp
    5_9_setTabText/widget.cpp
)

target_link_libraries(qt-sample-5.9-setTabText PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-setTabToolTip
    5_9_setTabToolTip/main.cpp
    5_9_setTabToolTip/widget.cpp
)

target_link_libraries(qt-sample-5.9-setTabToolTip PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-setTabVisible
    5_9_setTabVisible/main.cpp
    5_9_setTabVisible/widget.cpp
)

target_link_libraries(qt-sample-5.9-setTabVisible PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-setUsesScrollButtons
    5_9_setUsesScrollButtons/main.cpp
    5_9_setUsesScrollButtons/widget.cpp
)

target_link_libraries(qt-sample-5.9-setUsesScrollButtons PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.9-SIGNAL
    5_9_SIGNAL/main.cpp
    5_9_SIGNAL/widget.cpp
)

target_link_libraries(qt-sample-5.9-SIGNAL PRIVATE Qt6::Widgets)
