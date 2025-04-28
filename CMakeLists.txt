cmake_minimum_required(VERSION 4.0)
project(
  qt_notepad
  LANGUAGES C CXX
)


set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(Qt6 REQUIRED COMPONENTS Widgets)
find_package(Qt6 REQUIRED COMPONENTS Core)
qt_standard_project_setup()

qt_add_executable(
  main
  main.cpp
  notepad.h
  notepad.cpp
)


target_link_libraries(main PRIVATE Qt6::Widgets Qt6::Core)
