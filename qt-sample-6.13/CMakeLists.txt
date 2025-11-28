cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-6.13-QSlider
    6_13_QSlider/main.cpp
)

qt_add_executable(qt-sample-6.13-setInvertedAppearance
    6_13_setInvertedAppearance/main.cpp
)

qt_add_executable(qt-sample-6.13-setInvertedControls
    6_13_setInvertedControls/main.cpp
)

qt_add_executable(qt-sample-6.13-setTickPosition
    6_13_setTickPosition/main.cpp
)

qt_add_executable(qt-sample-6.13-setTracking
    6_13_setTracking/main.cpp
    6_13_setTracking/widget.cpp
)

qt_add_executable(qt-sample-6.13-SIGNAL
    6_13_SIGNAL/main.cpp
    6_13_SIGNAL/widget.cpp
)

qt_add_executable(qt-sample-6.13-Step
    6_13_Step/main.cpp
)