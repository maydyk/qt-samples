cmake_minimum_required(VERSION 3.25)

qt_add_executable(qt-sample-5.6-Expanding
    5_6_Expanding/main.cpp
)

target_link_libraries(qt-sample-5.6-Expanding PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.6-Expanding2
    5_6_Expanding2/main.cpp
)

target_link_libraries(qt-sample-5.6-Expanding2 PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.6-Fixed
    5_6_Fixed/main.cpp
)

target_link_libraries(qt-sample-5.6-Fixed PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.6-Maximum
    5_6_Maximum/main.cpp
)

target_link_libraries(qt-sample-5.6-Maximum PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.6-Minimum
    5_6_Minimum/main.cpp
)

target_link_libraries(qt-sample-5.6-Minimum PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.6-Minimum2
    5_6_Minimum2/main.cpp
)

target_link_libraries(qt-sample-5.6-Minimum2 PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.6-MinimumExpanding
    5_6_MinimumExpanding/main.cpp
)

target_link_libraries(qt-sample-5.6-MinimumExpanding PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.6-MinimumExpanding2
    5_6_MinimumExpanding2/main.cpp
)

target_link_libraries(qt-sample-5.6-MinimumExpanding2 PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-5.6-Preferred
    5_6_Preferred/main.cpp
)

target_link_libraries(qt-sample-5.6-Preferred PRIVATE Qt6::Widgets)