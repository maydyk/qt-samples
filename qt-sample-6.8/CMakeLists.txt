cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-6.8-editingFinished
    6_8_editingFinished/main.cpp
)

qt_add_executable(qt-sample-6.8-QDoubleSpinBox
    6_8_QDoubleSpinBox/main.cpp
    6_8_QDoubleSpinBox/widget.cpp
)

qt_add_executable(qt-sample-6.8-QSpinBox
    6_8_QSpinBox/main.cpp
    6_8_QSpinBox/widget.cpp
)

qt_add_executable(qt-sample-6.8-setAlignment
    6_8_setAlignment/main.cpp
)

qt_add_executable(qt-sample-6.8-setButtonSymbols
    6_8_setButtonSymbols/main.cpp
)

qt_add_executable(qt-sample-6.8-setFrame
    6_8_setFrame/main.cpp
)

qt_add_executable(qt-sample-6.8-setGroupSeparatorShown
    6_8_setGroupSeparatorShown/main.cpp
)

qt_add_executable(qt-sample-6.8-setKeyboardTracking
    6_8_setKeyboardTracking/main.cpp
    6_8_setKeyboardTracking/widget.cpp
)

qt_add_executable(qt-sample-6.8-setSpecialValueText
    6_8_setSpecialValueText/main.cpp
)

qt_add_executable(qt-sample-6.8-setWrapping
    6_8_setWrapping/main.cpp
)

qt_add_executable(qt-sample-6.8-stepBy
    6_8_stepBy/main.cpp
)

qt_add_executable(qt-sample-6.8-stepDown
    6_8_stepDown/main.cpp
)