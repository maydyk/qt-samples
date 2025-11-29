cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-9.2-centerOn
    9_2_centerOn/main.cpp
)

qt_add_executable(qt-sample-9.2-ensureVisible
    9_2_ensureVisible/main.cpp
)

qt_add_executable(qt-sample-9.2-fitInView
    9_2_fitInView/main.cpp
)

qt_add_executable(qt-sample-9.2-rotate
    9_2_rotate/main.cpp
)

qt_add_executable(qt-sample-9.2-scale
    9_2_scale/main.cpp
)

qt_add_executable(qt-sample-9.2-setScene
    9_2_setScene/main.cpp
)

qt_add_executable(qt-sample-9.2-shear
    9_2_shear/main.cpp
)
