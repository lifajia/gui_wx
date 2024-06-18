cmake_minimum_required(VERSION 3.28)
project(wx_test1)

set(CMAKE_CXX_STANDARD 17)

include_directories(${PROJECT_SOURCE_DIR}/include/)

find_package(wxWidgets CONFIG REQUIRED)

add_executable(${PROJECT_NAME} WIN32 main.cpp MainFrame.cpp ExitDialog.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE wx::core wx::base wx::aui wx::propgrid )
#target_link_libraries(${PROJECT_NAME} PRIVATE wxWidgets::wxWidgets)