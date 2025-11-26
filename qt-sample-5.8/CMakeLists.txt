cmake_minimum_required(VERSION 3.25)

qt_add_executable(qt-sample-5.8-Box
    5_8_Box/main.cpp
)

target_link_libraries(qt-sample-5.8-Box PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.8-HLine
    5_8_HLine/main.cpp
)

target_link_libraries(qt-sample-5.8-HLine PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.8-Panel
    5_8_Panel/main.cpp
)

target_link_libraries(qt-sample-5.8-Panel PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.8-setLineWidth
    5_8_setLineWidth/main.cpp
)

target_link_libraries(qt-sample-5.8-setLineWidth PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.8-setMidLineWidth
    5_8_setMidLineWidth/main.cpp
)

target_link_libraries(qt-sample-5.8-setMidLineWidth PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.8-StyledPanel
    5_8_StyledPanel/main.cpp
)

target_link_libraries(qt-sample-5.8-StyledPanel PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.8-VLine
    5_8_VLine/main.cpp
)

target_link_libraries(qt-sample-5.8-VLine PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.8-WinPanel
    5_8_WinPanel/main.cpp
)

target_link_libraries(qt-sample-5.8-WinPanel PRIVATE Qt6::Widgets)
