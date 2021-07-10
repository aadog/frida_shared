#include "library.h"

int g_strlen(gchar* ptr){
    return strlen(ptr);
}

gchar* g_error_get_message(GError *error){
    return error->message;
}
int g_error_get_code(GError *error){
    return error->code;
}
