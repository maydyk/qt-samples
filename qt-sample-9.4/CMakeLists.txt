cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-9.4.1-QGraphicsLineItem
    9_4_1_QGraphicsLineItem/main.cpp
)

qt_add_executable(qt-sample-9.4.3-QGraphicsRectItem
    9_4_3_QGraphicsRectItem/main.cpp
)

qt_add_executable(qt-sample-9.4.4-QGraphicsPolygonItem
    9_4_4_QGraphicsPolygonItem/main.cpp
)

qt_add_executable(qt-sample-9.4.5-QGraphicsEllipseItem
    9_4_5_QGraphicsEllipseItem/9_4_5_QGraphicsEllipseItem/main.cpp
)

qt_add_executable(qt-sample-9.4.5-setSpanAngle
    9_4_5_QGraphicsEllipseItem/9_4_5_setSpanAngle/main.cpp
)

qt_add_executable(qt-sample-9.4.6-QGraphicsPixmapItem
    9_4_6_QGraphicsPixmapItem/9_4_6_QGraphicsPixmapItem/main.cpp
)

qt_add_executable(qt-sample-9.4.6-setShapeMode
    9_4_6_QGraphicsPixmapItem/9_4_6_setShapeMode/main.cpp
)

qt_add_executable(qt-sample-9.4.7-QGraphicsSimpleTextItem
    9_4_7_QGraphicsSimpleTextItem/main.cpp
)

qt_add_executable(qt-sample-9.4.8-setHtml
    9_4_8_QGraphicsTextItem/9_4_8_setHtml/main.cpp
)

qt_add_executable(qt-sample-9.4.8-setPlainText
    9_4_8_QGraphicsTextItem/9_4_8_setPlainText/main.cpp
)

qt_add_executable(qt-sample-9.4.8-setTextInteractionFlags
    9_4_8_QGraphicsTextItem/9_4_8_setTextInteractionFlags/main.cpp
)
