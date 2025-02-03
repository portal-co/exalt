#pragma once
#include <stdint.h>
void *malloc(size_t size);

void free(void *ptr);

void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);

int posix_memalign(void **memptr, size_t alignment, size_t size);

void *aligned_alloc(size_t alignment, size_t bytes);

size_t malloc_usable_size(void *ptr);