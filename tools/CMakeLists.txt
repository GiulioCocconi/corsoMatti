cmake_minimum_required(VERSION 3.5)
project(NOME_PROGETTO VERSION VERSIONE)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin")
set(src_dir "${CMAKE_SOURCE_DIR}/src")

add_compile_options(-WAll)

# include_directories(include/) ## Dove sono i file .h .hpp
# add_library(libreria src/libreria.c)

add_executable(main "${src_dir}/main.c")

# target_link_libraries(main libreria)
