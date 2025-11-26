cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-6.2-animateClick
    6_2_animateClick/main.cpp
    6_2_animateClick/widget.cpp
)

qt_add_executable(qt-sample-6.2-click
    6_2_click/main.cpp
    6_2_click/widget.cpp
)

qt_add_executable(qt-sample-6.2-QCommandLinkButton
    6_2_QCommandLinkButton/main.cpp
)

qt_add_executable(qt-sample-6.2-setAutoExclusive
    6_2_setAutoExclusive/main.cpp
    6_2_setAutoExclusive/widget.cpp
)

qt_add_executable(qt-sample-6.2-setAutoRepeat
    6_2_setAutoRepeat/main.cpp
    6_2_setAutoRepeat/widget.cpp
)

qt_add_executable(qt-sample-6.2-setDefault
    6_2_setDefault/main.cpp
    6_2_setDefault/widget.cpp
)

qt_add_executable(qt-sample-6.2-setEnabled
    6_2_setEnabled/main.cpp
    6_2_setEnabled/widget.cpp
)

qt_add_executable(qt-sample-6.2-setFlat
    6_2_setFlat/main.cpp
    6_2_setFlat/widget.cpp
)

qt_add_executable(qt-sample-6.2-setIcon
    6_2_setIcon/main.cpp
    6_2_setIcon/widget.cpp
)

qt_add_executable(qt-sample-6.2-setMenu
    6_2_setMenu/main.cpp
    6_2_setMenu/widget.cpp
)

qt_add_executable(qt-sample-6.2-setShortcut
    6_2_setShortcut/main.cpp
    6_2_setShortcut/widget.cpp
)

qt_add_executable(qt-sample-6.2-setText
    6_2_setText/main.cpp
    6_2_setText/widget.cpp
)

qt_add_executable(qt-sample-6.2-SIGNAL
    6_2_SIGNAL/main.cpp
    6_2_SIGNAL/widget.cpp
)

qt_add_executable(qt-sample-6.2-toggle
    6_2_toggle/main.cpp
    6_2_toggle/widget.cpp
)