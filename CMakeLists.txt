cmake_minimum_required(VERSION 3.28)
project(wx_test1)

set(CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR}/include/)
include_directories(${PROJECT_SOURCE_DIR}/include/gui/)

find_package(wxWidgets CONFIG REQUIRED)

add_executable(${PROJECT_NAME} WIN32 src/main.cpp src/gui/MainFrame.cpp src/gui/ExitDialog.cpp src/gui/MyTray.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE wx::core wx::base wx::aui wx::propgrid)
#target_link_libraries(${PROJECT_NAME} PRIVATE wxWidgets::wxWidgets)