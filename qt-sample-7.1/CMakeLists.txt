cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-7.1.1-addItem
    7_1_1/7_1_addItem/main.cpp
)

qt_add_executable(qt-sample-7.1.1-addItems
    7_1_1/7_1_addItems/main.cpp
)

qt_add_executable(qt-sample-7.1.1-currentText
    7_1_1/7_1_currentText/main.cpp
)

qt_add_executable(qt-sample-7.1.1-insertItem
    7_1_1/7_1_insertItem/main.cpp
)

qt_add_executable(qt-sample-7.1.1-insertItems
    7_1_1/7_1_insertItems/main.cpp
)

qt_add_executable(qt-sample-7.1.1-insertSeparator
    7_1_1/7_1_insertSeparator/main.cpp
)

qt_add_executable(qt-sample-7.1.1-setCurrentIndex
    7_1_1/7_1_setCurrentIndex/main.cpp
)

qt_add_executable(qt-sample-7.1.1-setItemText
    7_1_1/7_1_setItemText/main.cpp
)

qt_add_executable(qt-sample-7.1.1-setModel
    7_1_1/7_1_setModel/main.cpp
)

qt_add_executable(qt-sample-7.1.2-setCompleter
    7_1_2/7_1_setCompleter/main.cpp
)

qt_add_executable(qt-sample-7.1.2-setDuplicatesEnabled
    7_1_2/7_1_setDuplicatesEnabled/main.cpp
)

qt_add_executable(qt-sample-7.1.2-setIconSize
    7_1_2/7_1_setIconSize/main.cpp
)

qt_add_executable(qt-sample-7.1.2-setInsertPolicy
    7_1_2/7_1_setInsertPolicy/main.cpp
)

qt_add_executable(qt-sample-7.1.2-setMaxVisibleItems
    7_1_2/7_1_setMaxVisibleItems/main.cpp
)

qt_add_executable(qt-sample-7.1.2-setSizeAdjustPolicy
    7_1_2/7_1_setSizeAdjustPolicy/main.cpp
)

qt_add_executable(qt-sample-7.1.2-setValidator
    7_1_2/7_1_setValidator/main.cpp
)

qt_add_executable(qt-sample-7.1.3-find
    7_1_3/7_1_find/main.cpp
)

qt_add_executable(qt-sample-7.1.4-SIGNAL
    7_1_4/7_1_SIGNAL/main.cpp
    7_1_4/7_1_SIGNAL/widget.cpp
)

qt_add_executable(qt-sample-7.1-QComboBox
    7_1_QComboBox/main.cpp
)
