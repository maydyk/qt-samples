cmake_minimum_required(VERSION 3.28)

qt_add_executable(qt-sample-6.1-LinksAccessibleByKeyboard
    6_1_LinksAccessibleByKeyboard/main.cpp
    6_1_LinksAccessibleByKeyboard/widget.cpp
)

target_link_libraries(qt-sample-6.1-LinksAccessibleByKeyboard PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-LinksAccessibleByMouse
    6_1_LinksAccessibleByMouse/main.cpp
    6_1_LinksAccessibleByMouse/widget.cpp
)

target_link_libraries(qt-sample-6.1-LinksAccessibleByMouse PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-QLabel
    6_1_QLabel/main.cpp
)

target_link_libraries(qt-sample-6.1-QLabel PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-SelectedText
    6_1_SelectedText/main.cpp
    6_1_SelectedText/widget.cpp
)

target_link_libraries(qt-sample-6.1-SelectedText PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-setAlignment
    6_1_setAlignment/main.cpp
)

target_link_libraries(qt-sample-6.1-setAlignment PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-setBuddy
    6_1_setBuddy/main.cpp
)

target_link_libraries(qt-sample-6.1-setBuddy PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-setIndent
    6_1_setIndent/main.cpp
)

target_link_libraries(qt-sample-6.1-setIndent PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-setMargin
    6_1_setMargin/main.cpp
)

target_link_libraries(qt-sample-6.1-setMargin PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-setNum
    6_1_setNum/main.cpp
)

target_link_libraries(qt-sample-6.1-setNum PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-setOpenExternalLinks
    6_1_setOpenExternalLinks/main.cpp
)

target_link_libraries(qt-sample-6.1-setOpenExternalLinks PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-setPicture
    6_1_setPicture/main.cpp
)

target_link_libraries(qt-sample-6.1-setPicture PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-setPixmap
    6_1_setPixmap/main.cpp
)

target_link_libraries(qt-sample-6.1-setPixmap PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-setScaledContents
    6_1_setScaledContents/main.cpp
)

target_link_libraries(qt-sample-6.1-setScaledContents PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-setTextFormat_PlainText
    6_1_setTextFormat_PlainText/main.cpp
)

target_link_libraries(qt-sample-6.1-setTextFormat_PlainText PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-setTextFormat_RichText
    6_1_setTextFormat_RichText/main.cpp
)

target_link_libraries(qt-sample-6.1-setTextFormat_RichText PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-setWordWrap
    6_1_setWordWrap/main.cpp
)

target_link_libraries(qt-sample-6.1-setWordWrap PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-SIGNAL
    6_1_SIGNAL/main.cpp
    6_1_SIGNAL/widget.cpp
)

target_link_libraries(qt-sample-6.1-SIGNAL PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-TextEditable
    6_1_TextEditable/main.cpp
    6_1_TextEditable/widget.cpp
)

target_link_libraries(qt-sample-6.1-TextEditable PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-TextEditorInteraction
    6_1_TextEditorInteraction/main.cpp
    6_1_TextEditorInteraction/widget.cpp
)

target_link_libraries(qt-sample-6.1-TextEditorInteraction PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-TextSelectableByKeyboard
    6_1_TextSelectableByKeyboard/main.cpp
    6_1_TextSelectableByKeyboard/widget.cpp
)

target_link_libraries(qt-sample-6.1-TextSelectableByKeyboard PRIVATE Qt6::Widgets)

qt_add_executable(qt-sample-6.1-TextSelectableByMouse
    6_1_TextSelectableByMouse/main.cpp
    6_1_TextSelectableByMouse/widget.cpp
)

target_link_libraries(qt-sample-6.1-TextSelectableByMouse PRIVATE Qt6::Widgets)