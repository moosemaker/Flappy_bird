
cmake_minimum_required(VERSION 3.10)

project(cmake_sfml)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/Game.hpp
    src/Game.cpp
    src/Player.hpp
    src/Player.cpp
    src/Pipe.hpp
    src/Pipe.cpp

)

set (CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

set(BUILD_SHARED_LIBS OFF)

add_subdirectory(lib/sfml)

target_include_directories(${PROJECT_NAME}
    PUBLIC lib/sfml/include
)

target_link_directories(${PROJECT_NAME}
    PUBLIC lib/sfml
)

target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-window sfml-system)
