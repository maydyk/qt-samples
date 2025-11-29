cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-7.7-QSortFilterProxyModel
    7_7_QSortFilterProxyModel/main.cpp
)

qt_add_executable(qt-sample-7.7-setFilterFixedString
    7_7_setFilterFixedString/main.cpp
)

qt_add_executable(qt-sample-7.7-setFilterRegularExpression
    7_7_setFilterRegularExpression/main.cpp
)

qt_add_executable(qt-sample-7.7-setFilterWildcard
    7_7_setFilterWildcard/main.cpp
)

qt_add_executable(qt-sample-7.7-setSortCaseSensitivity
    7_7_setSortCaseSensitivity/main.cpp
)

qt_add_executable(qt-sample-7.7-setSortLocaleAware
    7_7_setSortLocaleAware/main.cpp
)

qt_add_executable(qt-sample-7.7-sort
    7_7_sort/main.cpp
)