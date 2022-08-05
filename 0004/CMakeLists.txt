cmake_minimum_required(VERSION 3.0.0)
project(app0004 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(app0004 main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set_property(TARGET app0004 PROPERTY CXX_STANDARD 20)

if(MSVC)
    add_compile_options(/permissive- /W4 /WX)
else()
    add_compile_options(-pedantic-errors -Weffc++ -Wall -Wextra -pedantic -Wsign-conversion -Werror)
endif()

include(CPack)
