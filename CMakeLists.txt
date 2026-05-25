cmake_minimum_required(VERSION 3.28)
project(Carcassonne LANGUAGES CXX)

set(CMAKE_CXX_COMPILER "/usr/bin/g++")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# SFML
include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.1.0
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

# Inclusion des sous-dossiers → chacun crée sa propre lib
add_subdirectory(src/model/logic)
add_subdirectory(src/controller)
add_subdirectory(src/view)

# Exécutable final
add_executable(main src/main.cpp)

target_include_directories(main PRIVATE include)

# On link toutes les libs + SFML
target_link_libraries(main PRIVATE
    model_logic
    controller
    view
    SFML::Graphics
)