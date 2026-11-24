cmake_minimum_required(VERSION 3.16)
project(ps99-autofarm CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ps99autofarm
    src/main.cpp
    src/coins.cpp
    src/hatch.cpp
)

target_include_directories(ps99autofarm PRIVATE include)

if(WIN32)
    target_link_libraries(ps99autofarm PRIVATE userenv)
endif()
