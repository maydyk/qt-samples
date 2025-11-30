cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-9.6.2-QGraphicsDropShadowEffect
    9_6_2_QGraphicsDropShadowEffect/main.cpp
)

qt_add_executable(qt-sample-9.6.3-QGraphicsBlurEffect
    9_6_3_QGraphicsBlurEffect/main.cpp
)

qt_add_executable(qt-sample-9.6.4-QGraphicsColorizeEffect
    9_6_4_QGraphicsColorizeEffect/main.cpp
)

qt_add_executable(qt-sample-9.6.5-QGraphicsOpacityEffect
    9_6_5_QGraphicsOpacityEffect/main.cpp
)
