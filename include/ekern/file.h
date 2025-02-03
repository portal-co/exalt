#pragma once

#include <stdint.h>
typedef uint64_t seek_t;
typedef uint8_t ftype_t;
#define seek_start(a) ((a * 3))
#define seek_cur(a) ((a * 3) + 1)
#define seek_end ((a * 3) + 2)
#define ftype_file 'f'

typedef struct FILE {
  void *user;
  void (*drop)(struct FILE *);
  short fd;
  ftype_t type;
} FILE;

void file_drop(FILE * x);
FILE* file_new(FILE x);
extern FILE* file_table[0x10000];