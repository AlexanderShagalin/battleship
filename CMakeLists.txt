cmake_minimum_required(VERSION 3.15)

project(solve LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SRC ./source)
include_directories(./include)

add_executable(battleship ${SRC}/main.cpp )

install(TARGETS battleship
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

add_subdirectory(tests)
