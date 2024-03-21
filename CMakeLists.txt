cmake_minimum_required (VERSION 3.25)

project(
        lab0
        VERSION 1.0.0
        DESCRIPTION "Example project to setup development environment"
        HOMEPAGE_URL "https://github.com/ICOMP-UNC/setup-environment-gasparsegura"
        LANGUAGES C
)

set(CMAKE_C_STANDARD 17)

include_directories (include)

file(GLOB_RECURSE SOURCES "src/*.c")

add_executable(${PROJECT_NAME} ${SOURCES})

add_subdirectory(lib/libdyn)
add_subdirectory(lib/libsta)

target_include_directories(${PROJECT_NAME} PUBLIC lib/libdyn/include)
target_include_directories(${PROJECT_NAME} PUBLIC lib/libsta/include)

target_link_libraries(${PROJECT_NAME} dynamicLibrary staticLibrary)
