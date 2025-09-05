cmake_minimum_required(VERSION 3.10)
project(Coreria)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(coreria
    src/main.cpp
    src/core/core.cpp
    src/renderer/renderer.cpp
    src/audio/audio.cpp
)

target_include_directories(coreria PUBLIC src)
