add_library(model_logic STATIC
    Board.cpp
    Game.cpp
    Peont.cpp
    Player.cpp
    Position.cpp
    Tuile.cpp
)

target_include_directories(model_logic PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

target_compile_features(model_logic PUBLIC cxx_std_17)
target_link_libraries(model_logic PUBLIC SFML::Graphics)