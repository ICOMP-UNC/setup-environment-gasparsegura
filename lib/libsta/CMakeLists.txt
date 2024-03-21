cmake_minimum_required (VERSION 3.25)

project(
        staticLibrary
        VERSION 1.0.0
        DESCRIPTION "Example sta lib project"
        HOMEPAGE_URL "https://github.com/ICOMP-UNC/setup-environment-gasparsegura"
        LANGUAGES C
)

set(CMAKE_C_STANDARD 17)

include_directories (include)

file(GLOB_RECURSE SOURCES "src/*.c")

add_library(${PROJECT_NAME} STATIC ${SOURCES})
