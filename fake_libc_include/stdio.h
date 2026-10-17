#ifndef __PYCPARSER_FAKE_STDIO_H__
#define __PYCPARSER_FAKE_STDIO_H__

typedef struct _FILE FILE;

int printf(const char *format, ...);
int scanf(const char *format, ...);
int fprintf(FILE *stream, const char *format, ...);
int sprintf(char *str, const char *format, ...);

#endif
