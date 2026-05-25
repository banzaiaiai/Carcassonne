add_library(view STATIC
    # View.cpp
    ViewTuile.cpp
)

target_include_directories(view PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

target_compile_features(view PUBLIC cxx_std_17)
# La view aura probablement besoin de SFML
# target_link_libraries(view PUBLIC SFML::Graphics)