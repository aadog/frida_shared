#include "library.h"
#include "stdlib.h"

int _frida_g_strlen(gchar* ptr){
    return strlen(ptr);
}

gchar* _frida_g_error_get_message(GError *error){
    return error->message;
}
int _frida_g_error_get_code(GError *error){
    return error->code;
}

GHashTableIter* _frida_g_hash_table_iter_new(){
    size_t psize=sizeof(GHashTableIter);
    GHashTableIter* pdata=(GHashTableIter*)malloc(psize);
    memset(pdata,0,psize);
    return pdata;
}
void _frida_g_hash_table_iter_free(GHashTableIter* i){
    free(i);
}

int g_strlen(gchar* ptr){
    return _frida_g_strlen(ptr);
}
gchar* g_error_get_message(GError *error){
    return _frida_g_error_get_message(error);
}
int g_error_get_code(GError *error){
    return _frida_g_error_get_code(error);
}
GHashTableIter* g_hash_table_iter_new(){
    return _frida_g_hash_table_iter_new();
}
void g_hash_table_iter_free(GHashTableIter* i){
    _frida_g_hash_table_iter_free(i);
}