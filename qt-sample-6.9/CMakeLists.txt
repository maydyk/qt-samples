cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-6.9-QDateEdit
    6_9_QDateEdit/main.cpp
)

qt_add_executable(qt-sample-6.9-setCalendarPopup
    6_9_setCalendarPopup/main.cpp
)

qt_add_executable(qt-sample-6.9-setCurrentSection
    6_9_setCurrentSection/main.cpp
)

qt_add_executable(qt-sample-6.9-setDate
    6_9_setDate/main.cpp
)

qt_add_executable(qt-sample-6.9-setDateTime
    6_9_setDateTime/main.cpp
)

qt_add_executable(qt-sample-6.9-setDateTimeRange
    6_9_setDateTimeRange/main.cpp
)

qt_add_executable(qt-sample-6.9-setDisplayFormat
    6_9_setDisplayFormat/main.cpp
)

qt_add_executable(qt-sample-6.9-setMinimumDateTime
    6_9_setMinimumDateTime/main.cpp
)

qt_add_executable(qt-sample-6.9-SIGNAL
    6_9_SIGNAL/main.cpp
    6_9_SIGNAL/widget.cpp
)