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

GHashTableIter* g_hash_table_iter_new(){
    size_t psize=sizeof(GHashTableIter);
    GHashTableIter* pdata=(GHashTableIter*)malloc(psize);
    memset(pdata,0,psize);
    return pdata;
}
void g_hash_table_iter_free(GHashTableIter* i){
    free(i);
}