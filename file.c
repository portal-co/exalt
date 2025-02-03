#include "ekern/file.h"
#include <malloc.h>

FILE* file_table[0x10000];
void file_drop(FILE * x){
    file_table[x->fd] = 0;
    (x->drop)(x);
    free(x);
}
FILE* file_new(FILE x){
    FILE* a = (FILE*)malloc(sizeof(x));
    *a = x;
    while(file_table[a->fd])a->fd++;
    file_table[a->fd] = a;
    return a;
}