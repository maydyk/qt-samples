cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-10.2-addButton
    10_2_addButton/main.cpp
    10_2_addButton/mydialog.cpp
    10_2_addButton/widget.cpp
)

qt_add_executable(qt-sample-10.2-QDialogButtonBox
    10_2_QDialogButtonBox/main.cpp
    10_2_QDialogButtonBox/mydialog.cpp
    10_2_QDialogButtonBox/widget.cpp
)

qt_add_executable(qt-sample-10.2-setStandardButtons
    10_2_setStandardButtons/main.cpp
    10_2_setStandardButtons/mydialog.cpp
    10_2_setStandardButtons/widget.cpp
)
