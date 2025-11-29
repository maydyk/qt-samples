cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-9.1-addEllipse
    9_1_addEllipse/main.cpp
)

qt_add_executable(qt-sample-9.1-addItem
    9_1_addItem/main.cpp
)

qt_add_executable(qt-sample-9.1-addLine
    9_1_addLine/main.cpp
)

qt_add_executable(qt-sample-9.1-addPixmap
    9_1_addPixmap/main.cpp
)

qt_add_executable(qt-sample-9.1-addPolygon
    9_1_addPolygon/main.cpp
)

qt_add_executable(qt-sample-9.1-addRect
    9_1_addRect/main.cpp
)

qt_add_executable(qt-sample-9.1-addText
    9_1_addText/main.cpp
)

qt_add_executable(qt-sample-9.1-addWidget
    9_1_addWidget/main.cpp
)

qt_add_executable(qt-sample-9.1-Focus
    9_1_Focus/main.cpp
)

qt_add_executable(qt-sample-9.1-QGraphicsScene
    9_1_QGraphicsScene/main.cpp
)

qt_add_executable(qt-sample-9.1-selectedItems
    9_1_selectedItems/main.cpp
)
