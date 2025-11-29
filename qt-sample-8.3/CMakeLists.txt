cmake_minimum_required(VERSION 3.28)

link_libraries(Qt6::Widgets)

qt_add_executable(qt-sample-8.3.1-fromImage
    8_3_1_QPixmap/8_3_fromImage/main.cpp
    8_3_1_QPixmap/8_3_fromImage/widget.cpp
)

qt_add_executable(qt-sample-8.3.1-IgnoreAspectRatio
    8_3_1_QPixmap/8_3_IgnoreAspectRatio/main.cpp
    8_3_1_QPixmap/8_3_IgnoreAspectRatio/widget.cpp
)

qt_add_executable(qt-sample-8.3.1-KeepAspectRatio
    8_3_1_QPixmap/8_3_KeepAspectRatio/main.cpp
    8_3_1_QPixmap/8_3_KeepAspectRatio/widget.cpp
)

qt_add_executable(qt-sample-8.3.1-KeepAspectRatioByExpanding
    8_3_1_QPixmap/8_3_KeepAspectRatioByExpanding/main.cpp
    8_3_1_QPixmap/8_3_KeepAspectRatioByExpanding/widget.cpp
)

qt_add_executable(qt-sample-8.3.1-QPixmap
    8_3_1_QPixmap/8_3_QPixmap/main.cpp
    8_3_1_QPixmap/8_3_QPixmap/widget.cpp
)

qt_add_executable(qt-sample-8.3.1-save
    8_3_1_QPixmap/8_3_save/main.cpp
    8_3_1_QPixmap/8_3_save/widget.cpp
)

qt_add_executable(qt-sample-8.3.1-scaledToHeight
    8_3_1_QPixmap/8_3_scaledToHeight/main.cpp
    8_3_1_QPixmap/8_3_scaledToHeight/widget.cpp
)

qt_add_executable(qt-sample-8.3.1-scaledToWidth
    8_3_1_QPixmap/8_3_scaledToWidth/main.cpp
    8_3_1_QPixmap/8_3_scaledToWidth/widget.cpp
)

qt_add_executable(qt-sample-8.3.1-toImage
    8_3_1_QPixmap/8_3_toImage/main.cpp
    8_3_1_QPixmap/8_3_toImage/widget.cpp
)

qt_add_executable(qt-sample-8.3.2-fromImage
    8_3_2_QBitmap/8_3_fromImage/main.cpp
    8_3_2_QBitmap/8_3_fromImage/widget.cpp
)

qt_add_executable(qt-sample-8.3.2-QBitmap
    8_3_2_QBitmap/8_3_QBitmap/main.cpp
    8_3_2_QBitmap/8_3_QBitmap/widget.cpp
)

qt_add_executable(qt-sample-8.3.3-convertToFormat
    8_3_3_QImage/8_3_convertToFormat/main.cpp
    8_3_3_QImage/8_3_convertToFormat/widget.cpp
)

qt_add_executable(qt-sample-8.3.3-copy
    8_3_3_QImage/8_3_copy/main.cpp
    8_3_3_QImage/8_3_copy/widget.cpp
)

qt_add_executable(qt-sample-8.3.3-fill
    8_3_3_QImage/8_3_fill/main.cpp
    8_3_3_QImage/8_3_fill/widget.cpp
)

qt_add_executable(qt-sample-8.3.3-invertPixels
    8_3_3_QImage/8_3_invertPixels/main.cpp
    8_3_3_QImage/8_3_invertPixels/widget.cpp
)

qt_add_executable(qt-sample-8.3.3-load
    8_3_3_QImage/8_3_load/main.cpp
    8_3_3_QImage/8_3_load/widget.cpp
)

qt_add_executable(qt-sample-8.3.3-mirrored
    8_3_3_QImage/8_3_mirrored/main.cpp
    8_3_3_QImage/8_3_mirrored/widget.cpp
)

qt_add_executable(qt-sample-8.3.3-save
    8_3_3_QImage/8_3_save/main.cpp
    8_3_3_QImage/8_3_save/widget.cpp
)

qt_add_executable(qt-sample-8.3.3-scaled
    8_3_3_QImage/8_3_scaled/main.cpp
    8_3_3_QImage/8_3_scaled/widget.cpp
)

qt_add_executable(qt-sample-8.3.3-scaledToHeight
    8_3_3_QImage/8_3_scaledToHeight/main.cpp
    8_3_3_QImage/8_3_scaledToHeight/widget.cpp
)

qt_add_executable(qt-sample-8.3.3-scaledToWidth
    8_3_3_QImage/8_3_scaledToWidth/main.cpp
    8_3_3_QImage/8_3_scaledToWidth/widget.cpp
)

qt_add_executable(qt-sample-8.3.3-size
    8_3_3_QImage/8_3_size/main.cpp
    8_3_3_QImage/8_3_size/widget.cpp
)
