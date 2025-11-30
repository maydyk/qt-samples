cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-10.3-about
    10_3_about/main.cpp
    10_3_about/widget.cpp
)

qt_add_executable(qt-sample-10.3-aboutQt
    10_3_aboutQt/main.cpp
    10_3_aboutQt/widget.cpp
)

qt_add_executable(qt-sample-10.3-critical
    10_3_critical/main.cpp
    10_3_critical/widget.cpp
)

qt_add_executable(qt-sample-10.3-information
    10_3_information/main.cpp
    10_3_information/widget.cpp
)

qt_add_executable(qt-sample-10.3-QMessageBox
    10_3_QMessageBox/main.cpp
    10_3_QMessageBox/widget.cpp
)

qt_add_executable(qt-sample-10.3-question
    10_3_question/main.cpp
    10_3_question/widget.cpp
)

qt_add_executable(qt-sample-10.3-setStandardButtons
    10_3_setStandardButtons/main.cpp
    10_3_setStandardButtons/widget.cpp
)

qt_add_executable(qt-sample-10.3-warning
    10_3_warning/main.cpp
    10_3_warning/widget.cpp
)
