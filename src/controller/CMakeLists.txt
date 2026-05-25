add_library(controller STATIC
    # Controller.cpp   ← ajoute tes fichiers ici quand tu les crées
    ControllerTuile.cpp
)

target_include_directories(controller PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

target_compile_features(controller PUBLIC cxx_std_17)