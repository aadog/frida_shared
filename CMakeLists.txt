cmake_minimum_required(VERSION 3.19)
project(frida_shared C)
IF(NOT (EXISTS "${PROJECT_SOURCE_DIR}/frida-core.h"))
    message(FATAL_ERROR "frida-core.h not find,download source is:https://github.com/frida/frida/releases")
ENDIF()
IF(NOT (EXISTS "${PROJECT_SOURCE_DIR}/frida-core.lib"))
    message(FATAL_ERROR "frida-core.h not find,download source is:https://github.com/frida/frida/releases")
ENDIF()





set(CMAKE_C_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR})
link_directories(${PROJECT_SOURCE_DIR})

if(MSVC)
    set(CMAKE_MSVC_RUNTIME_LIBRARY MultiThreaded)
    add_library(frida_shared SHARED library.c library.h frida.def)
else()
    add_library(frida_shared SHARED library.c library.h)
endif()


target_link_libraries(frida_shared frida-core)