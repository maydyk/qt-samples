cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-8.1.1-QColor
    8_1_1_QColor/main.cpp
)

qt_add_executable(qt-sample-8.1.2-QPen_cap
    8_1_2_QPen/8_1_QPen_cap/main.cpp
    8_1_2_QPen/8_1_QPen_cap/widget.cpp
)

qt_add_executable(qt-sample-8.1.2-QPen_join
    8_1_2_QPen/8_1_QPen_join/main.cpp
    8_1_2_QPen/8_1_QPen_join/widget.cpp
)

qt_add_executable(qt-sample-8.1.2-QPen_style
    8_1_2_QPen/8_1_QPen_style/main.cpp
    8_1_2_QPen/8_1_QPen_style/widget.cpp
)

qt_add_executable(qt-sample-8.1.3-QBrush
    8_1_3_QBrush/main.cpp
    8_1_3_QBrush/widget.cpp
)

qt_add_executable(qt-sample-8.1.4-QLine
    8_1_4_QLine/main.cpp
    8_1_4_QLine/widget.cpp
)

qt_add_executable(qt-sample-8.1.5-QPolygon
    8_1_5_QPolygon/main.cpp
    8_1_5_QPolygon/widget.cpp
)

qt_add_executable(qt-sample-8.1.6-QFont
    8_1_6_QFont/main.cpp
    8_1_6_QFont/widget.cpp
)