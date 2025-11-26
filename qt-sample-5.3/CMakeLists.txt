cmake_minimum_required(VERSION 3.25)

qt_add_executable(qt-sample-5.3-addLayout
    5_3_addLayout/main.cpp
)

target_link_libraries(qt-sample-5.3-addLayout PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.3-addWidget
    5_3_addWidget/main.cpp
)

target_link_libraries(qt-sample-5.3-addWidget PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.3-QGridLayout
    5_3_QGridLayout/main.cpp
)

target_link_libraries(qt-sample-5.3-QGridLayout PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.3-QGridLayout_columnSpan
    5_3_QGridLayout_columnSpan/main.cpp
)

target_link_libraries(qt-sample-5.3-QGridLayout_columnSpan PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.3-QGridLayout_rowSpan
    5_3_QGridLayout_rowSpan/main.cpp
)

target_link_libraries(qt-sample-5.3-QGridLayout_rowSpan PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.3-setColumnMinimumWidth
    5_3_setColumnMinimumWidth/main.cpp
)

target_link_libraries(qt-sample-5.3-setColumnMinimumWidth PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.3-setColumnStretch
    5_3_setColumnStretch/main.cpp
)

target_link_libraries(qt-sample-5.3-setColumnStretch PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.3-setHorizontalSpacing
    5_3_setHorizontalSpacing/main.cpp
)

target_link_libraries(qt-sample-5.3-setHorizontalSpacing PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.3-setRowMinimumHeight
    5_3_setRowMinimumHeight/main.cpp
)

target_link_libraries(qt-sample-5.3-setRowMinimumHeight PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.3-setVerticalSpacing
    5_3_setVerticalSpacing/main.cpp
)

target_link_libraries(qt-sample-5.3-setVerticalSpacing PRIVATE Qt6::Widgets)

