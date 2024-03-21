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

set(CMAKE_C_COMPILER "gcc")
set(CMAKE_C_FLAGS "-Wall -Wextra -Werror -Wpedantic -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function -Wno-unused-but-set-variable -Wno-unused-value -Wno-unused-label -Wno-unused-local-typedefs")


file(GLOB_RECURSE SOURCES "src/*.c")

add_executable(${PROJECT_NAME} ${SOURCES})
