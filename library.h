#ifndef FRIDA_SHARED_LIBRARY_H
#define FRIDA_SHARED_LIBRARY_H
#ifdef _MSC_VER
#include "devkit/windows/frida-core.h"
#endif
#ifdef __linux__
#include "devkit/linux/frida-core.h"
#endif
#ifdef __APPLE__
#include "devkit/macos/frida-core.h"
#endif
#endif //FRIDA_SHARED_LIBRARY_H
