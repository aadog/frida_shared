#ifndef FRIDA_SHARED_LIBRARY_H
#define FRIDA_SHARED_LIBRARY_H
#include <frida-core.h>
__declspec(dllexport) int g_strlen(gchar* ptr);
__declspec(dllexport) gchar* g_error_get_message(GError *error);
__declspec(dllexport) int g_error_get_code(GError *error);
#endif //FRIDA_SHARED_LIBRARY_H
