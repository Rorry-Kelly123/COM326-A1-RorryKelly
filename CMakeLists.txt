cmake_minimum_required(VERSION 2.8)

project(test_com326a1)
include(gtest.cmake)

SET(COVERAGE OFF CACHE BOOL "Coverage")

include_directories(Assignment1)

#Add the sources using the set command
set(SOURCES Assignment1/UUDate.cpp utests/unit_tests.cpp)

add_executable(a1_run ${SOURCES})

#GTest needs threading support
find_package (Threads)
target_link_libraries(a1_run gtest ${CMAKE_THREAD_LIBS_INIT})

if (MSVC)
    target_compile_options(a1_run PRIVATE /std:c++17 /W4 /WX)

    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /Ox")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /Od")

    # VS 2017 removed tr1
    add_definitions(-DGTEST_HAS_TR1_TUPLE=0)
else()
    target_compile_options(a1_run PRIVATE -std=c++14 -g -Wall -Werror -Wextra -Wpedantic -Wconversion -Wswitch-default -Wswitch-enum -Wunreachable-code -Wwrite-strings -Wcast-align -Wshadow -Wundef)
    

    if (COVERAGE)
        target_compile_options(a1_run PRIVATE --coverage)
        target_link_libraries(a1_run PRIVATE --coverage)
    endif()
endif()
