cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-6.10-ISOWeekNumbers
    6_10_ISOWeekNumbers/main.cpp
)

qt_add_executable(qt-sample-6.10-LongDayNames
    6_10_LongDayNames/main.cpp
)

qt_add_executable(qt-sample-6.10-NoHorizontalHeader
    6_10_NoHorizontalHeader/main.cpp
)

qt_add_executable(qt-sample-6.10-NoSelection
    6_10_NoSelection/main.cpp
)

qt_add_executable(qt-sample-6.10-NoVerticalHeader
    6_10_NoVerticalHeader/main.cpp
)

qt_add_executable(qt-sample-6.10-QCalendarWidget
    6_10_QCalendarWidget/main.cpp
)

qt_add_executable(qt-sample-6.10-setCurrentPage
    6_10_setCurrentPage/main.cpp
)

qt_add_executable(qt-sample-6.10-setDateRange
    6_10_setDateRange/main.cpp
)

qt_add_executable(qt-sample-6.10-setDateTextFormat
    6_10_setDateTextFormat/main.cpp
)

qt_add_executable(qt-sample-6.10-setFirstDayOfWeek
    6_10_setFirstDayOfWeek/main.cpp
)

qt_add_executable(qt-sample-6.10-setGridVisible
    6_10_setGridVisible/main.cpp
)

qt_add_executable(qt-sample-6.10-setHeaderTextFormat
    6_10_setHeaderTextFormat/main.cpp
)

qt_add_executable(qt-sample-6.10-setMinimumDate
    6_10_setMinimumDate/main.cpp
)

qt_add_executable(qt-sample-6.10-setNavigationBarVisible
    6_10_setNavigationBarVisible/main.cpp
)

qt_add_executable(qt-sample-6.10-setSelectedDate
    6_10_setSelectedDate/main.cpp
)

qt_add_executable(qt-sample-6.10-setWeekdayTextFormat
    6_10_setWeekdayTextFormat/main.cpp
)

qt_add_executable(qt-sample-6.10-ShortDayNames
    6_10_ShortDayNames/main.cpp
)

qt_add_executable(qt-sample-6.10-SIGNAL
    6_10_SIGNAL/main.cpp
    6_10_SIGNAL/widget.cpp
)

qt_add_executable(qt-sample-6.10-SingleLetterDayNames
    6_10_SingleLetterDayNames/main.cpp
)

qt_add_executable(qt-sample-6.10-SingleSelection
    6_10_SingleSelection/main.cpp
)