cmake_minimum_required(VERSION 3.15)
project(MediumProject VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# --- 1. Definir a Biblioteca "core" ---
add_library(core STATIC
    src/core/model/DataObject.cpp
    src/core/service/ProcessingService.cpp
    src/core/util/StringUtils.cpp
)

# Tornar o diretório "include" público para a biblioteca "core"
target_include_directories(core PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

# --- 2. Definir o Executável Principal ---
add_executable(${PROJECT_NAME} src/main.cpp)

# Ligar o executável à nossa biblioteca
target_link_libraries(${PROJECT_NAME} PRIVATE core)

# --- 3. Adicionar Testes ---
enable_testing()
add_subdirectory(tests)

