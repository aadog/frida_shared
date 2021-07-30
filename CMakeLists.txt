cmake_minimum_required(VERSION 3.19)
project(frida_shared C)

IF (WIN32)
    set(platform "windows")
ELSEIF (APPLE)
    set(platform "macos")
ELSEIF (UNIX)
    set(platform "linux")
ENDIF ()

message(info "${PROJECT_SOURCE_DIR}")

set(CMAKE_C_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR})
link_directories(${PROJECT_SOURCE_DIR}/devkit/${platform})

if(MSVC)
    set(CMAKE_MSVC_RUNTIME_LIBRARY MultiThreaded)
    set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} /DEF:${PROJECT_SOURCE_DIR}/devkit/windows/frida.def /NODEFAULTLIB:msvcrt.lib /NODEFAULTLIB:msvcrtd.lib")
elseif(APPLE)
    set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS}")
elseif()
    set(CMAKE_SHARED_LINKER_FLAGS "${CMAKE_SHARED_LINKER_FLAGS} -Wl,--version-script=${PROJECT_SOURCE_DIR}/devkit/${platform}/frida.map")
endif()




add_library(frida_shared SHARED ${PROJECT_SOURCE_DIR}/library.c ${PROJECT_SOURCE_DIR}/library.h devkit/${platform}/frida-core.h devkit/${platform}/import.c)
target_link_libraries(frida_shared frida-core)
if(APPLE)
    find_library(Cocoa Cocoa)
    target_link_libraries(frida_shared ${Cocoa} -lbsm -lresolv)
endif()