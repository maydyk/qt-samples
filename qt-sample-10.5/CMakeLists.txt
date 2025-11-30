cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-10.5-getExistingDirectory
    10_5_getExistingDirectory/main.cpp
    10_5_getExistingDirectory/widget.cpp
)

qt_add_executable(qt-sample-10.5-getOpenFileName
    10_5_getOpenFileName/main.cpp
    10_5_getOpenFileName/widget.cpp
)

qt_add_executable(qt-sample-10.5-getOpenFileNames
    10_5_getOpenFileNames/main.cpp
    10_5_getOpenFileNames/widget.cpp
)

qt_add_executable(qt-sample-10.5-setAcceptMode
    10_5_setAcceptMode/main.cpp
    10_5_setAcceptMode/widget.cpp
)

qt_add_executable(qt-sample-10.5-setDirectory
    10_5_setDirectory/main.cpp
    10_5_setDirectory/widget.cpp
)

qt_add_executable(qt-sample-10.5-setFileMode
    10_5_setFileMode/main.cpp
    10_5_setFileMode/widget.cpp
)

qt_add_executable(qt-sample-10.5-setLabelText
    10_5_setLabelText/main.cpp
    10_5_setLabelText/widget.cpp
)

qt_add_executable(qt-sample-10.5-setNameFilter
    10_5_setNameFilter/main.cpp
    10_5_setNameFilter/widget.cpp
)

qt_add_executable(qt-sample-10.5-setNameFilters
    10_5_setNameFilters/main.cpp
    10_5_setNameFilters/widget.cpp
)

qt_add_executable(qt-sample-10.5-ShowDirsOnly
    10_5_ShowDirsOnly/main.cpp
    10_5_ShowDirsOnly/widget.cpp
)
