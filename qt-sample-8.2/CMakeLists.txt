cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-8.2-drawArc
    8_2_drawArc/main.cpp
    8_2_drawArc/widget.cpp
)

qt_add_executable(qt-sample-8.2-drawChord
    8_2_drawChord/main.cpp
    8_2_drawChord/widget.cpp
)

qt_add_executable(qt-sample-8.2-drawEllipse
    8_2_drawEllipse/main.cpp
    8_2_drawEllipse/widget.cpp
)

qt_add_executable(qt-sample-8.2-drawImage
    8_2_drawImage/main.cpp
    8_2_drawImage/widget.cpp
)

qt_add_executable(qt-sample-8.2-drawLines
    8_2_drawLines/main.cpp
    8_2_drawLines/widget.cpp
)

qt_add_executable(qt-sample-8.2-drawPie
    8_2_drawPie/main.cpp
    8_2_drawPie/widget.cpp
)

qt_add_executable(qt-sample-8.2-drawPixmap
    8_2_drawPixmap/main.cpp
    8_2_drawPixmap/widget.cpp
)

qt_add_executable(qt-sample-8.2-drawPoint
    8_2_drawPoint/main.cpp
    8_2_drawPoint/widget.cpp
)

qt_add_executable(qt-sample-8.2-drawPoints
    8_2_drawPoints/main.cpp
    8_2_drawPoints/widget.cpp
)

qt_add_executable(qt-sample-8.2-drawPolyline
    8_2_drawPolyline/main.cpp
    8_2_drawPolyline/widget.cpp
)

qt_add_executable(qt-sample-8.2-drawRect
    8_2_drawRect/main.cpp
    8_2_drawRect/widget.cpp
)

qt_add_executable(qt-sample-8.2-drawText
    8_2_drawText/main.cpp
    8_2_drawText/widget.cpp
)

qt_add_executable(qt-sample-8.2-fillRect
    8_2_fillRect/main.cpp
    8_2_fillRect/widget.cpp
)

qt_add_executable(qt-sample-8.2-QPicture
    8_2_QPicture/main.cpp
    8_2_QPicture/widget.cpp
)

qt_add_executable(qt-sample-8.2-rotate
    8_2_rotate/main.cpp
    8_2_rotate/widget.cpp
)

qt_add_executable(qt-sample-8.2-scale
    8_2_scale/main.cpp
    8_2_scale/widget.cpp
)

qt_add_executable(qt-sample-8.2-shear
    8_2_shear/main.cpp
    8_2_shear/widget.cpp
)

qt_add_executable(qt-sample-8.2-translate
    8_2_translate/main.cpp
    8_2_translate/widget.cpp
)