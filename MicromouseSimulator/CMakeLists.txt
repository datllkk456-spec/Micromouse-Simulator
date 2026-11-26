cmake_minimum_required(VERSION 3.16)

project(MicromouseSimulator
    VERSION 0.1.0
    DESCRIPTION "Micromouse 2D Simulation Project"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(CTest)

add_executable(MicromouseSimulator
    src/main.cpp
    src/app/Application.cpp
)

target_include_directories(MicromouseSimulator
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

if(MSVC)
    target_compile_options(MicromouseSimulator PRIVATE /W4)
else()
    target_compile_options(MicromouseSimulator PRIVATE
        -Wall
        -Wextra
        -Wpedantic
    )
endif()

if(BUILD_TESTING)
    add_executable(ApplicationTests
        tests/ApplicationTests.cpp
        src/app/Application.cpp
    )

    target_include_directories(ApplicationTests
        PRIVATE
            ${PROJECT_SOURCE_DIR}/include
    )

    if(MSVC)
        target_compile_options(ApplicationTests PRIVATE /W4)
    else()
        target_compile_options(ApplicationTests PRIVATE
            -Wall
            -Wextra
            -Wpedantic
        )
    endif()

    add_test(NAME ApplicationLifecycle COMMAND ApplicationTests)
endif()
