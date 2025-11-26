cmake_minimum_required(VERSION 3.25)

qt_add_executable(qt-sample-5.4-addRow
    5_4_addRow/main.cpp
)

target_link_libraries(qt-sample-5.4-addRow PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.4-AllNonFixedFieldsGrow
    5_4_AllNonFixedFieldsGrow/main.cpp
)

target_link_libraries(qt-sample-5.4-AllNonFixedFieldsGrow PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.4-ExpandingFieldsGrow
    5_4_ExpandingFieldsGrow/main.cpp
)

target_link_libraries(qt-sample-5.4-ExpandingFieldsGrow PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.4-FieldsStayAtSizeHint
    5_4_FieldsStayAtSizeHint/main.cpp
)

target_link_libraries(qt-sample-5.4-FieldsStayAtSizeHint PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.4-insertRow
    5_4_insertRow/main.cpp
)

target_link_libraries(qt-sample-5.4-insertRow PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.4-QFormLayout
    5_4_QFormLayout/main.cpp
)

target_link_libraries(qt-sample-5.4-QFormLayout PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.4-setFormAlignment
    5_4_setFormAlignment/main.cpp
)

target_link_libraries(qt-sample-5.4-setFormAlignment PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.4-setHorizontalSpacing
    5_4_setHorizontalSpacing/main.cpp
)

target_link_libraries(qt-sample-5.4-setHorizontalSpacing PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.4-setLabelAlignment
    5_4_setLabelAlignment/main.cpp
)

target_link_libraries(qt-sample-5.4-setLabelAlignment PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.4-WrapAllRows
    5_4_WrapAllRows/main.cpp
)

target_link_libraries(qt-sample-5.4-WrapAllRows PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.4-WrapLongRows
    5_4_WrapLongRows/main.cpp
)

target_link_libraries(qt-sample-5.4-WrapLongRows PRIVATE Qt6::Widgets)
