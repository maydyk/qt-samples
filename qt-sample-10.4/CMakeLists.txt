cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-10.4-getDouble
    10_4_getDouble/main.cpp
    10_4_getDouble/widget.cpp
)

qt_add_executable(qt-sample-10.4-getInt
    10_4_getInt/main.cpp
    10_4_getInt/widget.cpp
)

qt_add_executable(qt-sample-10.4-getItem
    10_4_getItem/main.cpp
    10_4_getItem/widget.cpp
)

qt_add_executable(qt-sample-10.4-getMultilineText
    10_4_getMultiLineText/main.cpp
    10_4_getMultiLineText/widget.cpp
)

qt_add_executable(qt-sample-10.4-getText
    10_4_getText/main.cpp
    10_4_getText/widget.cpp
)

qt_add_executable(qt-sample-10.4-getText_Password
    10_4_getText_Password/main.cpp
    10_4_getText_Password/widget.cpp
)

qt_add_executable(qt-sample-10.4-QInputDialog
    10_4_QInputDialog/main.cpp
    10_4_QInputDialog/widget.cpp
)

qt_add_executable(qt-sample-10.4-setComboBoxItems
    10_4_setComboBoxItems/main.cpp
    10_4_setComboBoxItems/widget.cpp
)

qt_add_executable(qt-sample-10.4-setDoubleValue
    10_4_setDoubleValue/main.cpp
    10_4_setDoubleValue/widget.cpp
)

qt_add_executable(qt-sample-10.4-setIntValue
    10_4_setIntValue/main.cpp
    10_4_setIntValue/widget.cpp
)

qt_add_executable(qt-sample-10.4-setTextEchoMode
    10_4_setTextEchoMode/main.cpp
    10_4_setTextEchoMode/widget.cpp
)

qt_add_executable(qt-sample-10.4-setTextValue
    10_4_setTextValue/main.cpp
    10_4_setTextValue/widget.cpp
)

qt_add_executable(qt-sample-10.4-UseListViewForComboBoxItems
    10_4_UseListViewForComboBoxItems/main.cpp
    10_4_UseListViewForComboBoxItems/widget.cpp
)
