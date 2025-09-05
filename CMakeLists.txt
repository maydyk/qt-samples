cmake_minimum_required(VERSION 3.25)

project(qt-samples VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

# add_subdirectory(sample-1)
# add_subdirectory(sample-2)
# add_subdirectory(sample-3)
# add_subdirectory(sample-4)
# add_subdirectory(sample-5)
# add_subdirectory(sample-6)
# add_subdirectory(sample-7)
add_subdirectory(sample-8)
add_subdirectory(sample-9)

