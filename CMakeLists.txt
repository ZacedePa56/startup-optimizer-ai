cmake_minimum_required(VERSION 3.16)
project(startup-optimizer-ai CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(startupoptimizerai
    src/main.cpp
    src/scan.cpp
    src/classify.cpp
    src/tune.cpp
)

target_include_directories(startupoptimizerai PRIVATE include)

if(WIN32)
    target_link_libraries(startupoptimizerai PRIVATE userenv)
endif()
