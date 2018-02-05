cmake_minimum_required(VERSION 2.8)

project(init)
set(CMAKE_CXX_STANDARD 11)

find_package( OpenCV REQUIRED )
include_directories (/usr/local/include/tesseract)
link_directories (/usr/local/lib)

add_executable(${PROJECT_NAME} "main.cpp")
target_link_libraries( init ${OpenCV_LIBS} )
target_link_libraries (init lept tesseract)
