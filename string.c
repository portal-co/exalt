#include <stdint.h>
#include <string.h>

// #ifdef __wasilibc_unmodified_upstream /* Use alternate WASI libc headers */
void *memcpy(void *dst, const void *src, size_t size) {
  return __builtin_memcpy(dst, src, size);
}
void *memmove(void *a, const void *b, size_t c) {
  return __builtin_memmove(a, b, c);
}
void *memset(void *a, int b, size_t c) { return __builtin_memset(a, b, c); }
// #endif
int memcmp(const void *vl, const void *vr, size_t n) {
  const unsigned char *l = vl, *r = vr;
  for (; n && *l == *r; n--, l++, r++)
    ;
  return n ? *l - *r : 0;
}
// #ifdef __wasilibc_unmodified_upstream /* Use alternate WASI libc headers */
void *memchr(const void *src, int c, size_t n) {
  const unsigned char *s = src;
  c = (unsigned char)c;
  for (; n && *s != c; s++, n--)
    ;
  return n ? (void *)s : 0;
}
// #endif

char *strcpy(char *d, const char *s) {
  for (; (*d = *s); s++, d++)
    ;

  return d;
};
char *strncpy(char *d, const char *s, size_t n) {
  for (; (*d = *s); s++, d++)
    if (!n--)
      return d;

  return d;
}

char *strcat(char *dest, const char *src) {
  strcpy(dest + strlen(dest), src);
  return dest;
}
char *strncat(char *d, const char *s, size_t n) {
  char *a = d;
  d += strlen(d);
  while (n && *s)
    n--, *d++ = *s++;
  *d++ = 0;
  return a;
}

// #ifdef __wasilibc_unmodified_upstream /* Use alternate WASI libc headers */
int strcmp(const char *, const char *);
// #endif
int strncmp(const char *, const char *, size_t);

int strcoll(const char *, const char *);
size_t strxfrm(char *__restrict, const char *__restrict, size_t);

char *strchr(const char *, int);
char *strrchr(const char *, int);

size_t strcspn(const char *, const char *);
size_t strspn(const char *, const char *);
char *strpbrk(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *__restrict, const char *__restrict);

// #ifdef __wasilibc_unmodified_upstream /* Use alternate WASI libc headers */
size_t strlen(const char *);
// #endif

char *strerror(int);
