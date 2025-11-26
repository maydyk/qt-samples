cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-6.5.1-insert
    6_5_1/6_5_insert/main.cpp
)

qt_add_executable(qt-sample-6.5.1-setAlignment
    6_5_1/6_5_setAlignment/main.cpp
)

qt_add_executable(qt-sample-6.5.1-setClearButtonEnabled
    6_5_1/6_5_setClearButtonEnabled/main.cpp
)

qt_add_executable(qt-sample-6.5.1-setCompleter
    6_5_1/6_5_setCompleter/main.cpp
)

qt_add_executable(qt-sample-6.5.1-setDragEnabled
    6_5_1/6_5_setDragEnabled/main.cpp
)

qt_add_executable(qt-sample-6.5.1-setEchoMode
    6_5_1/6_5_setEchoMode/main.cpp
)

qt_add_executable(qt-sample-6.5.1-setFrame
    6_5_1/6_5_setFrame/main.cpp
)

qt_add_executable(qt-sample-6.5.1-setMaxLength
    6_5_1/6_5_setMaxLength/main.cpp
)

qt_add_executable(qt-sample-6.5.1-setPlaceholderText
    6_5_1/6_5_setPlaceholderText/main.cpp
)

qt_add_executable(qt-sample-6.5.1-setReadOnly
    6_5_1/6_5_setReadOnly/main.cpp
)

qt_add_executable(qt-sample-6.5.1-setText
    6_5_1/6_5_setText/main.cpp
)

qt_add_executable(qt-sample-6.5.1-setTextMargins
    6_5_1/6_5_setTextMargins/main.cpp
)

qt_add_executable(qt-sample-6.5.1-SIGNAL
    6_5_1/6_5_SIGNAL/main.cpp
    6_5_1/6_5_SIGNAL/widget.cpp
)

qt_add_executable(qt-sample-6.5.1-text
    6_5_1/6_5_text/main.cpp
)

qt_add_executable(qt-sample-6.5.2-setInputMask
    6_5_2/6_5_setInputMask/main.cpp
    6_5_2/6_5_setInputMask/widget.cpp
)

qt_add_executable(qt-sample-6.5.3-QDoubleValidator
    6_5_3/6_5_QDoubleValidator/main.cpp
    6_5_3/6_5_QDoubleValidator/widget.cpp
)

qt_add_executable(qt-sample-6.5.3-QDoubleValidator_setNotation
    6_5_3/6_5_QDoubleValidator_setNotation/main.cpp
    6_5_3/6_5_QDoubleValidator_setNotation/widget.cpp
)

qt_add_executable(qt-sample-6.5.3-QIntValidator
    6_5_3/6_5_QIntValidator/main.cpp
    6_5_3/6_5_QIntValidator/widget.cpp
)

qt_add_executable(qt-sample-6.5.3-QRegularExpressionValidator
    6_5_3/6_5_QRegularExpressionValidator/main.cpp
    6_5_3/6_5_QRegularExpressionValidator/widget.cpp
)

qt_add_executable(qt-sample-6.5-QLineEdit
    6_5_QLineEdit/main.cpp
)