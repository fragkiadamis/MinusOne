cmake_minimum_required(VERSION 3.21)

# The version is bumped by semantic-release on every release (see .releaserc.json).
project(MinusOne
    VERSION 0.1.0
    DESCRIPTION "Play along with a backing track's stems"
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()

qt_add_executable(MinusOne
    src/main.cpp
)

target_link_libraries(MinusOne PRIVATE Qt6::Widgets)

set_target_properties(MinusOne PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)
