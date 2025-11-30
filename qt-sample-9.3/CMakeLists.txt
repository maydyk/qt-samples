cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-9.3-ensureVisible
    9_3_ensureVisible/main.cpp
)

qt_add_executable(qt-sample-9.3-setEnabled
    9_3_setEnabled/main.cpp
)

qt_add_executable(qt-sample-9.3-setOpacity
    9_3_setOpacity/main.cpp
)

qt_add_executable(qt-sample-9.3-setRotation
    9_3_setRotation/main.cpp
)

qt_add_executable(qt-sample-9.3-setSelected
    9_3_setSelected/main.cpp
)

qt_add_executable(qt-sample-9.3-setToolTip
    9_3_setToolTip/main.cpp
)

qt_add_executable(qt-sample-9.3-setVisible
    9_3_setVisible/main.cpp
)

qt_add_executable(qt-sample-9.3-show
    9_3_show/main.cpp
)
